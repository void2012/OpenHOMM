/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         hero.h
	Header: /src/hero.h 
	Descr.: Provides the game hero class and enums
	
*************************************************************************/
 
 #include "map_point.h"
 #include "artifact.h"
 #include "armygrp.h"
 #include "skill.h"
 
// ---------------------------------------------------------------
// Constants
// ---------------------------------------------------------------
 
// ---------------------------------------------------------------
// Enumerations
// ---------------------------------------------------------------
 
enum EHeroID : int
{
HT_ORRIN      = 0,
HT_VALESKA    = 1,
HT_EDRIC      = 2,
HT_SYLVIA     = 3,
HT_LORD_HAART = 4,
HT_SORSHA     = 5,
HT_CHRISTIAN  = 6,
HT_TYRIS      = 7,
HT_RION       = 8,
HT_ADELA      = 9,
HT_CUTHBERT   = 10,
HT_ADELAIDE   = 11,
HT_INGHAM     = 12,
HT_SANYA      = 13,
HT_LOYNIS     = 14,
HT_CAITLIN    = 15,
HT_MEPHALA    = 16,
HT_UFRETIN    = 17,
HT_JENOVA     = 18,
HT_RYLAND     = 19,
HT_THORGRIM   = 20,
HT_IVOR       = 21,
HT_CLANCY     = 22,
HT_KYRRE      = 23,
HT_CORONIUS   = 24,
HT_ULAND      = 25,
HT_ELLESHAR   = 26,
HT_GEM        = 27,
HT_MALCOM     = 28,
HT_MELODIA    = 29,
HT_ALAGAR     = 30,
HT_AERIS      = 31,
HT_PIQUEDRAM  = 32,
HT_THANE      = 33,
HT_JOSEPHINE  = 34,
HT_NEELA      = 35,
HT_TOROSAR    = 36,
HT_FAFNER     = 37,
HT_RISSA      = 38,
HT_IONA       = 39,
HT_ASTRAL     = 40,
HT_HALON      = 41,
HT_SERENA     = 42,
HT_DAREMYTH   = 43,
HT_THEODORUS  = 44,
HT_SOLMYR     = 45,
HT_CYRA       = 46,
HT_AINE       = 47,
HT_FIONA      = 48,
HT_RASHKA     = 49,
HT_MARIUS     = 50,
HT_IGNATIUS   = 51,
HT_OCTAVIA    = 52,
HT_CALH       = 53,
HT_PYRE       = 54,
HT_NYMUS      = 55,
HT_AYDEN      = 56,
HT_XYRON      = 57,
HT_AXSIS      = 58,
HT_OLEMA      = 59,
HT_CALID      = 60,
HT_ASH        = 61,
HT_ZYDAR      = 62,
HT_XARFAX     = 63,
HT_STRAKER    = 64,
HT_VOKIAL     = 65,
HT_MOANDOR    = 66,
HT_CHARNA     = 67,
HT_TAMIKA     = 68,
HT_ISRA       = 69,
HT_CLAVIUS    = 70,
HT_GALTHRAN   = 71,
HT_SEPTIENNA  = 72,
HT_AISLINN    = 73,
HT_SANDRO     = 74,
HT_NIMBUS     = 75,
HT_THANT      = 76,
HT_XSI        = 77,
HT_VIDOMINA   = 78,
HT_NAGASH     = 79,
HT_LORELEI    = 80,
HT_ARLACH     = 81,
HT_DACE       = 82,
HT_AJIT       = 83,
HT_DAMACON    = 84,
HT_GUNNAR     = 85,
HT_SYNCA      = 86,
HT_SHAKTI     = 87,
HT_ALAMAR     = 88,
HT_JAEGAR     = 89,
HT_MALEKITH   = 90,
HT_JEDDITE    = 91,
HT_GEON       = 92,
HT_DEEMER     = 93,
HT_SEPHINROTH = 94,
HT_DARKSTORN  = 95,
HT_YOG        = 96,
HT_GURNISSON  = 97,
HT_JABARKAS   = 98,
HT_SHIVA      = 99,
HT_GRETCHIN   = 100,
HT_ORIS       = 100,
HT_KRELLION   = 101,
HT_CRAG_HACK  = 102,
HT_TYRAXOR    = 103,
HT_GIRD       = 104,
HT_VEY        = 105,
HT_DESSA      = 106,
HT_TEREK      = 107,
HT_ZUBIN      = 108,
HT_GUNDULA    = 109,
HT_SAURUG     = 111,
HT_BRON       = 112,
HT_DRAKON     = 113,
HT_WYSTAN     = 114,
HT_TAZAR      = 115,
HT_ALKIN      = 116,
HT_KORBAC     = 117,
HT_GERWULF    = 118,
HT_BROGHILD   = 119,
HT_MIRLANDA   = 120,
HT_ROSIC      = 121,
HT_VOY        = 122,
HT_VERDISH    = 123,
HT_MERIST     = 124,
HT_STYG       = 125,
HT_ANDRA      = 126,
HT_TIVA       = 127,
HT_PASIS      = 128,
HT_THUNAR     = 129,
HT_IGNISSA    = 130,
HT_LACUS      = 131,
HT_MONERE     = 132,
HT_ERDAMON    = 133,
HT_FIUR       = 134,
HT_KALT       = 135,
HT_LUNA       = 136,
HT_BRISSA     = 137,
HT_CIELE      = 138,
HT_LABETHA    = 139,
HT_INTEUS     = 140,
HT_AENAIN     = 141,
HT_GELARE     = 142,
HT_GRINDAN    = 143,
HT_SIR_MULLICH= 144,
HT_ADRIENNE          = 145,
HT_CATHERINE         = 146,
HT_DRACON            = 147,
HT_GELU              = 148,
HT_KILGOR            = 149,
HT_LORD_HAART_UNDEAD = 150,
HT_MUTARE            = 151,
HT_ROLAND            = 152,
HT_MUTARE_DRAKE      = 153,
HT_BORAGUS           = 154,
HT_XERON             = 155,
HT_GENERAL_KENDAL    = 156,
HT_CAMPAIGN_CHRISTIAN= 157,
HT_CAMPAIGN_GEM      = 158,
HT_FINNEAS_VILMAR    = 159,
HT_ORDWALD           = 160,
HT_CAMPAIGN_SANDRO   = 161,
HT_CAMPAIGN_YOG      = 162,
HT_MOST_POWERFUL     = -3,
HT_RANDOM            = -1,
};

