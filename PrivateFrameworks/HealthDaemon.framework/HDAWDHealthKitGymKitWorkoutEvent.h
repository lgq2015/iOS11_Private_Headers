/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitGymKitWorkoutEvent : PBCodable <NSCopying> {
    int  _fitnessMachineType;
    struct { 
        unsigned int timeToBeginExperience : 1; 
        unsigned int timestamp : 1; 
        unsigned int workoutEndErrorCode : 1; 
        unsigned int fitnessMachineType : 1; 
    }  _has;
    NSString * _manufacturer;
    long long  _timeToBeginExperience;
    unsigned long long  _timestamp;
    long long  _workoutEndErrorCode;
}

@property (nonatomic) int fitnessMachineType;
@property (nonatomic) bool hasFitnessMachineType;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic) bool hasTimeToBeginExperience;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWorkoutEndErrorCode;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic) long long timeToBeginExperience;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long workoutEndErrorCode;

- (void).cxx_destruct;
- (int)StringAsFitnessMachineType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fitnessMachineType;
- (id)fitnessMachineTypeAsString:(int)arg1;
- (bool)hasFitnessMachineType;
- (bool)hasManufacturer;
- (bool)hasTimeToBeginExperience;
- (bool)hasTimestamp;
- (bool)hasWorkoutEndErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFitnessMachineType:(int)arg1;
- (void)setHasFitnessMachineType:(bool)arg1;
- (void)setHasTimeToBeginExperience:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWorkoutEndErrorCode:(bool)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setTimeToBeginExperience:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWorkoutEndErrorCode:(long long)arg1;
- (long long)timeToBeginExperience;
- (unsigned long long)timestamp;
- (long long)workoutEndErrorCode;
- (void)writeTo:(id)arg1;

@end
