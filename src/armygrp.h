/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         armygrp.h
	Header: /src/armygrp.h 
	Descr.: Provides the game armyGroup class and enums
	
*************************************************************************/

// ---------------------------------------------------------------
// Enumerations
// ---------------------------------------------------------------
enum ECreatureType : __int32 {
        CID_PIKEMAN =        0,
        CID_HALBERDIER =     1,
        CID_ARCHER =         2,
        CID_MARKSMAN =       3,
        CID_GRIFFIN =        4,
        CID_ROYAL_GRIFFIN =  5,
        CID_SWORDSMAN =      6,
        CID_CRUSADER =       7,
        CID_MONK =           8,
        CID_ZEALOT =         9,
        CID_CAVALIER =      10,
        CID_CHAMPION =      11,
        CID_ANGEL =         12,
        CID_ARCHANGEL =     13,
        CID_CENTAUR =       14,
        CID_CENTAUR_CAPTAIN=15,
        CID_DWARF =         16,
        CID_BATTLE_DWARF =  17,
        CID_WOOD_ELF =      18,
        CID_GRND_ELF =      19,
        CID_PEGASUS =       20,
        CID_SLVR_PEGASUS=   21,
        CID_DENDROID_GUARD= 22,
        CID_DENDROID_SLDIER=23,
        CID_UNICORN =       24,
        CID_WAR_UNICORN =   25,
        CID_GREEN_DRAGON =  26,
        CID_GOLD_DRAGON =   27,
        CID_GREMLIN =       28,
        CID_MASTER_GREMLIN =29,
        CID_STONE_GARGOYLE =30,
        CID_OBSIDIAN_GRGL = 31,
        CID_STONE_GOLEM =   32,
        CID_IRON_GOLEM =    33,
        CID_MAGE =          34,
        CID_ARCH_MAGE =     35,
        CID_GENIE =         36,
        CID_MASTER_GENIE =  37,
        CID_NAGA =          38,
        CID_NAGA_QUEEN =    39,
        CID_GIANT =         40,
        CID_TITAN =         41,
        CID_IMP =           42,
        CID_FAMILIAR =      43,
        CID_GOG =           44,
        CID_MAGOG =         45,
        CID_HELL_HOUND =    46,
        CID_CERBERUS =      47,
        CID_DEMON =         48,
        CID_HORNED_DEMON =  49,
        CID_PIT_FIEND =     50,
        CID_PIT_LORD =      51,
        CID_EFREETI =       52,
        CID_EFREET_SULTAN = 53,
        CID_DEVIL =         54,
        CID_ARCH_DEVIL =    55,
        CID_SKELETON =      56,
        CID_SKELETON_WARRIOR
                           =57,
        CID_WALKING_DEAD =  58,
        CID_ZOMBIE =        59,
        CID_WIGHT =         60,
        CID_WRAITH =        61,
        CID_VAMPIRE =       62,
        CID_VAMPIRE_LORD =  63,
        CID_LICH =          64,
        CID_POWER_LICH =    65,
        CID_BLACK_KNIGHT =  66,
        CID_DREAD_KNIGHT =  67,
        CID_BONE_DRAGON =   68,
        CID_GHOST_DRAGON =  69,
        CID_TROGLODYTE =    70,
        CID_INFERNAL_TROGLODYTE 
                           =71,
        CID_HARPY =         72,
        CID_HARPY_HAG =     73,
        CID_BEHOLDER =      74,
        CID_EVIL_EYE =      75,
        CID_MEDUSA =        76,
        CID_MEDUSA_QUEEN =  77,
        CID_MINOTAUR =      78,
        CID_MINOTAUR_KING = 79,
        CID_MANTICORE =     80,
        CID_SCORPICORE =    81,
        CID_RED_DRAGON =    82,
        CID_BLACK_DRAGON =  83,
        CID_GOBLIN =        84,
        CID_HOBGOBLIN =     85,
        CID_WOLF_RIDER =    86,
        CID_WOLF_RAIDER =   87,
        CID_ORC =           88,
        CID_ORC_CHIEFTAIN = 89,
        CID_OGRE =          90,
        CID_OGRE_MAGE =     91,
        CID_ROC =           92,
        CID_THUNDERBIRD =   93,
        CID_CYCLOPS =       94,
        CID_CYCLOPS_KING =  95,
        CID_BEHEMOTH =      96,
        CID_ANCIENT_BEHEMOTH 
                          = 97,
        CID_GNOLL =         98,
        CID_GNOLL_MARAUDER =99,
        CID_LIZARDMAN =    100,
        CID_LIZARD_WARRIOR=101,
        CID_GORGON       = 102,
        CID_MIGHTY_GORGON= 103,
        CID_SERPENT_FLY  = 104,
        CID_DRAGON_FLY   = 105,
        CID_BASILISK     = 106,
        CID_GREATER_BASILISK 
                         = 107,
        CID_WYVERN       = 108,
        CID_WYVERN_MONARCH 
                         = 109,
        CID_HYDRA        = 110,
        CID_CHAOS_HYDRA  = 111,
        CID_AIR_ELEMENTAL= 112,
        CID_EARTH_ELEMENTAL
                         = 113,
        CID_FIRE_ELEMENTAL 
                         = 114,
        CID_WATER_ELEMENTAL 
                         = 115,      
        CID_GOLD_GOLEM   = 116,
        CID_DIAMOND_GOLEM= 117,
        CID_PIXIE        = 118,
        CID_SPRITE       = 119,
        CID_PSYCHIC_ELEMENTAL 
                         = 120,
        CID_MAGIC_ELEMENTAL
                         = 121,
    CID_NOT_USED_122 = 122,
        CID_ICE_ELEMENTAL= 123,
    CID_NOT_USED_124 = 124,
        CID_MAGMA_ELEMENTAL
                         = 125,
    CID_NOT_USED_126 = 126,
        CID_STORM_ELEMENTAL
                         = 127,
    CID_NOT_USED_128 = 128,
        CID_ENERGY_ELEMENTAL 
                         = 129,
        CID_FIREBIRD     = 130,
        CID_PHOENIX      = 131,
        CID_AZURE_DRAGON = 132,
        CID_CRYSTAL_DRAGON 
                         = 133,
        CID_FAERIE_DRAGON 
                         = 134,
        CID_RUST_DRAGON  = 135,
        CID_ENCHANTER    = 136,
        CID_SHARPSHOOTER = 137,
        CID_HALFLING     = 138,
        CID_PEASANT      = 139,
        CID_BOAR         = 140,
        CID_MUMMY        = 141,
        CID_NOMAD        = 142,
        CID_ROGUE        = 143,
        CID_TROLL        = 144,
  CID_CATAPULT         = 145,
  CID_BALLISTA         = 146,
  CID_FIRST_AID_TENT   = 147,
  CID_AMMO_CART        = 148,
  CID_ARROW_TOWER      = 149,
  CID_OUT_OF_RANGE     = 150,
  CID_NONE = -1,
};

