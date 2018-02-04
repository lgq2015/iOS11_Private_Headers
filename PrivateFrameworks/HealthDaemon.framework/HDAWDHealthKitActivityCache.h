/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitActivityCache : PBCodable <NSCopying> {
    long long  _activeHours;
    long long  _briskMinutes;
    long long  _cacheIndex;
    long long  _endDate;
    long long  _energyBurned;
    long long  _energyBurnedGoal;
    long long  _energyBurnedGoalDate;
    struct { 
        unsigned int activeHours : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int cacheIndex : 1; 
        unsigned int endDate : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int energyBurnedGoalDate : 1; 
        unsigned int startDate : 1; 
        unsigned int stepCount : 1; 
        unsigned int walkingAndRunningDistance : 1; 
    }  _has;
    long long  _startDate;
    long long  _stepCount;
    long long  _walkingAndRunningDistance;
}

@property (nonatomic) long long activeHours;
@property (nonatomic) long long briskMinutes;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) long long endDate;
@property (nonatomic) long long energyBurned;
@property (nonatomic) long long energyBurnedGoal;
@property (nonatomic) long long energyBurnedGoalDate;
@property (nonatomic) bool hasActiveHours;
@property (nonatomic) bool hasBriskMinutes;
@property (nonatomic) bool hasCacheIndex;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasEnergyBurned;
@property (nonatomic) bool hasEnergyBurnedGoal;
@property (nonatomic) bool hasEnergyBurnedGoalDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasStepCount;
@property (nonatomic) bool hasWalkingAndRunningDistance;
@property (nonatomic) long long startDate;
@property (nonatomic) long long stepCount;
@property (nonatomic) long long walkingAndRunningDistance;

- (long long)activeHours;
- (long long)briskMinutes;
- (long long)cacheIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endDate;
- (long long)energyBurned;
- (long long)energyBurnedGoal;
- (long long)energyBurnedGoalDate;
- (bool)hasActiveHours;
- (bool)hasBriskMinutes;
- (bool)hasCacheIndex;
- (bool)hasEndDate;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasEnergyBurnedGoalDate;
- (bool)hasStartDate;
- (bool)hasStepCount;
- (bool)hasWalkingAndRunningDistance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveHours:(long long)arg1;
- (void)setBriskMinutes:(long long)arg1;
- (void)setCacheIndex:(long long)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setEnergyBurned:(long long)arg1;
- (void)setEnergyBurnedGoal:(long long)arg1;
- (void)setEnergyBurnedGoalDate:(long long)arg1;
- (void)setHasActiveHours:(bool)arg1;
- (void)setHasBriskMinutes:(bool)arg1;
- (void)setHasCacheIndex:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasEnergyBurned:(bool)arg1;
- (void)setHasEnergyBurnedGoal:(bool)arg1;
- (void)setHasEnergyBurnedGoalDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasStepCount:(bool)arg1;
- (void)setHasWalkingAndRunningDistance:(bool)arg1;
- (void)setStartDate:(long long)arg1;
- (void)setStepCount:(long long)arg1;
- (void)setWalkingAndRunningDistance:(long long)arg1;
- (long long)startDate;
- (long long)stepCount;
- (long long)walkingAndRunningDistance;
- (void)writeTo:(id)arg1;

@end
