/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <CLKTimelineEntry, NSCopying> {
    HKQuantity * _activeEnergy;
    HKQuantity * _activeEnergyGoal;
    HKQuantity * _activeEnergyTotal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _briskMinutesTotal;
    bool  _databaseLoading;
    bool  _deviceLocked;
    NTKWellnessEntryModel * _previousEntryModel;
    unsigned long long  _standHourState;
    long long  _standHoursGoal;
    long long  _standHoursTotal;
}

@property (nonatomic, retain) HKQuantity *activeEnergy;
@property (nonatomic, retain) HKQuantity *activeEnergyGoal;
@property (nonatomic, retain) HKQuantity *activeEnergyTotal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double briskMinutesTotal;
@property (nonatomic) bool databaseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceLocked;
@property (readonly) unsigned long long hash;
@property (nonatomic) NTKWellnessEntryModel *previousEntryModel;
@property (nonatomic) unsigned long long standHourState;
@property (nonatomic) long long standHoursGoal;
@property (nonatomic) long long standHoursTotal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userHasDoneActivitySetup;

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)formattingManager;
+ (id)idealizedEntryModel;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)lockedEntryModel;

- (void).cxx_destruct;
- (id)activeEnergy;
- (id)activeEnergyGoal;
- (double)activeEnergyGoalCompletionPercentage;
- (id)activeEnergyTotal;
- (long long)availabilityState;
- (double)briskMinuteGoalCompletionPercentage;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (double)briskMinutesTotal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)databaseLoading;
- (id)date;
- (id)debugDescription;
- (id)description;
- (bool)deviceLocked;
- (id)previousEntryModel;
- (void)setActiveEnergy:(id)arg1;
- (void)setActiveEnergyGoal:(id)arg1;
- (void)setActiveEnergyTotal:(id)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setBriskMinutesTotal:(double)arg1;
- (void)setDatabaseLoading:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setPreviousEntryModel:(id)arg1;
- (void)setStandHourState:(unsigned long long)arg1;
- (void)setStandHoursGoal:(long long)arg1;
- (void)setStandHoursTotal:(long long)arg1;
- (double)standHourGoalCompletionPercentage;
- (unsigned long long)standHourState;
- (long long)standHoursGoal;
- (long long)standHoursTotal;
- (id)templateForComplicationFamily:(long long)arg1;
- (bool)userHasDoneActivitySetup;

@end