// ---------------------------------------------------------------
// Classes 
// ---------------------------------------------------------------
class armyGroup { 
        
        //Public Methods
        public:
        
        //Constructor and Destructor 
        armyGroup    (); //0x44A750//
	armyGroup    ( enum ECreatureType, int ); //0x44A770//
	~armyGroup   (); //?//    
        
//      type           function name (parameters) const?; //SoD address//
	bool           HasCreatures () const; //0x449370//
	void           SplitArmy    ( int, armyGroup*, int, bool, bool ); //0x449B60//
	void           Initialize   (); //0x44A7D0//
	bool           HasAllUndead () const; //0x44A7F0//
	bool           HasSomeUndead() const; //inline function//
	void           Dismiss      ( int ); //0x44A830//
	bool           IsMember     ( enum ECreatureType ) const; //0x44A850//
	int            GetAlignments( unsigned char * ) const; //0x44A880//
	int            CanJoin      ( int ) const; //0x44A920//
	int            get_AI_value () const; //0x44A950//
	int            GetNumArmies () const; //0x44A990//
	int            Add          ( enum ECreatureType, int, int ) //0x44A9B0//
	void           Swap         ( int ,armyGroup *, int ); //0x44AA30
	int            get_creature_total() const; //0x44AA70//
	int            get_creature_total( enum ECreatureType ) const; //0x44AA90// overload
	char const*    GetArmySizeName( int, int ); //0x44AAB0

        //zlib
	int            Save(void*); //0x44A6D0//
	int            Load(void*); //0x44A710//
        
        //Member Variables
        public:
        enum ECreatureType type[7]; 
	int                amount[7];
};
