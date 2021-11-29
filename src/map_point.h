/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         map_point.h
	Header: /src/map_point.h 
	Descr.: Map Points information
	
*************************************************************************/

#include "map_cell_object.h"

// ---------------------------------------------------------------
// Enumerations
// ---------------------------------------------------------------

enum BmapCellAccess : unsigned __int8
{
  CA_CANNOTACCESS   = 0x1,
  CA_WATEREDGE      = 0x2,
  CA_UNKNOWNACCESS1 = 0x4,
  CA_UNKNOWNACCESS2 = 0x8,
  CA_ENTRANCE       = 0x10,
  CA_UNKNOWNACCESS3 = 0x20,
  CA_UNKNOWNACCESS4 = 0x40,
  CA_UNKNOWNACCESS5 = 0x80,
};

enum BmapCellmirror : unsigned __int8
{
  CM_TILEMIRRORH  = 0x1,
  CM_TILEMIRRORV  = 0x2,
  CM_RIVERMIRRORH = 0x4,
  CM_RIVERMIRRORV = 0x8,
  CM_ROADMIRRORH  = 0x10,
  CM_ROADMIRRORV  = 0x20,
  CM_CANDIG       = 0x40,
  CM_ANIMATED     = 0x80,
};

// ---------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------
int MapSizeX = 72;
int MapSizeY = 72;

// ---------------------------------------------------------------
// Structures
// ---------------------------------------------------------------

struct type_point { 
// type_point is a struct used to store a XYZ-point on an adventure map
// type_point - это структура, которую использует игра для хранения координат точек карты
	unsigned int XYZ = 0; 
	//X, Y, Z are stored in 4 bytes.
	//X, Y, Z хранятся в 4 байтах.
	//max_possible(X) = max_possible(Y) = 2^10 - 1 = 1023
	//max_possible(Z) = 2^4 - 1 = 15
	
	inline type_point::type_point() : XYZ(0)
	{ 
	} //inlined constructor//
	
	inline type_point::type_point(unsigned int const x, unsigned int const y, unsigned int const z) 
	{ 
		this->XYZ = (x & 0x3FF) + ((y & 0x3FF) << 16) + ((z & 0xF) << 26);
	} //0x419210// SoD 3.2
	/*
	[][][z][z] [z][z][y][y] [y][y][y][y] [y][y][y][y] [][][][] [][][x][x] [x][x][x][x] [x][x][x][x]
         (0 0 | z z) (z z | y y) (y y y y) (y y y y) | (0 0 0 0) (0 0 | x x) (x x x x) (x x x x)
	4 bytes for Z-coordinate, 10,10 bytes for X-coordinate and Y-coordinate respectively; 2+6 = 8 unused bytes
	4 байта для Z-координаты и по 10 байт для X и Y координаты, итого остается 2+6 = 8 неиспользованных байтов
	*/
	
	inline bool type_point::operator==(struct type_point const & other) const 
	{
		return ((this->XYZ) == (other->XYZ));
	} //inlined//
	
	inline bool type_point::operator!=(struct type_point const & other) const 
	{
		return ((this->XYZ) != (other->XYZ));
	} //inlined//
	
	inline uint type_point::getX() const { return this->XYZ & 0x3FF;        } //inlined// 
	inline uint type_point::getY() const { return (this->XYZ >> 16) & 0x3FF;} //inlined//
	inline uint type_point::getZ() const { return (this->XYZ >> 26) & 0xF;  } //inlined//
	bool type_point::is_valid() {
		return (this->getX() < MapSizeX && this->getY() < MapSizeY);
	} //0x4B1090// SoD 3.2
	
	unsigned int type_point::DistanceSquared(type_point const &other)const {
		return (this->getX() - other->getX())*(this->getX() - other->getX()) + (this->getY() - other->getY())*(this->getY() - other->getY());
	} 
}; //struct type_point

// ---------------------------------------------------------------
// Classes
// ---------------------------------------------------------------


class NewmapCell {
	public:
	                     NewmapCell();
	                     ~NewmapCell();
	
	//Class' own types
	class TObjectCell {
		public:
		CObject *    get_object(void)const; //TODO: discover CObject and TObjectCell types
	};
	
	//Getters
	enum EArtifact       GetArtifactIndex()const;
	NewmapCell *         get_trigger_cell();
   enum EAdventureObjectType get_map_object()const;
	unsigned long        get_map_extraInfo()const;
   enum EAdventureObjectType get_special_terrain()const;
	
	//Checkers
	bool                 cell_is_trigger()const;
	bool                 is_diggable()const;
	bool const           HasTriggerableEvent()const;
	
	//Member Variables 
	public:
	ExtraInfoUnion       m_UnionMapCell;
  	byte                 m_Land;
  	byte                 m_LandType;
  	byte                 m_River;
  	byte                 m_RiverType;
  	byte                 m_Road;
  	byte                 m_RoadType;
  	short                m_Unknown1;
  	BmapCellmirror       m_Mirror;
  	BmapCellAccess       m_Access;
  	short                m_Bits;
  	short                m_Unknown2;
  	int                  m_Draw;
  	int                  m_DrawEnd;
  	int                  m_DrawEnd2;
  	EAdventureObjectType m_AdventureObjectType;
  	short                m_ObjectSubType;
  	short                m_DrawnObjectIndex;
	
};
