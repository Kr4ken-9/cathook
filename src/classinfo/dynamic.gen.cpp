
#include "../xorstring.hpp"



#include "dynamic.gen.hpp"
#include "../common.h"

namespace client_classes {
	
std::unordered_map<std::string, int*> classid_mapping {};
	
dynamic::dynamic() {
		classid_mapping[XStr("CTETFParticleEffect")] = &CTETFParticleEffect;
		classid_mapping[XStr("CTETFExplosion")] = &CTETFExplosion;
		classid_mapping[XStr("CTETFBlood")] = &CTETFBlood;
		classid_mapping[XStr("CTFTankBoss")] = &CTFTankBoss;
		classid_mapping[XStr("CTFBaseBoss")] = &CTFBaseBoss;
		classid_mapping[XStr("CBossAlpha")] = &CBossAlpha;
		classid_mapping[XStr("CZombie")] = &CZombie;
		classid_mapping[XStr("CMerasmusDancer")] = &CMerasmusDancer;
		classid_mapping[XStr("CMerasmus")] = &CMerasmus;
		classid_mapping[XStr("CHeadlessHatman")] = &CHeadlessHatman;
		classid_mapping[XStr("CEyeballBoss")] = &CEyeballBoss;
		classid_mapping[XStr("CTFWeaponSapper")] = &CTFWeaponSapper;
		classid_mapping[XStr("CTFWeaponBuilder")] = &CTFWeaponBuilder;
		classid_mapping[XStr("C_TFWeaponBuilder")] = &C_TFWeaponBuilder;
		classid_mapping[XStr("CTFTeam")] = &CTFTeam;
		classid_mapping[XStr("CTFTauntProp")] = &CTFTauntProp;
		classid_mapping[XStr("CTFProjectile_Rocket")] = &CTFProjectile_Rocket;
		classid_mapping[XStr("CTFProjectile_Flare")] = &CTFProjectile_Flare;
		classid_mapping[XStr("CTFProjectile_EnergyBall")] = &CTFProjectile_EnergyBall;
		classid_mapping[XStr("CTFProjectile_GrapplingHook")] = &CTFProjectile_GrapplingHook;
		classid_mapping[XStr("CTFProjectile_HealingBolt")] = &CTFProjectile_HealingBolt;
		classid_mapping[XStr("CTFProjectile_Arrow")] = &CTFProjectile_Arrow;
		classid_mapping[XStr("CTFPlayerResource")] = &CTFPlayerResource;
		classid_mapping[XStr("CTFPlayer")] = &CTFPlayer;
		classid_mapping[XStr("CTFRagdoll")] = &CTFRagdoll;
		classid_mapping[XStr("CTEPlayerAnimEvent")] = &CTEPlayerAnimEvent;
		classid_mapping[XStr("CTFPasstimeLogic")] = &CTFPasstimeLogic;
		classid_mapping[XStr("CPasstimeBall")] = &CPasstimeBall;
		classid_mapping[XStr("CTFObjectiveResource")] = &CTFObjectiveResource;
		classid_mapping[XStr("CTFGlow")] = &CTFGlow;
		classid_mapping[XStr("CTEFireBullets")] = &CTEFireBullets;
		classid_mapping[XStr("CTFBuffBanner")] = &CTFBuffBanner;
		classid_mapping[XStr("CTFAmmoPack")] = &CTFAmmoPack;
		classid_mapping[XStr("CObjectTeleporter")] = &CObjectTeleporter;
		classid_mapping[XStr("CObjectSentrygun")] = &CObjectSentrygun;
		classid_mapping[XStr("CTFProjectile_SentryRocket")] = &CTFProjectile_SentryRocket;
		classid_mapping[XStr("CObjectSapper")] = &CObjectSapper;
		classid_mapping[XStr("CObjectCartDispenser")] = &CObjectCartDispenser;
		classid_mapping[XStr("CObjectDispenser")] = &CObjectDispenser;
		classid_mapping[XStr("CMonsterResource")] = &CMonsterResource;
		classid_mapping[XStr("CFuncRespawnRoomVisualizer")] = &CFuncRespawnRoomVisualizer;
		classid_mapping[XStr("CFuncRespawnRoom")] = &CFuncRespawnRoom;
		classid_mapping[XStr("CFuncPasstimeGoal")] = &CFuncPasstimeGoal;
		classid_mapping[XStr("CFuncForceField")] = &CFuncForceField;
		classid_mapping[XStr("CCaptureZone")] = &CCaptureZone;
		classid_mapping[XStr("CCurrencyPack")] = &CCurrencyPack;
		classid_mapping[XStr("CBaseObject")] = &CBaseObject;
		classid_mapping[XStr("CTFBotHintEngineerNest")] = &CTFBotHintEngineerNest;
		classid_mapping[XStr("CBotNPCMinion")] = &CBotNPCMinion;
		classid_mapping[XStr("CBotNPC")] = &CBotNPC;
		classid_mapping[XStr("CRagdollPropAttached")] = &CRagdollPropAttached;
		classid_mapping[XStr("CRagdollProp")] = &CRagdollProp;
		classid_mapping[XStr("NextBotCombatCharacter")] = &NextBotCombatCharacter;
		classid_mapping[XStr("CWaterBullet")] = &CWaterBullet;
		classid_mapping[XStr("CFuncMonitor")] = &CFuncMonitor;
		classid_mapping[XStr("CWorld")] = &CWorld;
		classid_mapping[XStr("CWaterLODControl")] = &CWaterLODControl;
		classid_mapping[XStr("CVGuiScreen")] = &CVGuiScreen;
		classid_mapping[XStr("CPropJeep")] = &CPropJeep;
		classid_mapping[XStr("CPropVehicleChoreoGeneric")] = &CPropVehicleChoreoGeneric;
		classid_mapping[XStr("CTEWorldDecal")] = &CTEWorldDecal;
		classid_mapping[XStr("CTESpriteSpray")] = &CTESpriteSpray;
		classid_mapping[XStr("CTESprite")] = &CTESprite;
		classid_mapping[XStr("CTESparks")] = &CTESparks;
		classid_mapping[XStr("CTESmoke")] = &CTESmoke;
		classid_mapping[XStr("CTEShowLine")] = &CTEShowLine;
		classid_mapping[XStr("CTEProjectedDecal")] = &CTEProjectedDecal;
		classid_mapping[XStr("CTEPlayerDecal")] = &CTEPlayerDecal;
		classid_mapping[XStr("CTEPhysicsProp")] = &CTEPhysicsProp;
		classid_mapping[XStr("CTEParticleSystem")] = &CTEParticleSystem;
		classid_mapping[XStr("CTEMuzzleFlash")] = &CTEMuzzleFlash;
		classid_mapping[XStr("CTELargeFunnel")] = &CTELargeFunnel;
		classid_mapping[XStr("CTEKillPlayerAttachments")] = &CTEKillPlayerAttachments;
		classid_mapping[XStr("CTEImpact")] = &CTEImpact;
		classid_mapping[XStr("CTEGlowSprite")] = &CTEGlowSprite;
		classid_mapping[XStr("CTEShatterSurface")] = &CTEShatterSurface;
		classid_mapping[XStr("CTEFootprintDecal")] = &CTEFootprintDecal;
		classid_mapping[XStr("CTEFizz")] = &CTEFizz;
		classid_mapping[XStr("CTEExplosion")] = &CTEExplosion;
		classid_mapping[XStr("CTEEnergySplash")] = &CTEEnergySplash;
		classid_mapping[XStr("CTEEffectDispatch")] = &CTEEffectDispatch;
		classid_mapping[XStr("CTEDynamicLight")] = &CTEDynamicLight;
		classid_mapping[XStr("CTEDecal")] = &CTEDecal;
		classid_mapping[XStr("CTEClientProjectile")] = &CTEClientProjectile;
		classid_mapping[XStr("CTEBubbleTrail")] = &CTEBubbleTrail;
		classid_mapping[XStr("CTEBubbles")] = &CTEBubbles;
		classid_mapping[XStr("CTEBSPDecal")] = &CTEBSPDecal;
		classid_mapping[XStr("CTEBreakModel")] = &CTEBreakModel;
		classid_mapping[XStr("CTEBloodStream")] = &CTEBloodStream;
		classid_mapping[XStr("CTEBloodSprite")] = &CTEBloodSprite;
		classid_mapping[XStr("CTEBeamSpline")] = &CTEBeamSpline;
		classid_mapping[XStr("CTEBeamRingPoint")] = &CTEBeamRingPoint;
		classid_mapping[XStr("CTEBeamRing")] = &CTEBeamRing;
		classid_mapping[XStr("CTEBeamPoints")] = &CTEBeamPoints;
		classid_mapping[XStr("CTEBeamLaser")] = &CTEBeamLaser;
		classid_mapping[XStr("CTEBeamFollow")] = &CTEBeamFollow;
		classid_mapping[XStr("CTEBeamEnts")] = &CTEBeamEnts;
		classid_mapping[XStr("CTEBeamEntPoint")] = &CTEBeamEntPoint;
		classid_mapping[XStr("CTEBaseBeam")] = &CTEBaseBeam;
		classid_mapping[XStr("CTEArmorRicochet")] = &CTEArmorRicochet;
		classid_mapping[XStr("CTEMetalSparks")] = &CTEMetalSparks;
		classid_mapping[XStr("CTest_ProxyToggle_Networkable")] = &CTest_ProxyToggle_Networkable;
		classid_mapping[XStr("CTestTraceline")] = &CTestTraceline;
		classid_mapping[XStr("CTesla")] = &CTesla;
		classid_mapping[XStr("CTeamTrainWatcher")] = &CTeamTrainWatcher;
		classid_mapping[XStr("CBaseTeamObjectiveResource")] = &CBaseTeamObjectiveResource;
		classid_mapping[XStr("CTeam")] = &CTeam;
		classid_mapping[XStr("CSun")] = &CSun;
		classid_mapping[XStr("CSteamJet")] = &CSteamJet;
		classid_mapping[XStr("CParticlePerformanceMonitor")] = &CParticlePerformanceMonitor;
		classid_mapping[XStr("CSpotlightEnd")] = &CSpotlightEnd;
		classid_mapping[XStr("DustTrail")] = &DustTrail;
		classid_mapping[XStr("CFireTrail")] = &CFireTrail;
		classid_mapping[XStr("SporeTrail")] = &SporeTrail;
		classid_mapping[XStr("SporeExplosion")] = &SporeExplosion;
		classid_mapping[XStr("RocketTrail")] = &RocketTrail;
		classid_mapping[XStr("SmokeTrail")] = &SmokeTrail;
		classid_mapping[XStr("CSmokeStack")] = &CSmokeStack;
		classid_mapping[XStr("CSlideshowDisplay")] = &CSlideshowDisplay;
		classid_mapping[XStr("CShadowControl")] = &CShadowControl;
		classid_mapping[XStr("CSceneEntity")] = &CSceneEntity;
		classid_mapping[XStr("CRopeKeyframe")] = &CRopeKeyframe;
		classid_mapping[XStr("CRagdollManager")] = &CRagdollManager;
		classid_mapping[XStr("CPropVehicleDriveable")] = &CPropVehicleDriveable;
		classid_mapping[XStr("CPhysicsPropMultiplayer")] = &CPhysicsPropMultiplayer;
		classid_mapping[XStr("CPhysBoxMultiplayer")] = &CPhysBoxMultiplayer;
		classid_mapping[XStr("CBasePropDoor")] = &CBasePropDoor;
		classid_mapping[XStr("CDynamicProp")] = &CDynamicProp;
		classid_mapping[XStr("CPointCommentaryNode")] = &CPointCommentaryNode;
		classid_mapping[XStr("CPointCamera")] = &CPointCamera;
		classid_mapping[XStr("CPlayerResource")] = &CPlayerResource;
		classid_mapping[XStr("CPlasma")] = &CPlasma;
		classid_mapping[XStr("CPhysMagnet")] = &CPhysMagnet;
		classid_mapping[XStr("CPhysicsProp")] = &CPhysicsProp;
		classid_mapping[XStr("CPhysBox")] = &CPhysBox;
		classid_mapping[XStr("CParticleSystem")] = &CParticleSystem;
		classid_mapping[XStr("ParticleSmokeGrenade")] = &ParticleSmokeGrenade;
		classid_mapping[XStr("CParticleFire")] = &CParticleFire;
		classid_mapping[XStr("MovieExplosion")] = &MovieExplosion;
		classid_mapping[XStr("CMaterialModifyControl")] = &CMaterialModifyControl;
		classid_mapping[XStr("CLightGlow")] = &CLightGlow;
		classid_mapping[XStr("CInfoOverlayAccessor")] = &CInfoOverlayAccessor;
		classid_mapping[XStr("CTEGaussExplosion")] = &CTEGaussExplosion;
		classid_mapping[XStr("CFuncTrackTrain")] = &CFuncTrackTrain;
		classid_mapping[XStr("CFuncSmokeVolume")] = &CFuncSmokeVolume;
		classid_mapping[XStr("CFuncRotating")] = &CFuncRotating;
		classid_mapping[XStr("CFuncReflectiveGlass")] = &CFuncReflectiveGlass;
		classid_mapping[XStr("CFuncOccluder")] = &CFuncOccluder;
		classid_mapping[XStr("CFunc_LOD")] = &CFunc_LOD;
		classid_mapping[XStr("CTEDust")] = &CTEDust;
		classid_mapping[XStr("CFunc_Dust")] = &CFunc_Dust;
		classid_mapping[XStr("CFuncConveyor")] = &CFuncConveyor;
		classid_mapping[XStr("CBreakableSurface")] = &CBreakableSurface;
		classid_mapping[XStr("CFuncAreaPortalWindow")] = &CFuncAreaPortalWindow;
		classid_mapping[XStr("CFish")] = &CFish;
		classid_mapping[XStr("CEntityFlame")] = &CEntityFlame;
		classid_mapping[XStr("CFireSmoke")] = &CFireSmoke;
		classid_mapping[XStr("CEnvTonemapController")] = &CEnvTonemapController;
		classid_mapping[XStr("CEnvScreenEffect")] = &CEnvScreenEffect;
		classid_mapping[XStr("CEnvScreenOverlay")] = &CEnvScreenOverlay;
		classid_mapping[XStr("CEnvProjectedTexture")] = &CEnvProjectedTexture;
		classid_mapping[XStr("CEnvParticleScript")] = &CEnvParticleScript;
		classid_mapping[XStr("CFogController")] = &CFogController;
		classid_mapping[XStr("CEntityParticleTrail")] = &CEntityParticleTrail;
		classid_mapping[XStr("CEntityDissolve")] = &CEntityDissolve;
		classid_mapping[XStr("CEnvQuadraticBeam")] = &CEnvQuadraticBeam;
		classid_mapping[XStr("CEmbers")] = &CEmbers;
		classid_mapping[XStr("CEnvWind")] = &CEnvWind;
		classid_mapping[XStr("CPrecipitation")] = &CPrecipitation;
		classid_mapping[XStr("CDynamicLight")] = &CDynamicLight;
		classid_mapping[XStr("CColorCorrectionVolume")] = &CColorCorrectionVolume;
		classid_mapping[XStr("CColorCorrection")] = &CColorCorrection;
		classid_mapping[XStr("CBreakableProp")] = &CBreakableProp;
		classid_mapping[XStr("CBaseTempEntity")] = &CBaseTempEntity;
		classid_mapping[XStr("CBasePlayer")] = &CBasePlayer;
		classid_mapping[XStr("CBaseFlex")] = &CBaseFlex;
		classid_mapping[XStr("CBaseEntity")] = &CBaseEntity;
		classid_mapping[XStr("CBaseDoor")] = &CBaseDoor;
		classid_mapping[XStr("CBaseCombatCharacter")] = &CBaseCombatCharacter;
		classid_mapping[XStr("CBaseAnimatingOverlay")] = &CBaseAnimatingOverlay;
		classid_mapping[XStr("CBoneFollower")] = &CBoneFollower;
		classid_mapping[XStr("CBaseAnimating")] = &CBaseAnimating;
		classid_mapping[XStr("CInfoLightingRelative")] = &CInfoLightingRelative;
		classid_mapping[XStr("CAI_BaseNPC")] = &CAI_BaseNPC;
		classid_mapping[XStr("CWeaponIFMSteadyCam")] = &CWeaponIFMSteadyCam;
		classid_mapping[XStr("CWeaponIFMBaseCamera")] = &CWeaponIFMBaseCamera;
		classid_mapping[XStr("CWeaponIFMBase")] = &CWeaponIFMBase;
		classid_mapping[XStr("CTFWearableLevelableItem")] = &CTFWearableLevelableItem;
		classid_mapping[XStr("CTFWearableDemoShield")] = &CTFWearableDemoShield;
		classid_mapping[XStr("CTFWearableRobotArm")] = &CTFWearableRobotArm;
		classid_mapping[XStr("CTFRobotArm")] = &CTFRobotArm;
		classid_mapping[XStr("CTFWrench")] = &CTFWrench;
		classid_mapping[XStr("CTFProjectile_ThrowableBreadMonster")] = &CTFProjectile_ThrowableBreadMonster;
		classid_mapping[XStr("CTFProjectile_ThrowableBrick")] = &CTFProjectile_ThrowableBrick;
		classid_mapping[XStr("CTFProjectile_ThrowableRepel")] = &CTFProjectile_ThrowableRepel;
		classid_mapping[XStr("CTFProjectile_Throwable")] = &CTFProjectile_Throwable;
		classid_mapping[XStr("CTFThrowable")] = &CTFThrowable;
		classid_mapping[XStr("CTFSyringeGun")] = &CTFSyringeGun;
		classid_mapping[XStr("CTFKatana")] = &CTFKatana;
		classid_mapping[XStr("CTFSword")] = &CTFSword;
		classid_mapping[XStr("CSniperDot")] = &CSniperDot;
		classid_mapping[XStr("CTFSniperRifleClassic")] = &CTFSniperRifleClassic;
		classid_mapping[XStr("CTFSniperRifleDecap")] = &CTFSniperRifleDecap;
		classid_mapping[XStr("CTFSniperRifle")] = &CTFSniperRifle;
		classid_mapping[XStr("CTFChargedSMG")] = &CTFChargedSMG;
		classid_mapping[XStr("CTFSMG")] = &CTFSMG;
		classid_mapping[XStr("CTFShovel")] = &CTFShovel;
		classid_mapping[XStr("CTFShotgunBuildingRescue")] = &CTFShotgunBuildingRescue;
		classid_mapping[XStr("CTFPEPBrawlerBlaster")] = &CTFPEPBrawlerBlaster;
		classid_mapping[XStr("CTFSodaPopper")] = &CTFSodaPopper;
		classid_mapping[XStr("CTFShotgun_Revenge")] = &CTFShotgun_Revenge;
		classid_mapping[XStr("CTFScatterGun")] = &CTFScatterGun;
		classid_mapping[XStr("CTFShotgun_Pyro")] = &CTFShotgun_Pyro;
		classid_mapping[XStr("CTFShotgun_HWG")] = &CTFShotgun_HWG;
		classid_mapping[XStr("CTFShotgun_Soldier")] = &CTFShotgun_Soldier;
		classid_mapping[XStr("CTFShotgun")] = &CTFShotgun;
		classid_mapping[XStr("CTFCrossbow")] = &CTFCrossbow;
		classid_mapping[XStr("CTFRocketLauncher_Mortar")] = &CTFRocketLauncher_Mortar;
		classid_mapping[XStr("CTFRocketLauncher_AirStrike")] = &CTFRocketLauncher_AirStrike;
		classid_mapping[XStr("CTFRocketLauncher_DirectHit")] = &CTFRocketLauncher_DirectHit;
		classid_mapping[XStr("CTFRocketLauncher")] = &CTFRocketLauncher;
		classid_mapping[XStr("CTFRevolver")] = &CTFRevolver;
		classid_mapping[XStr("CTFDRGPomson")] = &CTFDRGPomson;
		classid_mapping[XStr("CTFRaygun")] = &CTFRaygun;
		classid_mapping[XStr("CTFPistol_ScoutSecondary")] = &CTFPistol_ScoutSecondary;
		classid_mapping[XStr("CTFPistol_ScoutPrimary")] = &CTFPistol_ScoutPrimary;
		classid_mapping[XStr("CTFPistol_Scout")] = &CTFPistol_Scout;
		classid_mapping[XStr("CTFPistol")] = &CTFPistol;
		classid_mapping[XStr("CTFPipebombLauncher")] = &CTFPipebombLauncher;
		classid_mapping[XStr("CTFWeaponPDA_Spy")] = &CTFWeaponPDA_Spy;
		classid_mapping[XStr("CTFWeaponPDA_Engineer_Destroy")] = &CTFWeaponPDA_Engineer_Destroy;
		classid_mapping[XStr("CTFWeaponPDA_Engineer_Build")] = &CTFWeaponPDA_Engineer_Build;
		classid_mapping[XStr("CTFWeaponPDAExpansion_Teleporter")] = &CTFWeaponPDAExpansion_Teleporter;
		classid_mapping[XStr("CTFWeaponPDAExpansion_Dispenser")] = &CTFWeaponPDAExpansion_Dispenser;
		classid_mapping[XStr("CTFWeaponPDA")] = &CTFWeaponPDA;
		classid_mapping[XStr("CPasstimeGun")] = &CPasstimeGun;
		classid_mapping[XStr("CTFParticleCannon")] = &CTFParticleCannon;
		classid_mapping[XStr("CTFParachute_Secondary")] = &CTFParachute_Secondary;
		classid_mapping[XStr("CTFParachute_Primary")] = &CTFParachute_Primary;
		classid_mapping[XStr("CTFParachute")] = &CTFParachute;
		classid_mapping[XStr("CTFMinigun")] = &CTFMinigun;
		classid_mapping[XStr("CTFMedigunShield")] = &CTFMedigunShield;
		classid_mapping[XStr("CWeaponMedigun")] = &CWeaponMedigun;
		classid_mapping[XStr("CTFMechanicalArm")] = &CTFMechanicalArm;
		classid_mapping[XStr("CTFLunchBox_Drink")] = &CTFLunchBox_Drink;
		classid_mapping[XStr("CTFLunchBox")] = &CTFLunchBox;
		classid_mapping[XStr("CLaserDot")] = &CLaserDot;
		classid_mapping[XStr("CTFLaserPointer")] = &CTFLaserPointer;
		classid_mapping[XStr("CTFKnife")] = &CTFKnife;
		classid_mapping[XStr("CTFProjectile_Cleaver")] = &CTFProjectile_Cleaver;
		classid_mapping[XStr("CTFProjectile_JarMilk")] = &CTFProjectile_JarMilk;
		classid_mapping[XStr("CTFProjectile_Jar")] = &CTFProjectile_Jar;
		classid_mapping[XStr("CTFCleaver")] = &CTFCleaver;
		classid_mapping[XStr("CTFJarMilk")] = &CTFJarMilk;
		classid_mapping[XStr("CTFJar")] = &CTFJar;
		classid_mapping[XStr("CTFWeaponInvis")] = &CTFWeaponInvis;
		classid_mapping[XStr("CTFGrenadePipebombProjectile")] = &CTFGrenadePipebombProjectile;
		classid_mapping[XStr("CTFCannon")] = &CTFCannon;
		classid_mapping[XStr("CTFGrenadeLauncher")] = &CTFGrenadeLauncher;
		classid_mapping[XStr("CTFGrapplingHook")] = &CTFGrapplingHook;
		classid_mapping[XStr("CTFFlareGun_Revenge")] = &CTFFlareGun_Revenge;
		classid_mapping[XStr("CTFFlareGun")] = &CTFFlareGun;
		classid_mapping[XStr("CTFFlameRocket")] = &CTFFlameRocket;
		classid_mapping[XStr("CTFFlameThrower")] = &CTFFlameThrower;
		classid_mapping[XStr("CTFFists")] = &CTFFists;
		classid_mapping[XStr("CTFFireAxe")] = &CTFFireAxe;
		classid_mapping[XStr("CTFCompoundBow")] = &CTFCompoundBow;
		classid_mapping[XStr("CTFClub")] = &CTFClub;
		classid_mapping[XStr("CTFBuffItem")] = &CTFBuffItem;
		classid_mapping[XStr("CTFStickBomb")] = &CTFStickBomb;
		classid_mapping[XStr("CTFBottle")] = &CTFBottle;
		classid_mapping[XStr("CTFBonesaw")] = &CTFBonesaw;
		classid_mapping[XStr("CTFBall_Ornament")] = &CTFBall_Ornament;
		classid_mapping[XStr("CTFStunBall")] = &CTFStunBall;
		classid_mapping[XStr("CTFBat_Giftwrap")] = &CTFBat_Giftwrap;
		classid_mapping[XStr("CTFBat_Wood")] = &CTFBat_Wood;
		classid_mapping[XStr("CTFBat_Fish")] = &CTFBat_Fish;
		classid_mapping[XStr("CTFBat")] = &CTFBat;
		classid_mapping[XStr("CTFBaseRocket")] = &CTFBaseRocket;
		classid_mapping[XStr("CTFWeaponBaseMerasmusGrenade")] = &CTFWeaponBaseMerasmusGrenade;
		classid_mapping[XStr("CTFWeaponBaseMelee")] = &CTFWeaponBaseMelee;
		classid_mapping[XStr("CTFWeaponBaseGun")] = &CTFWeaponBaseGun;
		classid_mapping[XStr("CTFWeaponBaseGrenadeProj")] = &CTFWeaponBaseGrenadeProj;
		classid_mapping[XStr("CTFWeaponBase")] = &CTFWeaponBase;
		classid_mapping[XStr("CTFViewModel")] = &CTFViewModel;
		classid_mapping[XStr("CRobotDispenser")] = &CRobotDispenser;
		classid_mapping[XStr("CTFRobotDestruction_Robot")] = &CTFRobotDestruction_Robot;
		classid_mapping[XStr("CTFReviveMarker")] = &CTFReviveMarker;
		classid_mapping[XStr("CTFPumpkinBomb")] = &CTFPumpkinBomb;
		classid_mapping[XStr("CTFProjectile_EnergyRing")] = &CTFProjectile_EnergyRing;
		classid_mapping[XStr("CTFBaseProjectile")] = &CTFBaseProjectile;
		classid_mapping[XStr("CBaseObjectUpgrade")] = &CBaseObjectUpgrade;
		classid_mapping[XStr("CMannVsMachineStats")] = &CMannVsMachineStats;
		classid_mapping[XStr("CTFRobotDestructionLogic")] = &CTFRobotDestructionLogic;
		classid_mapping[XStr("CTFRobotDestruction_RobotGroup")] = &CTFRobotDestruction_RobotGroup;
		classid_mapping[XStr("CTFRobotDestruction_RobotSpawn")] = &CTFRobotDestruction_RobotSpawn;
		classid_mapping[XStr("CTFPlayerDestructionLogic")] = &CTFPlayerDestructionLogic;
		classid_mapping[XStr("CPlayerDestructionDispenser")] = &CPlayerDestructionDispenser;
		classid_mapping[XStr("CTFMinigameLogic")] = &CTFMinigameLogic;
		classid_mapping[XStr("CTFHalloweenMinigame_FallingPlatforms")] = &CTFHalloweenMinigame_FallingPlatforms;
		classid_mapping[XStr("CTFHalloweenMinigame")] = &CTFHalloweenMinigame;
		classid_mapping[XStr("CTFMiniGame")] = &CTFMiniGame;
		classid_mapping[XStr("CTFWearableVM")] = &CTFWearableVM;
		classid_mapping[XStr("CTFWearable")] = &CTFWearable;
		classid_mapping[XStr("CTFPowerupBottle")] = &CTFPowerupBottle;
		classid_mapping[XStr("CTFItem")] = &CTFItem;
		classid_mapping[XStr("CHalloweenSoulPack")] = &CHalloweenSoulPack;
		classid_mapping[XStr("CTFGenericBomb")] = &CTFGenericBomb;
		classid_mapping[XStr("CBonusRoundLogic")] = &CBonusRoundLogic;
		classid_mapping[XStr("CTFGameRulesProxy")] = &CTFGameRulesProxy;
		classid_mapping[XStr("CTFDroppedWeapon")] = &CTFDroppedWeapon;
		classid_mapping[XStr("CTFProjectile_SpellKartBats")] = &CTFProjectile_SpellKartBats;
		classid_mapping[XStr("CTFProjectile_SpellKartOrb")] = &CTFProjectile_SpellKartOrb;
		classid_mapping[XStr("CTFHellZap")] = &CTFHellZap;
		classid_mapping[XStr("CTFProjectile_SpellLightningOrb")] = &CTFProjectile_SpellLightningOrb;
		classid_mapping[XStr("CTFProjectile_SpellTransposeTeleport")] = &CTFProjectile_SpellTransposeTeleport;
		classid_mapping[XStr("CTFProjectile_SpellMeteorShower")] = &CTFProjectile_SpellMeteorShower;
		classid_mapping[XStr("CTFProjectile_SpellSpawnBoss")] = &CTFProjectile_SpellSpawnBoss;
		classid_mapping[XStr("CTFProjectile_SpellMirv")] = &CTFProjectile_SpellMirv;
		classid_mapping[XStr("CTFProjectile_SpellPumpkin")] = &CTFProjectile_SpellPumpkin;
		classid_mapping[XStr("CTFProjectile_SpellSpawnHorde")] = &CTFProjectile_SpellSpawnHorde;
		classid_mapping[XStr("CTFProjectile_SpellSpawnZombie")] = &CTFProjectile_SpellSpawnZombie;
		classid_mapping[XStr("CTFProjectile_SpellBats")] = &CTFProjectile_SpellBats;
		classid_mapping[XStr("CTFProjectile_SpellFireball")] = &CTFProjectile_SpellFireball;
		classid_mapping[XStr("CTFSpellBook")] = &CTFSpellBook;
		classid_mapping[XStr("CHightower_TeleportVortex")] = &CHightower_TeleportVortex;
		classid_mapping[XStr("CTeleportVortex")] = &CTeleportVortex;
		classid_mapping[XStr("CHalloweenGiftPickup")] = &CHalloweenGiftPickup;
		classid_mapping[XStr("CBonusDuckPickup")] = &CBonusDuckPickup;
		classid_mapping[XStr("CHalloweenPickup")] = &CHalloweenPickup;
		classid_mapping[XStr("CCaptureFlagReturnIcon")] = &CCaptureFlagReturnIcon;
		classid_mapping[XStr("CCaptureFlag")] = &CCaptureFlag;
		classid_mapping[XStr("CBonusPack")] = &CBonusPack;
		classid_mapping[XStr("CHandleTest")] = &CHandleTest;
		classid_mapping[XStr("CTeamRoundTimer")] = &CTeamRoundTimer;
		classid_mapping[XStr("CTeamplayRoundBasedRulesProxy")] = &CTeamplayRoundBasedRulesProxy;
		classid_mapping[XStr("CSpriteTrail")] = &CSpriteTrail;
		classid_mapping[XStr("CSpriteOriented")] = &CSpriteOriented;
		classid_mapping[XStr("CSprite")] = &CSprite;
		classid_mapping[XStr("CPoseController")] = &CPoseController;
		classid_mapping[XStr("CGameRulesProxy")] = &CGameRulesProxy;
		classid_mapping[XStr("CInfoLadderDismount")] = &CInfoLadderDismount;
		classid_mapping[XStr("CFuncLadder")] = &CFuncLadder;
		classid_mapping[XStr("CEnvDetailController")] = &CEnvDetailController;
		classid_mapping[XStr("CTFWearableItem")] = &CTFWearableItem;
		classid_mapping[XStr("CEconWearable")] = &CEconWearable;
		classid_mapping[XStr("CBaseAttributableItem")] = &CBaseAttributableItem;
		classid_mapping[XStr("CEconEntity")] = &CEconEntity;
		classid_mapping[XStr("CBeam")] = &CBeam;
		classid_mapping[XStr("CBaseViewModel")] = &CBaseViewModel;
		classid_mapping[XStr("CBaseProjectile")] = &CBaseProjectile;
		classid_mapping[XStr("CBaseParticleEntity")] = &CBaseParticleEntity;
		classid_mapping[XStr("CBaseGrenade")] = &CBaseGrenade;
		classid_mapping[XStr("CBaseCombatWeapon")] = &CBaseCombatWeapon;
		classid_mapping[XStr("CVoteController")] = &CVoteController;
		classid_mapping[XStr("CTEHL2MPFireBullets")] = &CTEHL2MPFireBullets;
		classid_mapping[XStr("CHL2MPRagdoll")] = &CHL2MPRagdoll;
		classid_mapping[XStr("CHL2MP_Player")] = &CHL2MP_Player;
		classid_mapping[XStr("CWeaponCitizenSuitcase")] = &CWeaponCitizenSuitcase;
		classid_mapping[XStr("CWeaponCitizenPackage")] = &CWeaponCitizenPackage;
		classid_mapping[XStr("CWeaponAlyxGun")] = &CWeaponAlyxGun;
		classid_mapping[XStr("CWeaponCubemap")] = &CWeaponCubemap;
		classid_mapping[XStr("CWeaponGaussGun")] = &CWeaponGaussGun;
		classid_mapping[XStr("CWeaponAnnabelle")] = &CWeaponAnnabelle;
		classid_mapping[XStr("CFlaregun")] = &CFlaregun;
		classid_mapping[XStr("CWeaponBugBait")] = &CWeaponBugBait;
		classid_mapping[XStr("CWeaponBinoculars")] = &CWeaponBinoculars;
		classid_mapping[XStr("CWeaponCycler")] = &CWeaponCycler;
		classid_mapping[XStr("CCrossbowBolt")] = &CCrossbowBolt;
		classid_mapping[XStr("CPropVehiclePrisonerPod")] = &CPropVehiclePrisonerPod;
		classid_mapping[XStr("CPropCrane")] = &CPropCrane;
		classid_mapping[XStr("CPropCannon")] = &CPropCannon;
		classid_mapping[XStr("CPropAirboat")] = &CPropAirboat;
		classid_mapping[XStr("CFlare")] = &CFlare;
		classid_mapping[XStr("CTEConcussiveExplosion")] = &CTEConcussiveExplosion;
		classid_mapping[XStr("CNPC_Strider")] = &CNPC_Strider;
		classid_mapping[XStr("CScriptIntro")] = &CScriptIntro;
		classid_mapping[XStr("CRotorWashEmitter")] = &CRotorWashEmitter;
		classid_mapping[XStr("CPropCombineBall")] = &CPropCombineBall;
		classid_mapping[XStr("CPlasmaBeamNode")] = &CPlasmaBeamNode;
		classid_mapping[XStr("CNPC_RollerMine")] = &CNPC_RollerMine;
		classid_mapping[XStr("CNPC_Manhack")] = &CNPC_Manhack;
		classid_mapping[XStr("CNPC_CombineGunship")] = &CNPC_CombineGunship;
		classid_mapping[XStr("CNPC_AntlionGuard")] = &CNPC_AntlionGuard;
		classid_mapping[XStr("CInfoTeleporterCountdown")] = &CInfoTeleporterCountdown;
		classid_mapping[XStr("CMortarShell")] = &CMortarShell;
		classid_mapping[XStr("CEnvStarfield")] = &CEnvStarfield;
		classid_mapping[XStr("CEnvHeadcrabCanister")] = &CEnvHeadcrabCanister;
		classid_mapping[XStr("CAlyxEmpEffect")] = &CAlyxEmpEffect;
		classid_mapping[XStr("CCorpse")] = &CCorpse;
		classid_mapping[XStr("CCitadelEnergyCore")] = &CCitadelEnergyCore;
		classid_mapping[XStr("CHL2_Player")] = &CHL2_Player;
		classid_mapping[XStr("CBaseHLBludgeonWeapon")] = &CBaseHLBludgeonWeapon;
		classid_mapping[XStr("CHLSelectFireMachineGun")] = &CHLSelectFireMachineGun;
		classid_mapping[XStr("CHLMachineGun")] = &CHLMachineGun;
		classid_mapping[XStr("CBaseHelicopter")] = &CBaseHelicopter;
		classid_mapping[XStr("CNPC_Barney")] = &CNPC_Barney;
		classid_mapping[XStr("CNPC_Barnacle")] = &CNPC_Barnacle;
		classid_mapping[XStr("AR2Explosion")] = &AR2Explosion;
		classid_mapping[XStr("CTEAntlionDust")] = &CTEAntlionDust;
		classid_mapping[XStr("CVortigauntEffectDispel")] = &CVortigauntEffectDispel;
		classid_mapping[XStr("CVortigauntChargeToken")] = &CVortigauntChargeToken;
		classid_mapping[XStr("CNPC_Vortigaunt")] = &CNPC_Vortigaunt;
		classid_mapping[XStr("CPredictedViewModel")] = &CPredictedViewModel;
		classid_mapping[XStr("CWeaponStunStick")] = &CWeaponStunStick;
		classid_mapping[XStr("CWeaponSMG1")] = &CWeaponSMG1;
		classid_mapping[XStr("CWeapon_SLAM")] = &CWeapon_SLAM;
		classid_mapping[XStr("CWeaponShotgun")] = &CWeaponShotgun;
		classid_mapping[XStr("CWeaponRPG")] = &CWeaponRPG;
		classid_mapping[XStr("CWeaponPistol")] = &CWeaponPistol;
		classid_mapping[XStr("CWeaponPhysCannon")] = &CWeaponPhysCannon;
		classid_mapping[XStr("CHL2MPMachineGun")] = &CHL2MPMachineGun;
		classid_mapping[XStr("CBaseHL2MPCombatWeapon")] = &CBaseHL2MPCombatWeapon;
		classid_mapping[XStr("CBaseHL2MPBludgeonWeapon")] = &CBaseHL2MPBludgeonWeapon;
		classid_mapping[XStr("CWeaponHL2MPBase")] = &CWeaponHL2MPBase;
		classid_mapping[XStr("CWeaponFrag")] = &CWeaponFrag;
		classid_mapping[XStr("CWeaponCrowbar")] = &CWeaponCrowbar;
		classid_mapping[XStr("CWeaponCrossbow")] = &CWeaponCrossbow;
		classid_mapping[XStr("CWeaponAR2")] = &CWeaponAR2;
		classid_mapping[XStr("CWeapon357")] = &CWeapon357;
		classid_mapping[XStr("CHL2MPGameRulesProxy")] = &CHL2MPGameRulesProxy;
		classid_mapping[XStr("CHalfLife2Proxy")] = &CHalfLife2Proxy;
		classid_mapping[XStr("CBaseHLCombatWeapon")] = &CBaseHLCombatWeapon;
		classid_mapping[XStr("CTFVehicle")] = &CTFVehicle;
		classid_mapping[XStr("CTFBaseDMPowerup")] = &CTFBaseDMPowerup;
		classid_mapping[XStr("CWeaponSpawner")] = &CWeaponSpawner;
		classid_mapping[XStr("CTFUmbrella")] = &CTFUmbrella;
		classid_mapping[XStr("CTFTranq")] = &CTFTranq;
		classid_mapping[XStr("CTFSMG_Primary")] = &CTFSMG_Primary;
		classid_mapping[XStr("CTFRevolver_Secondary")] = &CTFRevolver_Secondary;
		classid_mapping[XStr("CTFNailgun")] = &CTFNailgun;
		classid_mapping[XStr("CTFHunterRifle")] = &CTFHunterRifle;
		classid_mapping[XStr("CTFHeavyArtillery")] = &CTFHeavyArtillery;
		classid_mapping[XStr("CTFHammerfists")] = &CTFHammerfists;
		classid_mapping[XStr("CTFCrowbar")] = &CTFCrowbar;
		classid_mapping[XStr("CTFChainsaw")] = &CTFChainsaw;
		classid_mapping[XStr("CTEPlantBomb")] = &CTEPlantBomb;
		classid_mapping[XStr("CTERadioIcon")] = &CTERadioIcon;
		classid_mapping[XStr("CPlantedC4")] = &CPlantedC4;
		classid_mapping[XStr("CCSTeam")] = &CCSTeam;
		classid_mapping[XStr("CCSPlayerResource")] = &CCSPlayerResource;
		classid_mapping[XStr("CCSPlayer")] = &CCSPlayer;
		classid_mapping[XStr("CCSRagdoll")] = &CCSRagdoll;
		classid_mapping[XStr("CHostage")] = &CHostage;
		classid_mapping[XStr("CWeaponXM1014")] = &CWeaponXM1014;
		classid_mapping[XStr("CWeaponUSP")] = &CWeaponUSP;
		classid_mapping[XStr("CWeaponUMP45")] = &CWeaponUMP45;
		classid_mapping[XStr("CWeaponTMP")] = &CWeaponTMP;
		classid_mapping[XStr("CSmokeGrenade")] = &CSmokeGrenade;
		classid_mapping[XStr("CWeaponSG552")] = &CWeaponSG552;
		classid_mapping[XStr("CWeaponSG550")] = &CWeaponSG550;
		classid_mapping[XStr("CWeaponScout")] = &CWeaponScout;
		classid_mapping[XStr("CWeaponP90")] = &CWeaponP90;
		classid_mapping[XStr("CWeaponP228")] = &CWeaponP228;
		classid_mapping[XStr("CWeaponMP5Navy")] = &CWeaponMP5Navy;
		classid_mapping[XStr("CWeaponMAC10")] = &CWeaponMAC10;
		classid_mapping[XStr("CWeaponM4A1")] = &CWeaponM4A1;
		classid_mapping[XStr("CWeaponM3")] = &CWeaponM3;
		classid_mapping[XStr("CWeaponM249")] = &CWeaponM249;
		classid_mapping[XStr("CKnife")] = &CKnife;
		classid_mapping[XStr("CHEGrenade")] = &CHEGrenade;
		classid_mapping[XStr("CWeaponGlock")] = &CWeaponGlock;
		classid_mapping[XStr("CWeaponGalil")] = &CWeaponGalil;
		classid_mapping[XStr("CWeaponG3SG1")] = &CWeaponG3SG1;
		classid_mapping[XStr("CFlashbang")] = &CFlashbang;
		classid_mapping[XStr("CWeaponFiveSeven")] = &CWeaponFiveSeven;
		classid_mapping[XStr("CWeaponFamas")] = &CWeaponFamas;
		classid_mapping[XStr("CWeaponElite")] = &CWeaponElite;
		classid_mapping[XStr("CDEagle")] = &CDEagle;
		classid_mapping[XStr("CWeaponCSBaseGun")] = &CWeaponCSBaseGun;
		classid_mapping[XStr("CWeaponCSBase")] = &CWeaponCSBase;
		classid_mapping[XStr("CC4")] = &CC4;
		classid_mapping[XStr("CBaseCSGrenade")] = &CBaseCSGrenade;
		classid_mapping[XStr("CWeaponAWP")] = &CWeaponAWP;
		classid_mapping[XStr("CWeaponAug")] = &CWeaponAug;
		classid_mapping[XStr("CAK47")] = &CAK47;
		classid_mapping[XStr("CFootstepControl")] = &CFootstepControl;
		classid_mapping[XStr("CCSGameRulesProxy")] = &CCSGameRulesProxy;
		classid_mapping[XStr("CBaseCSGrenadeProjectile")] = &CBaseCSGrenadeProjectile;
		classid_mapping[XStr("CSDKTeam_Deathmatch")] = &CSDKTeam_Deathmatch;
		classid_mapping[XStr("CSDKTeam_Red")] = &CSDKTeam_Red;
		classid_mapping[XStr("CSDKTeam_Blue")] = &CSDKTeam_Blue;
		classid_mapping[XStr("CSDKTeam_Unassigned")] = &CSDKTeam_Unassigned;
		classid_mapping[XStr("CSDKTeam")] = &CSDKTeam;
		classid_mapping[XStr("CSDKPlayerResource")] = &CSDKPlayerResource;
		classid_mapping[XStr("CSDKRagdoll")] = &CSDKRagdoll;
		classid_mapping[XStr("CSDKPlayer")] = &CSDKPlayer;
		classid_mapping[XStr("CSparkler")] = &CSparkler;
		classid_mapping[XStr("CRatRaceWaypoint")] = &CRatRaceWaypoint;
		classid_mapping[XStr("CBriefcaseCaptureZone")] = &CBriefcaseCaptureZone;
		classid_mapping[XStr("CBriefcase")] = &CBriefcase;
		classid_mapping[XStr("CWeaponSDKBase")] = &CWeaponSDKBase;
		classid_mapping[XStr("CWeaponMP5K")] = &CWeaponMP5K;
		classid_mapping[XStr("CWeaponMossberg")] = &CWeaponMossberg;
		classid_mapping[XStr("CWeaponM1911")] = &CWeaponM1911;
		classid_mapping[XStr("CWeaponM16")] = &CWeaponM16;
		classid_mapping[XStr("CWeaponGrenade")] = &CWeaponGrenade;
		classid_mapping[XStr("CWeaponFAL")] = &CWeaponFAL;
		classid_mapping[XStr("CWeaponBrawl")] = &CWeaponBrawl;
		classid_mapping[XStr("CWeaponBeretta")] = &CWeaponBeretta;
		classid_mapping[XStr("CBaseSDKGrenade")] = &CBaseSDKGrenade;
		classid_mapping[XStr("CAkimboM1911")] = &CAkimboM1911;
		classid_mapping[XStr("CAkimboBeretta")] = &CAkimboBeretta;
		classid_mapping[XStr("CAkimboBase")] = &CAkimboBase;
		classid_mapping[XStr("CWeaponSDKMelee")] = &CWeaponSDKMelee;
		classid_mapping[XStr("CSDKGameRulesProxy")] = &CSDKGameRulesProxy;
		classid_mapping[XStr("CBaseGrenadeProjectile")] = &CBaseGrenadeProjectile;
		classid_mapping[XStr("CDAViewModel")] = &CDAViewModel;

}

void dynamic::Populate() {
	ClientClass* cc = g_IBaseClient->GetAllClasses();
	while (cc) {
		std::string name(cc->GetName());
		if (classid_mapping.find(name) != classid_mapping.end())
			*classid_mapping[name] = cc->m_ClassID;
		cc = cc->m_pNext;
	}
}
	
dynamic dynamic_list;

}