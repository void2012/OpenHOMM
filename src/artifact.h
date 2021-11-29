/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         artifact.h
	Header: /src/artifact.h 
	Descr.: Provides the game artifact class and enums
	
*************************************************************************/
#pragma once


// ---------------------------------------------------------------
// Constants
// ---------------------------------------------------------------
 
// ---------------------------------------------------------------
// Enumerations
// ---------------------------------------------------------------

enum EArtifact : int 
{
ART_SPELLBOOK             = 0,
ART_SPELL_SCROLL          = 1,
ART_GRAIL                 = 2,
ART_CATAPULT              = 3,
ART_BALLISTA              = 4,
ART_AMMO_CART             = 5,
ART_FIRST_AID_TENT        = 6,
ART_CENTAUR_AXE                    = 7,
ART_BLACKSHARD_OF_THE_DEAD_KNIGHT  = 8,
ART_GREATER_GNOLLS_FLAIL           = 9,
ART_OGRES_CLUB_OF_HAVOC            = 10,
ART_SWORD_OF_HELLFIRE              = 11,
ART_TITANS_GLADIUS                 = 12,
ART_SHIELD_OF_THE_DWARVEN_LORDS    = 13,
ART_SHIELD_OF_THE_YAWNING_DEAD     = 14,
ART_BUCKLER_OF_THE_GNOLL_KING      = 15,
ART_TARG_OF_THE_RAMPAGING_OGRE     = 16,
ART_SHIELD_OF_THE_DAMNED           = 17,
ART_SENTINELS_SHIELD               = 18,
ART_HELM_OF_THE_ALABASTER_UNICORN  = 19,
ART_SKULL_HELMET                   = 20,
ART_HELM_OF_CHAOS                  = 21,
ART_CROWN_OF_THE_SUPREME_MAGI      = 22,
ART_HELLSTORM_HELMET               = 23,
ART_THUNDER_HELMET                 = 24,
ART_BREASTPLATE_OF_PETRIFIED_WOOD  = 25,
ART_RIB_CAGE                       = 26,
ART_SCALES_OF_THE_GREATER_BASILISK = 27,
ART_TUNIC_OF_THE_CYCLOPS_KING      = 28,
ART_BREASTPLATE_OF_BRIMSTONE       = 29,
ART_TITANS_CUIRASS                 = 30,
ART_ARMOR_OF_WONDER                = 31,
ART_SANDALS_OF_THE_SAINT           = 32,
ART_CELESTIAL_NECKLACE_OF_BLISS    = 33,
ART_LIONS_SHIELD_OF_COURAGE        = 34,
ART_SWORD_OF_JUDGEMENT             = 35,
ART_HELM_OF_HEAVENLY_ENLIGHTENMENT = 36,
ART_QUIET_EYE_OF_THE_DRAGON        = 37,
ART_RED_DRAGON_FLAME_TONGUE        = 38,
ART_DRAGON_SCALE_SHIELD            = 39,
ART_DRAGON_SCALE_ARMOR             = 40,
ART_DRAGONBONE_GREAVES             = 41,
ART_DRAGON_WING_TABARD             = 42,
ART_NECKLACE_OF_DRAGONTEETH        = 43,
ART_CROWN_OF_DRAGONTOOTH           = 44,
ART_STILL_EYE_OF_THE_DRAGON        = 45,
ART_CLOVER_OF_FORTUNE              = 46,
ART_CARDS_OF_PROPHECY              = 47,
ART_LADYBIRD_OF_LUCK               = 48,
ART_BADGE_OF_COURAGE               = 49,
ART_CREST_OF_VALOR                 = 50,
ART_GLYPH_OF_GALLANTRY             = 51,
ART_SPECULUM                       = 52,
ART_SPYGLASS                       = 53,
ART_AMULET_OF_THE_UNDERTAKER       = 54,
ART_VAMPIRES_COWL                  = 55,
ART_DEAD_MANS_BOOTS                = 56,
ART_GARNITURE_OF_INTERFERENCE      = 57,
ART_SURCOAT_OF_COUNTERPOISE        = 58,
ART_BOOTS_OF_POLARITY              = 59,
ART_BOW_OF_ELVEN_CHERRYWOOD        = 60,
ART_BOWSTRING_OF_THE_UNICORNS_MANE = 61,
ART_ANGEL_FEATHER_ARROWS           = 62,
ART_BIRD_OF_PERCEPTION             = 63,
ART_STOIC_WATCHMAN                 = 64,
ART_EMBLEM_OF_COGNIZANCE           = 65,
ART_STATESMANS_MEDAL               = 66,
ART_DIPLOMATS_RING                 = 67,
ART_AMBASSADORS_SASH               = 68,
ART_RING_OF_THE_WAYFARER           = 69,
ART_EQUESTRIANS_GLOVES             = 70,
ART_NECKLACE_OF_OCEAN_GUIDANCE     = 71,
ART_ANGEL_WINGS                    = 72,
ART_CHARM_OF_MANA                  = 73,
ART_TALISMAN_OF_MANA               = 74,
ART_MYSTIC_ORB_OF_MANA             = 75,
ART_COLLAR_OF_CONJURING            = 76,
ART_RING_OF_CONJURING              = 77,
ART_CAPE_OF_CONJURING              = 78,
ART_ORB_OF_THE_FIRMAMENT           = 79,
ART_ORB_OF_SILT                    = 80,
ART_ORB_OF_TEMPESTUOUS_FIRE        = 81,
ART_ORB_OF_DRIVING_RAIN            = 82,
ART_RECANTERS_CLOAK                = 83,
ART_SPIRIT_OF_OPPRESSION           = 84,
ART_HOURGLASS_OF_THE_EVIL_HOUR     = 85,
ART_TOME_OF_FIRE_MAGIC             = 86,
ART_TOME_OF_AIR_MAGIC              = 87,
ART_TOME_OF_WATER_MAGIC            = 88,
ART_TOME_OF_EARTH_MAGIC            = 89,
ART_BOOTS_OF_LEVITATION            = 90,
ART_GOLDEN_BOW                     = 91,
ART_SPHERE_OF_PERMANENCE           = 92,
ART_ORB_OF_VULNERABILITY           = 93,
ART_RING_OF_VITALITY               = 94,
ART_RING_OF_LIFE                   = 95,
ART_VIAL_OF_LIFEBLOOD              = 96,
ART_NECKLACE_OF_SWIFTNESS          = 97,
ART_BOOTS_OF_SPEED                 = 98,
ART_CAPE_OF_VELOCITY               = 99,
ART_PENDANT_OF_DISPASSION          = 100,
ART_PENDANT_OF_SECOND_SIGHT        = 101,
ART_PENDANT_OF_HOLINESS            = 102,
ART_PENDANT_OF_LIFE                = 103,
ART_PENDANT_OF_DEATH               = 104,
ART_PENDANT_OF_FREE_WILL           = 105,
ART_PENDANT_OF_NEGATIVITY          = 106,
ART_PENDANT_OF_TOTAL_RECALL        = 107,
ART_PENDANT_OF_COURAGE             = 108,
ART_EVERFLOWING_CRYSTAL_CLOAK      = 109,
ART_RING_OF_INFINITE_GEMS          = 110,
ART_EVERPOURING_VIAL_OF_MERCURY    = 111,
ART_INEXHAUSTIBLE_CART_OF_ORE      = 112,
ART_EVERSMOKING_RING_OF_SULFUR     = 113,
ART_INEXHAUSTIBLE_CART_OF_LUMBER   = 114,
ART_ENDLESS_SACK_OF_GOLD           = 115,
ART_ENDLESS_BAG_OF_GOLD            = 116,
ART_ENDLESS_PURSE_OF_GOLD          = 117,
ART_LEGS_OF_LEGION                 = 118,
ART_LOINS_OF_LEGION                = 119,
ART_TORSO_OF_LEGION                = 120,
ART_ARMS_OF_LEGION                 = 121,
ART_HEAD_OF_LEGION                 = 122,
ART_SEA_CAPTAINS_HAT               = 123,
ART_SPELLBINDERS_HAT               = 124,
ART_SHACKLES_OF_WAR                = 125,
ART_ORB_OF_INHIBITION              = 126,                            
ART_VIAL_OF_DRAGON_BLOOD           = 127,
ART_ARMAGEDDONS_BLADE              = 128,
ART_ANGELIC_ALLIANCE               = 129,
ART_CLOAK_OF_THE_UNDEAD_KING       = 130,
ART_ELIXIR_OF_LIFE                 = 131,
ART_ARMOR_OF_THE_DAMNED            = 132,
ART_STATUE_OF_LEGION               = 133,
ART_POWER_OF_THE_DRAGON_FATHER     = 134,
ART_TITANS_THUNDER                 = 135,
ART_ADMIRALS_HAT                   = 136,
ART_BOW_OF_THE_SHARPSHOOTER        = 137,
ART_WIZARDS_WELL                   = 138,
ART_RING_OF_THE_MAGI               = 139,
ART_CORNUCOPIA                     = 140,
ART_ARTIFACT_NONE                  = -1 ,
};


enum EArtifactSlot : int 
{
ASL_HEAD           = 0 ,
ASL_SHOULDERS      = 1 ,
ASL_NECK           = 2 ,
ASL_RIGHT_HAND     = 3 ,
ASL_LEFT_HAND      = 4 ,
ASL_TORSO          = 5 ,
ASL_RIGHT_RING     = 6 ,
ASL_LEFT_RING      = 7 ,
ASL_FEET           = 8 ,
ASL_MISC1          = 9 ,
ASL_MISC2          = 10,
ASL_MISC3          = 11,
ASL_MISC4          = 12,
ASL_BALLISTA       = 13,
ASL_AMMO_CART      = 14,
ASL_FIRST_AID_TENT = 15,
ASL_CATAPULT       = 16,
ASL_SPELLBOOK      = 17,
ASL_MISC5          = 18,
};

// ---------------------------------------------------------------
// Classes
// ---------------------------------------------------------------

class type_artifact {
	
  //Public Methods
		public:
		
	            type_artifact(EArtifact);
		    type_artifact( SpellID );
	void        get_rollover_text(char *) const;
	std::string get_description() const;
	
	//Member Variables 
			public:	
	EArtifact   m_ID;
        int         m_Mod;
};
