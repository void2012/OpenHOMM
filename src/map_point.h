/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         map_point.h
	Header: /src/map_point.h 
	Descr.: Map Points information
	
*************************************************************************/

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
    0 0 | z z z z | y y y y y y y y y y | 0 0 0 0 0 0 | x x x x x x x x x x 
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
	
	
};
