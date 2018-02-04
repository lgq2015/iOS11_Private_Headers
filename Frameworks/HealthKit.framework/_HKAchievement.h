/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievement : NSObject <HDCoding, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _alerted;
    NSDate * _completedDate;
    NSString * _definitionIdentifier;
    NSNumber * _goalValue;
    NSHashTable * _observers;
    NSNumber * _paceToReachGoal;
    NSString * _progressMilestoneLocalizationKeyPrefix;
    NSNumber * _progressValue;
    NSNumber * _referenceProgressValue;
    NSNumber * _value;
    bool  _viewed;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (getter=isAlerted, nonatomic) bool alerted;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *goalValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *paceToReachGoal;
@property (nonatomic, retain) NSString *progressMilestoneLocalizationKeyPrefix;
@property (nonatomic, retain) NSNumber *progressValue;
@property (nonatomic, retain) NSNumber *referenceProgressValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (getter=isViewed, nonatomic) bool viewed;
@property (nonatomic) unsigned long long workoutActivityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_achievementWithUUID:(id)arg1 definitionIdentifier:(id)arg2 completedDate:(id)arg3 value:(id)arg4 workoutActivityType:(unsigned long long)arg5 alerted:(bool)arg6;
+ (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2;
+ (id)_nextUUID;
+ (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 context:(id)arg3;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 progressValue:(id)arg3 goalValue:(id)arg4 value:(id)arg5 workoutActivityType:(unsigned long long)arg6;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
+ (void)setOverridenUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_achievementDefinition;
- (id)_buildKeyWithPrefix:(id)arg1 keyBaseString:(id)arg2 includingUserName:(bool)arg3 isWheelchairUser:(bool)arg4;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 progressValue:(id)arg3 goalValue:(id)arg4 value:(id)arg5 workoutActivityType:(unsigned long long)arg6;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
- (bool)_isWheelchairUser;
- (id)_localizedStringWithContext:(id)arg1;
- (id)_pluralizeLocalizedString:(id)arg1 context:(id)arg2;
- (id)_replacePlaceholdersInString:(id)arg1 withContext:(id)arg2;
- (bool)_validateConfiguration;
- (void)addObserver:(id)arg1;
- (id)completedDate;
- (id)definitionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)goalValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAlerted;
- (bool)isEqual:(id)arg1;
- (bool)isViewed;
- (id)localizedDescriptionAchieved;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedDescriptionForNewUnearnedAlert;
- (id)localizedDescriptionForNewUnearnedAlertBadgeBack;
- (id)localizedDescriptionForProgressAlertWithUserName:(id)arg1;
- (id)localizedDescriptionFriendAchievedWithName:(id)arg1 wheelchairUser:(bool)arg2;
- (id)localizedDescriptionUnachieved;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(bool)arg2;
- (id)localizedTitle;
- (id)localizedTitleWithIsWheelchairUser:(bool)arg1;
- (id)paceToReachGoal;
- (id)progressMilestoneLocalizationKeyPrefix;
- (id)progressValue;
- (id)referenceProgressValue;
- (void)removeObserver:(id)arg1;
- (void)setAlerted:(bool)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setPaceToReachGoal:(id)arg1;
- (void)setProgressMilestoneLocalizationKeyPrefix:(id)arg1;
- (void)setProgressValue:(id)arg1;
- (void)setReferenceProgressValue:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setViewed:(bool)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (id)value;
- (unsigned long long)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (struct CGSize { double x1; double x2; })_fiui_badgeThumbnailSizeUsingLargerDeviceSize:(bool)arg1;
+ (double)fiui_badgeThumbnailRenderingScale;
+ (struct CGSize { double x1; double x2; })fiui_badgeThumbnailRenderingSize;
+ (struct CGSize { double x1; double x2; })fiui_badgeThumbnailSize;

- (void)_addStickersFromBundle:(id)arg1 forType:(id)arg2 toArray:(id)arg3;
- (id)_fiui_badgeAssetNameSuffix;
- (id)_fiui_badgeContainerPath;
- (id)_fiui_imagePathForUncompletedAchievementOfSizeClass:(long long)arg1;
- (id)_fiui_pathForAssetNamed:(id)arg1 ofType:(id)arg2;
- (id)fiui_badgeModelFilename;
- (id)fiui_badgePathIdentifier;
- (id)fiui_badgePlistPath;
- (id)fiui_badgeTexturePath;
- (id)fiui_compressedBadgeModelPath;
- (bool)fiui_hasImageForSizeClass:(long long)arg1;
- (id)fiui_imageForSizeClass:(long long)arg1;
- (id)fiui_stickerBundle;
- (id)fiui_stickerURLs;
- (id)fiui_uniqueBadgeModelIdentifier;
- (bool)fiui_usesMonthlyChallengeBadge;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (bool)isEquivalentToAchievement:(id)arg1 inCalendar:(id)arg2 requireSameDateToCalendarUnit:(unsigned long long)arg3 sameValue:(bool)arg4;

@end