enum hero_seqid 
{	
};

// ---------------------------------------------------------------
// Classes 
// ---------------------------------------------------------------

class hero {
	
	//Public Methods
	public:
	
	//Constructor and Destructor	
	explicit hero();
		 ~hero() {};
	
	//Getters
	static int    GetLevel( int );
	static int    GetExperience( int );
	static int    GetExperienceIncrement( int );
	int           GetExperienceIncrement()const;	
	bool          GetHflip();
	type_point    get_target()const;
	int           GetManaCost( int )const;
	ESkillMastery get_spell_level( SpellID )const;
type_artifact const & get_artifact( TArtifactSlot )const;
type_artifact const & get_artifact( TArtifactSlot )const;
	int           GetPrimarySkill( int )const;
	ESkillMastery get_secondary_skill( ESecondarySkill )const;
	int           GetMaxMana()const;
	char  const * GetSpecificAbilityText();
	char  const * GetSpecificAbilityTextShort();
	long          get_equipped_artifacts( bool )const;
	long          get_number_in_backpack( bool )const;
   enum hero_seqid    GetStandSequence(); //TODO: define hero_seqid enum
	long          get_last_backpack_index(void)const;
	std::string   get_morale_description(void)const;
	std::string   get_morale_description(void)const;
	int           CreatureTypeCount(int);
	int           GetNthSS(int);
	std::string   get_backpack_error(TArtifact)const;
	int           GetLuck(hero const *,bool,bool)const;
	int           GetMorale(hero const *,bool,bool)const;
	float         GetNecromancyFactor(bool)const;
	int           GetMysticismBonus()const;
	int           GetVisibility();
	float         GetArcheryFactor();
	int           GetVisibility()const;
	float         GetArcheryFactor()const;
	float         GetOffenseFactor()const;
	float         GetDefenseFactor()const;
	int           GetEstatesBonus()const;
	float         GetEagleEyeChance()const;
	float         GetSurrenderCostFactor()const;
	float         GetMagicResistanceFactor()const;
	float         GetExperienceBonusFactor()const;
	float         GetLogisticsFactor()const;
	long          GetNavigationFactor()const;
	float         GetSorceryFactor()const;
	float         GetIntelligenceFactor()const;
	float         GetFirstAidFactor()const;
	int           GetMobility(bool)const;
	int           GetMobility()const;
	int           GetSpellDurationBonus()const;
EAdventureObjectType  get_special_terrain();
	ESkillMastery get_spell_level(SpellID,bool);
	TSkillMastery GetSpellSchoolLevel(TSpellSchool,bool);
	TSpellSchool  GetHighestSchool(TSpellSchool);
	int           GetManaCost(int,armyGroup const *,bool);
	int           GetMobilityFrame();
	int           GetManaFrame();
	float         get_combat_value_modifier();
	short         get_primary_skill_total();	
	playerData *  get_player(); //playerData class
	ESkillMastery GetSpellSchoolLevel(ESpellSchool);
	long          get_combat_speed_bonus();
	long          get_hit_point_bonus();
	int           GetHeroSpellBonus(SpellID,int,int);

