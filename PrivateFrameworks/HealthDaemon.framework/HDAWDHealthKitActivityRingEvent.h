/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying> {
    unsigned int  _activeSeconds;
    unsigned int  _age;
    unsigned int  _biologicalSex;
    unsigned int  _briskMinutes;
    unsigned int  _energyBurned;
    unsigned int  _energyBurnedGoal;
    unsigned long long  _eventTimestamp;
    struct { 
        unsigned int eventTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int activeSeconds : 1; 
        unsigned int age : 1; 
        unsigned int biologicalSex : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int height : 1; 
        unsigned int weight : 1; 
    }  _has;
    unsigned int  _height;
    unsigned long long  _timestamp;
    unsigned int  _weight;
}

@property (nonatomic) unsigned int activeSeconds;
@property (nonatomic) unsigned int age;
@property (nonatomic) unsigned int biologicalSex;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) unsigned int energyBurned;
@property (nonatomic) unsigned int energyBurnedGoal;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) bool hasActiveSeconds;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasBiologicalSex;
@property (nonatomic) bool hasBriskMinutes;
@property (nonatomic) bool hasEnergyBurned;
@property (nonatomic) bool hasEnergyBurnedGoal;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int weight;

- (unsigned int)activeSeconds;
- (unsigned int)age;
- (unsigned int)biologicalSex;
- (unsigned int)briskMinutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)energyBurned;
- (unsigned int)energyBurnedGoal;
- (unsigned long long)eventTimestamp;
- (bool)hasActiveSeconds;
- (bool)hasAge;
- (bool)hasBiologicalSex;
- (bool)hasBriskMinutes;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasEventTimestamp;
- (bool)hasHeight;
- (bool)hasTimestamp;
- (bool)hasWeight;
- (unsigned long long)hash;
- (unsigned int)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveSeconds:(unsigned int)arg1;
- (void)setAge:(unsigned int)arg1;
- (void)setBiologicalSex:(unsigned int)arg1;
- (void)setBriskMinutes:(unsigned int)arg1;
- (void)setEnergyBurned:(unsigned int)arg1;
- (void)setEnergyBurnedGoal:(unsigned int)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setHasActiveSeconds:(bool)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasBiologicalSex:(bool)arg1;
- (void)setHasBriskMinutes:(bool)arg1;
- (void)setHasEnergyBurned:(bool)arg1;
- (void)setHasEnergyBurnedGoal:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWeight:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)weight;
- (void)writeTo:(id)arg1;

@end
