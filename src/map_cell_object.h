/************************************************************************
			OpenHoMM Project by Void_17
		   		Licensed under MIT
		  
-------------------------------------------------------------------------
		         map_cell_object.h
	Header: /src/map_cell_object.h 
	Descr.: Map Cell object bitfields
	
*************************************************************************/

#include "artifact.h"

struct mapCellArtifact;
struct mapCellFlotsam;
struct mapCellScholar;
struct mapCellSeaChest;

// ---------------------------------------------------------------
// Enumerations
// ---------------------------------------------------------------
enum mapCellArtifact::EMapCellArtifact
{
  MCA_FREE =           0,
  MCA_GOLD2000 =       1,
  MCA_WISDOM =         2,
  MCA_LEADERSHIP =     3,
  MCA_GOLD2500_WOOD3 = 4,
  MCA_GOLD3000_WOOD5 = 5,
  MCA_FIGHT =          6,
};

enum mapCellFlotsam::EMapCellFlotSam : int
{
  FLOTSAM_EMPTY          = 0,
  FLOTSAM_WOOD5          = 1,
  FLOTSAM_WOOD5_GOLD200  = 2,
  FLOTSAM_WOOD10_GOLD500 = 3,
};

enum mapCellScholar::EMapCellScholar  : int
{
  MCS_PRIMARY_SKILL   = 0,
  MCS_SECONDARY_SKILL = 1,
  MCS_SPELL           = 2,
};

enum mapCellSeaChest::MapCellSeaChest : int
{
  MCSC_EMPTY             = 0,
  MCSC_GOLD1500          = 1,
  MCSC_GOLD1000_ARTIFACT = 2,
};

enum mapCellTreeOfKnowledge::EMapCellTree
{
  TREE_FREE = 0,
  TREE_GOLD = 1,
  TREE_GEMS = 2,
};


// ---------------------------------------------------------------
// Structures
// ---------------------------------------------------------------

//Default Bitfield
struct mapCellDefaultObject
{
  uint ID;
};

struct mapCellArtifact
{
	enum EMapCellArtifact b_Type :  4;
	unsigned int b_Unknown       : 15;
	unsigned int b_ID            : 12;
	unsigned int b_HasSetup      :  1;
};

struct mapCellCampfire
{
  unsigned int b_ResType  :  4;
  unsigned int b_ResValue : 28;
};

struct mapCellCorpse
{
  unsigned int b_ID          :  5;
  unsigned int b_Unknown1    :  1;
  unsigned int b_ArtifactID  : 10;
  unsigned int b_HasArtifact :  1;
  unsigned int b_Unknown2    : 15;
};

struct mapCellCreatureBank
{
  unsigned int b_Unknown1 :  5;
  unsigned int b_Visited  :  8;
  unsigned int b_ID       : 12;
  unsigned int b_Taken    :  1;
  unsigned int b_Unknown2 :  6;
};

struct mapCellEvent
{
  unsigned int b_ID        : 10;
  unsigned int b_Enabled   :  8;
  unsigned int b_AIEnabled :  1;
  unsigned int b_OneVisit  :  1;
  unsigned int b_Unknown1  : 12;
};

struct mapCellFlotsam
{
  enum EMapCellFlotSam Type;
};

struct mapCellFountainFortune
{
  unsigned int b_Unknown1   :  5;
  unsigned int b_Visited    :  8;
  int          b_BonusLuck  :  4;
  unsigned int b_Unknown2   : 15;
};

struct mapCellLeanTo
{
  unsigned int b_ID         :  5;
  unsigned int b_Unknown1   :  1;
  unsigned int b_ResValue   :  4;
  unsigned int b_ResType    :  4;
  unsigned int b_Unknown2   : 18;
};

struct mapCellMagicShrine
{
  unsigned int b_Unknown1    : 13;
  unsigned int b_Spell       : 10;
  unsigned int b_Unknown2    :  9;
};

struct mapCellMagicSpring
{
  unsigned int b_ID         :  5;
  unsigned int b_Unknown1   :  1;
  unsigned int b_Used       :  1;
  unsigned int b_Unknown2   : 25;
};

struct mapCellMonster
{
  unsigned int b_Amount          : 12;
  int          b_Aggression      :  5;
  unsigned int b_NoRun           :  1;
  unsigned int b_NoGrowth        :  1;
  unsigned int b_SetupIndex      :  8;
  unsigned int b_GrowthRemainder :  4;
  unsigned int b_HasSetup        :  1;
};

struct mapCellMysticGarden
{
  unsigned int b_id       :  5;
  unsigned int b_Unknown1 :  1;
  unsigned int b_ResType  :  4;
  unsigned int b_HasRes   :  1;
  unsigned int b_Unknown2 : 21;
};

struct mapCellPyramid
{
  unsigned int b_Available :  1;
  unsigned int b_ID        :  4;
  unsigned int b_Visited   :  8;
  unsigned int b_Spell     :  8;
  unsigned int b_Unknown   : 11;
};

struct mapCellPandorasBox //size is 2 bytes. Should be 4 instead???
{
  unsigned int b_id : 10;
};

struct mapCellRefugeeCamp
{
  int b_amount;
};

struct mapCellResource
{
  unsigned int b_Value      : 19;
  unsigned int b_SetupIndex : 12;
  unsigned int b_HasSetup   :  1;
};

struct mapCellScholar
{
  enum mapCellScholar b_Type :  3;
  unsigned int b_pSkill      :  3;
  unsigned int b_SSkill      :  7;
  unsigned int b_Spell       : 10;
  unsigned int b_Unknown     :  9;
};

