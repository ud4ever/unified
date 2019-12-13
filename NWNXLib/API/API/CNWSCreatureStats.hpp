#pragma once
#include "nwn_api.hpp"

#include "CExoArrayList.hpp"
#include "CExoLocString.hpp"
#include "CExoString.hpp"
#include "CNWSCreatureStats_ClassInfo.hpp"
#include "CNWSStats_SpellLikeAbility.hpp"
#include "CResRef.hpp"


#ifdef NWN_API_PROLOGUE
NWN_API_PROLOGUE(CNWSCreatureStats)
#endif

struct CCombatInformation;
struct CFeatUseListEntry;
struct CNWClass;
struct CNWCreatureStatsUpdate;
struct CNWLevelStats;
struct CNWLevelStats;
struct CNWSCreature;
struct CNWSCreatureAppearanceInfo;
struct CNWSItem;
struct CNWSObject;
struct CNWSpell;
struct CResGFF;
struct CResStruct;


typedef int BOOL;
typedef uint32_t OBJECT_ID;
typedef uint32_t STRREF;


struct CNWSCreatureStats
{
    CExoArrayList<uint16_t> m_lstFeats;
    CExoArrayList<CFeatUseListEntry *> m_lstFeatUses;
    CExoArrayList<uint16_t> m_lstBonusFeats;
    CNWSCreature * m_pBaseCreature;
    CExoArrayList<CNWLevelStats *> m_lstLevelStats;
    CExoLocString m_lsFirstName;
    CExoLocString m_lsLastName;
    CResRef m_cDialog;
    BOOL m_bDialogInterruptable;
    CExoLocString m_sDescription;
    CExoString m_sDescriptionOverride;
    int32_t m_nAge;
    uint8_t m_nGender;
    uint32_t m_nExperience;
    BOOL m_bIsPC;
    BOOL m_bIsDM;
    BOOL m_bIsDMFile;
    BOOL m_bIsAIDisabledPossess;
    BOOL m_bIsAIDisabledOverride;
    BOOL m_bDMManifested;
    uint8_t m_nMultiClassLeveledUpIn;
    int32_t m_nFactionId;
    int32_t m_nOriginalFactionId;
    int32_t m_nPreDominationFactionId;
    float m_fChallengeRating;
    uint8_t m_nStartingPackage;
    uint8_t m_nNumMultiClasses;
    CNWSCreatureStats_ClassInfo m_ClassInfo[3];
    uint16_t m_nRace;
    CExoString m_sSubRace;
    uint8_t m_nStrengthBase;
    char m_nStrengthModifier;
    uint8_t m_nDexterityBase;
    char m_nDexterityModifier;
    uint8_t m_nConstitutionBase;
    char m_nConstitutionModifier;
    uint8_t m_nIntelligenceBase;
    char m_nIntelligenceModifier;
    uint8_t m_nWisdomBase;
    char m_nWisdomModifier;
    uint8_t m_nCharismaBase;
    char m_nCharismaModifier;
    char m_nACNaturalBase;
    char m_nACArmorBase;
    char m_nACShieldBase;
    char m_nACArmorMod;
    char m_nACArmorNeg;
    char m_nACDeflectionMod;
    char m_nACDeflectionNeg;
    char m_nACShieldMod;
    char m_nACShieldNeg;
    char m_nACNaturalMod;
    char m_nACNaturalNeg;
    char m_nACDodgeMod;
    char m_nACDodgeNeg;
    uint8_t m_nBaseAttackBonus;
    uint8_t m_nOverrideBaseAttackBonus;
    char m_nEnemyAttackBonus;
    char * m_nDamageImmunity;
    int32_t m_nDamageRoll;
    int32_t m_nCriticalHitRoll;
    int32_t m_nCriticalHitMultiplier;
    uint8_t m_nAttacksPerRound;
    CCombatInformation * m_pCombatInformation;
    char m_nArcaneSpellFailure;
    uint8_t m_nBaseArmorArcaneSpellFailure;
    uint8_t m_nBaseShieldArcaneSpellFailure;
    uint8_t m_pSpellFailure[9];
    char m_nSpellResistance;
    char m_nSpellResistancePenalty;
    CExoArrayList<CNWSStats_SpellLikeAbility> * m_pSpellLikeAbilityList;
    uint16_t m_nTempHitpointsPtr;
    uint16_t m_nACVersusPtr;
    uint16_t m_nAttackBonusPtr;
    uint16_t m_nDamageReductionPtr;
    uint16_t m_nDamageResistancePtr;
    uint16_t m_nDamageBonusPtr;
    uint16_t m_nAIStatePtr;
    uint16_t m_nEffectIconPtr;
    uint16_t m_nSanctuaryPtr;
    uint16_t m_nInvisibilityPtr;
    uint16_t m_nSpellResistancePtr;
    uint16_t m_nAbilityPtr;
    uint16_t m_nSeeInvisiblePtr;
    uint16_t m_nUltraVisionPtr;
    uint16_t m_nMissChancePtr;
    uint16_t m_nConcealmentPtr;
    uint16_t m_nBlindnessPtr;
    uint16_t m_nWalkAnimationPtr;
    uint16_t m_nSpellLevelAbsorptionPtr;
    uint16_t m_nSpellImmunityPtr;
    uint16_t m_nDamageShieldPtr;
    uint16_t m_nSkillBonusPtr;
    uint16_t m_nSavingThrowBonusPtr;
    uint16_t m_nHastePtr;
    uint16_t m_nEffectImmunityPtr;
    uint16_t m_nLimitMovementSpeedPtr;
    uint16_t m_nMovementSpeedDecreasePtr;
    uint16_t m_nSkillPointsRemaining;
    char * m_lstSkillRanks;
    char m_nArmorCheckPenalty;
    char m_nShieldCheckPenalty;
    CResRef m_cPortrait;
    int16_t m_nAlignmentGoodEvil;
    int16_t m_nAlignmentLawChaos;
    uint8_t m_nSkinColor;
    uint8_t m_nHairColor;
    uint8_t m_nTattoo1Color;
    uint8_t m_nTattoo2Color;
    uint16_t m_nAppearanceType;
    uint8_t m_nPhenoType;
    uint8_t m_nHeadVariation;
    uint8_t m_pPartVariation[19];
    uint32_t m_nTailVariation;
    uint32_t m_nWingVariation;
    int32_t m_nMovementRate;
    float m_fMovementRunSpeed;
    float m_fMovementWalkSpeed;
    char m_nFortSavingThrowMisc;
    char m_nWillSavingThrowMisc;
    char m_nReflexSavingThrowMisc;
    int32_t m_nAnimalCompanionCreatureType;
    int32_t m_nFamiliarCreatureType;
    CExoString m_sAnimalCompanionName;
    CExoString m_sFamiliarName;
    CExoString m_sDeity;
    uint32_t m_nLatestDataMigration;