	//Checkers
	bool          IsFlying( bool )const;
	bool          CanWalkOnWater( bool )const;
	bool          SpellIsAvailable( int )const;
	bool          is_in_spellbook( SpellID )const;
	bool          belongs_to_human()const;
	int           HasArtifact( int )const;
	int           IsWieldingArtifact( int )const;
	void          CheckLevel();
	bool          HasSecondarySkill(int);
	bool          VisitedArena(NewmapCell const *);	
	bool          HasArmy(ECreatureType);
	boat *        find_summonable_boat(void); //boat class
	bool          can_summon_boat();
	bool          is_in_patrol_radius(type_point);
	bool          can_land();
	bool          IsInIdentifyRange(type_point const &);
	bool          IsMobile();
	
	//Setters
	void          AdjustPrimarySkill( int, int );
	void          SetPrimarySkill( int, int );
	void          SetSS( int, int );
	int           TakeSS( int, int );
	int           GiveSS( int, int );
	void          SetVisitedArena(NewmapCell const *);
	long          modify_spell_damage(SpellID,int,army const *);
		
	//Other
	void          obscure_cell();
	void          hire( int, type_point );
	void          PlaceInMap( int, type_point, bool );
	int           load( void * ); //zlib
	int           save( void * ); //zlib
	void          initialize( short );
	void          DestroySiegeWeaponArtifact( int );
	void          UseSpell( int );
	void          AddSpell( int );
	void          update_spell_list();
	void          HeroScreenUpdate();
	void          UpdateArmies();
	void          ViewStat( int, int );
	void          ViewArtifact(type_artifact const &,int);
	void          Deallocate( bool, bool );
	void          ApplyBattleWinTemps();
	void          ApplyBattleLossTemps();
	void          rotate_backpack_left();
	void          rotate_backpack_right();
	void          UpdateStats(void);
	void          UpgradeCreatures( int, int );
	void          TransferArtifacts( hero * );
	bool          equip_artifact( type_artifact const &, long );
	void          remove_artifact( TArtifactSlot );
	void          remove_backpack_artifact( short );
	bool          remove_artifact( TArtifact );
	bool          add_to_backpack( type_artifact const &,long );
	void          GiveArtifact( type_artifact const &, int, bool );
	int           GiveRandomArtifact();
	int           GiveExperience(int,int,bool);
	void          GiveResource(int,int);
	void          reset_artifacts(void);
	void          Fly(int);
        void          WalkOnWater(int);
	
					 
	//Member Variables 
	public:		
			
	short         m_X;
	short	      m_Y;
	short         m_Z;
	bool          m_IsVisible;
	type_point    m_Coordinate;
	bool          m_HasObjectBelow;
	int           m_BelowObjectType;
	uint          m_MapObjectFlags;
	int           m_BelowObjectSetup;
	short         m_mana;
	EHeroID       m_ID;
	EHeroID       m_Id;
	char          m_Owner;
	char          m_Name[13];
	int           m_HeroClass;
	byte          m_PortraitID;
	int           m_DestinationX;
	int           m_DestinationY;
	int           m_DestinationZ;
	short         m_LastNewMagicOfferLev;
	char          m_unused;
	byte          m_PatrolX;
	byte          m_PatrolY;
	byte          m_PatrolRadius;
	byte          m_Angle;
	byte          m_Flag;
	int           m_MaxMovePoints;
	int           m_MovePoints;
	int           m_XP;
	short         m_expLevel;
	int           m_LearningStones;
	int           m_MarlettoTower;
	int           m_GardenOfRevelation;
	int           m_MercenaryCamp;
	int           m_StarAxis;
	int           m_TreeOfKnowledge;
	int           m_LibraryOfEnlightment;
	int           m_Arena;
	int           m_SchoolMagic;
	int           m_SchoolOfWar;
	char          m_f_7F[16]; //TODO: discover it
	uchar         m_SkillTreeSeed;
	byte          m_LastWisdomOfferLev;
	armyGroup     m_armyArray;
	byte          m_secondarySkill[28];
	byte          m_SSkillOrder[28];
	int           m_SSkillsAmount;
	uint          m_Flags;
	float         m_AIExperienceEffectiveness;
	byte          m_DDCastThisTurn;
	int           m_DisguisePower;
	int           m_FlyPower;
	int           m_WaterWalkPower;
	char          m_MoraleBonus;
	char          m_LuckBonus;
	bool          m_SetToSleep;
	int           m_field_11D; //TODO: discover it
	int           m_field_121; //TODO: discover it
	int           m_field_125; //TODO: discover it
	int           m_VisionsPower;
	type_artifact m_onBodyArtifacts[19];
	uchar         m_FreeAddSlots;
	uchar         m_BlockedSlot[14];
	type_artifact m_Artifacts[64];
	byte          m_BackpackArtsAmount;
	int           m_Female;
	bool          m_BioCustomized;
	std::string   m_Biography;
	bool          m_LearnedSpell[70];
	bool          m_availableSpell[70];
	byte          m_PrimarySkill[4];
	int           m_AIAggressiveness;
	int           m_AISpellPowerEffectiveness;
	int           m_AISpellLengthEffectiveness;
	int           m_AIKnowledgeEffectiveness;
	int           m_AIDoubleSpellPointsEffectiveness;
	int           m_AIExtraSpellPointsEffectiveness;
};