struct mapCellScroll
{
  unsigned int b_Type     :  8;
  unsigned int b_Unknown  : 11;
  unsigned int b_ID       : 12;
  unsigned int b_HasSetup :  1;
};

struct mapCellSeaChest
{
  unsigned int b_Level        :  2;
  unsigned int b_Unknown1     :  1;
  enum EArtifact b_ArtifactID : 10;
  unsigned int b_Unknown2     : 19;
};

struct mapCellShipwreckSurvivor
{
  enum EArtifact b_artifactId;
};

struct mapCellShipyard
{
  unsigned __int32 b_Owner   : 8;
  unsigned __int32 b_X       : 8;
  unsigned __int32 b_Y       : 8;
  unsigned __int32 b_Unknown : 8;
	
	/*
	Like that:
  unsigned __int32 b_Owner   : 8;
  unsigned __int32 b_X       : 12; //so maximum possinle value X and Y is 255
  unsigned __int32 b_Y       : 12; //we can potentially use b_Unknown field to increase both X and Y by 4 unused bytes
	*/
};

struct mapCellTreasureChest
{
  unsigned int b_ArtifactID  : 10;
  unsigned int b_HasArtifact :  1;
  unsigned int b_Bonus       :  4;
  unsigned int b_Unknown     : 17;
};

struct mapCellTreeOfKnowledge
{
  unsigned int b_ID                  :  5;
  unsigned int b_Visited             :  8;
  enum mapCellTreeOfKnowledge b_Type :  2;
  unsigned int b_Unknown             : 17;
};

struct mapCellUniversity
{
  unsigned int b_Unknown1 :  5;
  unsigned int b_Visited  :  8;
  unsigned int b_ID       : 12;
  unsigned int b_Unknown2 :  7;
};

struct mapCellWagon
{
  unsigned int b_ResValue    : 5;
  unsigned int b_Visited     : 8;
  unsigned int b_hasBonus    : 1;
  unsigned int b_hasArtifact : 1;
  unsigned int b_ArtifactID  : 10;
  unsigned int b_ResType     : 4;
  unsigned int b_Unknown     : 3;
};

struct mapCellWarriorsTomb
{
  unsigned int b_HasArt     :  1;
  unsigned int b_Unknown    :  4;
  unsigned int b_Visited    :  8;
  unsigned int b_ArtifactID : 10;
  unsigned int b_Unknown2   :  9;
};

struct mapCellWaterMill
{
  unsigned int b_Gold_0_500_1000 : 5;
  unsigned int b_Visited         : 8;
  unsigned int b_Unknown1        : 19;
};

struct mapCellWindMill
{
  unsigned int b_ResType  : 4;
  unsigned int b_Unknown1 : 9;
  unsigned int b_ResValue : 4;
  unsigned int b_Unknown2 : 15;
};

struct mapCellWitchHut
{
  unsigned int b_Unknown1 :  5;
  __int32 b_Visited       :  8;
  __int32 b_SSkill        :  7;
  unsigned int b_Unknown2 : 12;
};



// ---------------------------------------------------------------
// Unions
// ---------------------------------------------------------------

struct ExtraInfoUnion
{
  union
  {
    unsigned int           un_Setup;
    mapCellArtifact        un_Artifact;
    	mapCellDefaultObject   un_BlackMarket;
    	mapCellDefaultObject   un_Boat;
    mapCellCampfire        un_Campfire;
    mapCellCorpse          un_Corpse;
    mapCellCreatureBank    un_CreatureBank;
    mapCellEvent           un_Event;
    mapCellFlotsam         un_Flotsam;
    mapCellFountainFortune un_FountainFortune;
    	mapCellDefaultObject   un_Garrison;
    	mapCellDefaultObject   un_Generator;
    	mapCellDefaultObject   un_Hero;
    mapCellLeanTo          un_LeanTo;
    	mapCellDefaultObject   un_LearningStone;
    	mapCellDefaultObject   un_Lighthouse;
    mapCellMagicShrine     un_MagicShrine;
    mapCellMagicSpring     un_MagicSpring;
   		mapCellDefaultObject   un_Mine;
    	mapCellDefaultObject   un_Monolith;
    mapCellMonster         un_WanderingCreature;
    mapCellMysticGarden    un_MysticGarden;
    	mapCellDefaultObject   un_Obelisk;
    	mapCellDefaultObject   un_OceanBottle;
    mapCellPandorasBox     un_PandorasBox;
    	mapCellDefaultObject   un_Prison;
    mapCellPyramid         un_Pyramid;
    	mapCellDefaultObject   un_questGuard;
    mapCellRefugeeCamp     un_refugeeCamp;
    mapCellResource        un_resource;
    mapCellScholar         un_scholar;
    mapCellScroll          un_spellScroll;
    mapCellSeaChest        un_seaChest;
    	mapCellDefaultObject   un_seerHut;
    mapCellShipwreckSurvivor un_shipwreckSurvivor;
    mapCellShipyard        un_shipyard;
    	mapCellDefaultObject   un_signPost;
    	mapCellDefaultObject   un_town;
    mapCellTreasureChest   un_treasureChest;
    mapCellTreeOfKnowledge un_treeKnowledge;
    mapCellUniversity      un_university;
    mapCellWagon           un_wagon;
    mapCellWarriorsTomb    un_warriorsTomb;
    mapCellWaterMill       un_watermill;
    mapCellWindMill        un_windmill;
    mapCellWitchHut        un_witchHut;
  };
};