    CNWSCreatureStats(CNWSCreature * pCreature);
    ~CNWSCreatureStats();
    void UpdateLastStatsObject(uint64_t nUpdatesRequired, CNWCreatureStatsUpdate * updateObject);
    CNWLevelStats * GetLevelStats(uint8_t nLevel);
    STRREF ReadStatsFromGff(CResGFF * pRes, CResStruct * pGffStructWithCreatureStats, CNWSCreatureAppearanceInfo * pAppInfo, BOOL bIsSaveGame = true, BOOL bIsPlayerCharacter = false, BOOL bCopyObject = false);
    void ReadSpellsFromGff(CResGFF * pRes, CResStruct * pGffStructWithCreatureStats, BOOL bDefaultUnsavedSpellsAsReadied = false);
    void SaveStats(CResGFF * pRes, CResStruct * pStruct);
    void SaveClassInfo(CResGFF * pRes, CResStruct * pStruct);
    STRREF ValidateLevelUp(CNWLevelStats * pLevelUpStats, uint8_t nDomain1, uint8_t nDomain2, uint8_t nSchool);
    BOOL CanLevelUp();
    void LevelUp(CNWLevelStats * pLevelUpStats, uint8_t nDomain1, uint8_t nDomain2, uint8_t nSchool, BOOL bAddStatsToList);
    void LevelDown(CNWLevelStats * pLevelUpStats);
    BOOL LevelUpAutomatic(uint8_t nClass, BOOL bReadyAllSpells, uint8_t nPackage);
    BOOL CanChooseFeat(uint16_t nFeatID, uint8_t nNumberNormalFeats, uint8_t nNumberBonusFeats, CExoArrayList<uint16_t> * pChosenFeats);
    BOOL FeatRequirementsMet(uint16_t nFeatID, CExoArrayList<uint16_t> * pChosenFeats);
    void SetNormalBonusFlags(uint16_t nFeatID, BOOL & bNormalListFeat, BOOL & bBonusListFeat);
    BOOL FeatAcquired(uint16_t nFeat, CExoArrayList<uint16_t> * pChosenFeats, BOOL bCheckBonusFeats);
    BOOL AutoMemorizeSpells(BOOL bReadyAllSpells = false);
    BOOL GetIsClassAvailable(uint8_t nClass);
    BOOL GetMeetsPrestigeClassRequirements(CNWClass * pClass);
    uint8_t GetHitDie(uint8_t nMultiClass, uint8_t nDefaultClass);
    CExoString GetFullName();
    CExoString * GetTag();
    uint8_t GetLevel(BOOL bUseNegativeLevels = false);
    uint8_t GetEffectiveCRForPotentialLevel();
    uint8_t GetPotentialLevel();
    uint32_t GetExpNeededForLevelUp();
    void SetTag(const CExoString & sTag);
    void SetExperience(uint32_t nValue, BOOL bDoLevel = true);
    void AddExperience(uint32_t nValue);
    CExoString GetClassString(uint8_t nMultiClass);
    uint8_t GetClassLevel(uint8_t nMultiClass, BOOL bUseNegativeLevel = false);
    uint8_t GetClassNegativeLevels(uint8_t nMultiClass);
    uint8_t GetClass(uint8_t nMultiClass);
    CNWSCreatureStats_ClassInfo * GetClassInfo(uint8_t nMultiClass);
    uint8_t GetIsClass(uint8_t nClass);
    void SetClassLevel(uint8_t nMultiClass, uint8_t nValue);
    void SetClassNegativeLevels(uint8_t nMultiClass, uint8_t nValue);
    void SetClass(uint8_t nMultiClass, uint8_t nValue);
    int32_t GetTotalNegativeLevels();
    int32_t GetNumLevelsOfClass(uint8_t nClass, BOOL bEpic);
    int32_t GetNumLevelsOfClass(uint8_t nClass);
    CExoString GetRaceString();
    CResRef GetSmallPortrait();
    CResRef GetLargePortrait();
    void SetMovementRate(int32_t nValue);
    char GetFortSavingThrow(BOOL bExcludeEffectBonus = false);
    char GetBaseFortSavingThrow();
    char GetWillSavingThrow(BOOL bExcludeEffectBonus = false);
    char GetBaseWillSavingThrow();
    char GetReflexSavingThrow(BOOL bExcludeEffectBonus = false);
    char GetBaseReflexSavingThrow();
    char GetPrimaryMod(uint8_t nMultiClass);
    uint8_t GetSTRStat();
    char GetTotalSTRBonus();
    uint8_t GetDEXStat();
    char GetDEXMod(BOOL bUseArmourPenalty = false);
    char GetTotalDEXBonus();
    uint8_t GetCONStat();
    char GetTotalCONBonus();
    uint8_t GetINTStat();
    char GetTotalINTBonus();
    uint8_t GetWISStat();
    char GetTotalWISBonus();
    uint8_t GetCHAStat();
    char GetTotalCHABonus();
    int8_t GetClassesAbilityAdjust(int ability);
    void SetSTRBase(uint8_t nValue);
    void SetDEXBase(uint8_t nValue);
    void SetCONBase(uint8_t nValue, BOOL bRecalculateHP = true);
    void SetINTBase(uint8_t nValue);
    void SetWISBase(uint8_t nValue);
    void SetCHABase(uint8_t nValue);
    char CalcStatModifier(uint8_t nValue);
    char GetSkillRank(uint8_t nSkill, CNWSObject * pVersus, BOOL bBaseOnly = false);
    BOOL GetCanUseSkill(uint8_t nSkill);
    BOOL GetCanUseSkillAfterLevelUp(uint16_t nSkill, CNWLevelStats * pLevelUpStats);
    void SetSkillRank(uint8_t nSkill, char nRank);
    void AddFeat(uint16_t nFeat);
    BOOL HasFeat(uint16_t nFeat);
    uint8_t GetFeatRemainingUses(uint16_t nFeat);
    uint8_t GetFeatTotalUses(uint16_t nFeat);
    void SetFeatRemainingUses(uint16_t nFeat, uint8_t nRemainingUses);
    void ResetFeatRemainingUses();
    void DecrementFeatRemainingUses(uint16_t nFeat);
    void IncrementFeatRemainingUses(uint16_t nFeat);
    uint16_t GetFeat(uint16_t nIndex);
    uint16_t GetHighestLevelOfFeat(uint16_t nFeat);
    BOOL FeatRequirementsMetAfterLevelUp(uint16_t nFeatID, CNWLevelStats * pLevelUpStats, uint8_t nSchool);
    uint8_t GetFeatSourceClass(uint16_t nFeat);
    void ComputeFeatBonuses(CExoArrayList<uint16_t> * m_pFeats, BOOL bSubtractBonuses = false);
    void RemoveFeat(uint16_t nFeat);
    void ClearFeats();
    uint16_t GetBonusFeat(uint16_t nIndex);
    void CalcLevelUpNumberFeats(uint8_t nLeveledUpLevel, uint8_t nLeveledUpClass, uint8_t & nNumberNormalFeats, uint8_t & nNumberBonusFeats);
    BOOL GetCreatureHasTalent(int32_t nType, int32_t nID, uint8_t nMetaType = 0);
    BOOL GetCreatureTalentRandom(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, OBJECT_ID & oidItem, int32_t & nItemPropertyIndex, uint8_t & nCasterLevel, uint8_t & nMetaType);
    BOOL GetCreatureTalentRandomSpell(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, uint8_t & nMetaType);
    BOOL GetCreatureTalentRandomSpellFromItem(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, OBJECT_ID & oidItem, int32_t & nItemPropertyIndex);
    BOOL GetCreatureTalentRandomSpellLikeAbility(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, uint8_t & nCasterLevel);
    BOOL GetCreatureTalentRandomFeat(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass);
    BOOL GetCreatureTalentRandomSkill(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass);
    BOOL GetCreatureTalentRandomKnownSpell(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, int32_t nClass);
    BOOL GetCreatureTalentRandomMemorisedSpell(int32_t nCategory, int32_t nMaxCR, int32_t & nType, int32_t & nID, uint8_t & nMultiClass, int32_t nClass, uint8_t & nMetaType);
    BOOL GetCanUseRelatedCategory(int32_t nTalentCategory, int32_t nDesiredCategory);
    int16_t GetArmorClassVersus(CNWSCreature * pCreature = nullptr, BOOL bVsTouchAttack = false);
    char GetACNaturalBase(BOOL bVsTouchAttack = false);
    char GetTotalACSkillMod();
    uint8_t GetSimpleAlignmentGoodEvil();
    uint8_t GetSimpleAlignmentLawChaos();
    CExoString GetAlignmentString();
    BOOL GetIsEpitomeOfAlignment();
    BOOL GetHasLostClassAbilities(uint8_t nMultiClass);
    BOOL ModifyAlignment(int16_t nGoodEvilBonus, int16_t nLawChaosBonus);
    void AdjustAlignment(uint8_t nAlignment, int16_t nShift, OBJECT_ID oidInitiator = 0x7f000000);
    void SetHasLostClassAbilities(uint8_t nMultiClass, BOOL bLostAbilities);
    BOOL GetEffectImmunity(uint8_t nType, CNWSCreature * pVersus, BOOL bConsiderFeats = true);
    BOOL GetUseMonkAttackTables(BOOL bForceUnarmed);
    int32_t GetUnarmedDamageRoll(CNWSObject * pTarget);
    uint8_t GetUnarmedDamageDice();
    uint8_t GetUnarmedDamageDie();
    uint8_t GetCreatureDamageDice(uint8_t nIndex);
    uint8_t GetCreatureDamageDie(uint8_t nIndex);
    BOOL GetWeaponFinesse(CNWSItem * pItem);
    BOOL GetWeaponFocus(CNWSItem * pItem);
    BOOL GetEpicWeaponFocus(CNWSItem * pItem);
    BOOL GetWeaponSpecialization(CNWSItem * pItem);
    BOOL GetEpicWeaponSpecialization(CNWSItem * pItem);
    BOOL GetWeaponImprovedCritical(CNWSItem * pItem);
    BOOL GetEpicWeaponOverwhelmingCritical(CNWSItem * pItem);
    BOOL GetEpicWeaponDevastatingCritical(CNWSItem * pItem);
    int32_t GetFavoredEnemyBonus(CNWSCreature * pTargetCreature);
    void UpdateCombatInformation();
    int32_t GetBaseAttackBonus(BOOL bExcludeEpic = false);
    int32_t GetMeleeAttackBonus(BOOL bOffHand = false, BOOL bIncludeBase = true, BOOL bTouchAttack = false);
    int32_t GetMeleeDamageBonus(BOOL bOffHand = false, uint8_t nCreatureWeapon = 0xff);
    int32_t GetRangedAttackBonus(BOOL bIncludeBase = true, BOOL bTouchAttack = false);
    int32_t GetRangedDamageBonus();
    int32_t GetAttackModifierVersus(CNWSCreature * pTargetCreature = nullptr);
    int32_t GetDamageBonus(CNWSCreature * pCreature = nullptr, BOOL bOffHand = false);
    int32_t GetDamageRoll(CNWSObject * pTarget, BOOL bOffHand, BOOL bCritical, BOOL bSneakAttack, BOOL bDeathAttack, BOOL bForceMax = false);
    int32_t GetCriticalHitRoll(BOOL bOffHand = false);
    int32_t GetCriticalHitMultiplier(BOOL bOffHand = false);
    uint8_t GetAttacksPerRound();
    int32_t ResolveSpecialAttackAttackBonus(CNWSCreature * pTarget = nullptr);
    int32_t ResolveSpecialAttackDamageBonus(CNWSCreature * pTarget = nullptr);
    uint16_t GetCasterLevel(uint8_t nMultiClass);
    uint8_t GetSpellFailure(uint8_t nSpellSchool);
    char GetSpellResistance();
    uint8_t GetSpellsPerDayLeft(uint8_t nMultiClass, uint8_t nSpellLevel);
    uint8_t GetSpellGainWithBonus(uint8_t nMultiClass, uint8_t nSpellLevel);
    uint8_t GetSpellGainWithBonusAfterLevelUp(uint8_t nMultiClass, uint8_t nSpellLevel, CNWLevelStats * pLevelUpStats, uint8_t nSchool, BOOL bNewClass = false);
    BOOL ConfirmDomainSpell(uint8_t nMultiClass, uint8_t nSpellLevel, uint32_t nSpellID);
    BOOL GetSpellMinAbilityMet(uint8_t nMultiClass, uint8_t nSpellLevel);
    BOOL GetMetamagicPrerequisitesMet(uint8_t nMetaType);
    uint16_t GetNumberKnownSpells(uint8_t nMultiClass, uint8_t nSpellLevel);
    uint32_t GetHighestLevelKnown();
    uint8_t GetNumberMemorizedSpellSlots(uint8_t nMultiClass, uint8_t nSpellLevel);
    uint32_t GetKnownSpell(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellListIndex);
    uint32_t GetMemorizedSpellInSlot(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot);
    BOOL GetIsDomainSpell(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot);
    uint8_t ComputeNumberKnownSpellsLeft(uint8_t nMultiClass, uint8_t nSpellLevel);
    uint8_t GetMemorizedSpellInSlotReady(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot);
    void SetMemorizedSpellInSlotReady(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot, BOOL bReady);
    uint8_t GetMemorizedSpellInSlotMetaType(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot);
    BOOL GetHasSilencedSpell(uint32_t nSpellID);
    BOOL GetHasStilledSpell(uint32_t nSpellID);
    uint8_t GetSpellUsesLeft(uint32_t nSpellID, uint8_t nMultiClass, uint8_t nDomainLevel, uint8_t nMetaType);
    uint8_t GetMemorizedSpellReadyCount(uint32_t nSpellID);
    uint8_t GetMemorizedSpellReadyCount(uint8_t nMultiClass, uint32_t nSpellID, uint8_t nMetaType = 0xFF);
    uint8_t GetMemorizedSpellReadyCount(uint8_t nMultiClass, uint32_t nSpellID, uint8_t * nMinSpellLevel, uint8_t * nMinSpellSlot);
    uint8_t GetSchool(uint8_t nMultiClass);
    uint8_t GetDomain1(uint8_t nMultiClass);
    uint8_t GetDomain2(uint8_t nMultiClass);
    uint32_t GetNumberOfBonusSpells(uint8_t nMultiClass, uint8_t nSpellLevel);
    void ModifyNumberBonusSpells(uint8_t nMultiClass, uint8_t nSpellLevel, int32_t nDelta);
    void SetArcaneSpellFailure(char nValue);
    void SetSpellFailure(uint8_t nSpellSchool, uint8_t nValue);
    void SetSpellResistance(char nValue);
    void SetSpellResistancePenalty(char nValue);
    void DecrementSpellsPerDayLeft(uint8_t nMultiClass, uint8_t nSpellLevel);
    void IncrementSpellsPerDayLeft(uint8_t nMultiClass, uint8_t nSpellLevel);
    void ResetSpellsPerDayLeft(uint8_t nMultiClass, uint8_t nSpellLevel);
    void AdjustSpellUsesPerDay();
    void UpdateNumberMemorizedSpellSlots();
    BOOL SetMemorizedSpellSlot(uint8_t nMultiClass, uint8_t nSpellSlot, uint32_t nSpellID, uint8_t nDomainLevel, uint8_t nMetaType, BOOL bFromClient = false);
    void SetNumberMemorizedSpellSlots(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nNumSlots);
    void ClearMemorizedSpellSlot(uint8_t nMultiClass, uint8_t nSpellLevel, uint8_t nSpellSlot);
    void AddKnownSpell(uint8_t nMultiClass, uint32_t nSpellID);
    void RemoveKnownSpell(uint8_t nMultiClass, uint32_t nSpellID);
    void MemorizeAllNPCSpells();
    uint8_t GetSpellsOfLevelReady(uint8_t nMultiClass, uint8_t nSpellLevel);
    void ReadySpellLevel(uint8_t nSpellLevel);
    BOOL UnReadySpell(uint32_t nSpellID, uint8_t nMultiClass, uint8_t nDomainLevel, uint8_t nMetaType);
    void SetSchool(uint8_t nMultiClass, uint8_t nSchool);
    void SetDomain1(uint8_t nMultiClass, uint8_t nDomain);
    void SetDomain2(uint8_t nMultiClass, uint8_t nDomain);
    void AddSpellLikeAbilityToList(uint32_t nSpellId, BOOL bReadied, uint8_t nCasterLevel);
    BOOL SetSpellLikeAbilityReady(uint32_t nSpellId, BOOL bReadied, uint8_t nCasterLevel = - 1);
    void ResetSpellLikeAbilities();
    BOOL GetIsInSpellLikeAbilityList(uint32_t nSpellId);
    uint8_t GetSpellLikeAbilityCasterLevel(uint32_t nSpellId);
    float GetStatById(int32_t nId);
    void SetStatById(int32_t nId, float nStat);
    BOOL GetIsWeaponOfChoice(uint32_t nBaseItemType);
    void RunDataMigrations();
    BOOL GetIsInKnownSpellList(uint8_t nMultiClass, uint32_t nSpellID);
    BOOL CheckSpellSuitability(int32_t nSpellId, CNWSpell * pSpell, int32_t nCategory, int32_t nMaxCR, int32_t nSpellLevel, int32_t nSpellSlot, int32_t nClass, BOOL bCheckMetamagic, uint8_t & nMetaType, int32_t nMasterSpellId = - 1);


#ifdef NWN_CLASS_EXTENSION_CNWSCreatureStats
    NWN_CLASS_EXTENSION_CNWSCreatureStats
#endif
};


#ifdef NWN_API_EPILOGUE
NWN_API_EPILOGUE(CNWSCreatureStats)
#endif

