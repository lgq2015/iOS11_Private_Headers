/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableCloudKitWorkout : PBCodable <NSCopying> {
    NSString * _bundleID;
    NSString * _deviceManufacturer;
    NSString * _deviceModel;
    double  _duration;
    double  _goalInCanonicalUnit;
    long long  _goalType;
    struct { 
        unsigned int duration : 1; 
        unsigned int goalInCanonicalUnit : 1; 
        unsigned int goalType : 1; 
        unsigned int totalBasalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int type : 1; 
        unsigned int isIndoorWorkout : 1; 
        unsigned int isWatchWorkout : 1; 
    }  _has;
    bool  _isIndoorWorkout;
    bool  _isWatchWorkout;
    ASCodableCloudKitSample * _sample;
    double  _totalBasalEnergyBurnedInCanonicalUnit;
    double  _totalDistanceInCanonicalUnit;
    double  _totalEnergyBurnedInCanonicalUnit;
    long long  _type;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *deviceManufacturer;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic) double duration;
@property (nonatomic) double goalInCanonicalUnit;
@property (nonatomic) long long goalType;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic, readonly) bool hasDeviceManufacturer;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasGoalInCanonicalUnit;
@property (nonatomic) bool hasGoalType;
@property (nonatomic) bool hasIsIndoorWorkout;
@property (nonatomic) bool hasIsWatchWorkout;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) bool hasTotalDistanceInCanonicalUnit;
@property (nonatomic) bool hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isIndoorWorkout;
@property (nonatomic) bool isWatchWorkout;
@property (nonatomic, retain) ASCodableCloudKitSample *sample;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceManufacturer;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)goalInCanonicalUnit;
- (long long)goalType;
- (bool)hasBundleID;
- (bool)hasDeviceManufacturer;
- (bool)hasDeviceModel;
- (bool)hasDuration;
- (bool)hasGoalInCanonicalUnit;
- (bool)hasGoalType;
- (bool)hasIsIndoorWorkout;
- (bool)hasIsWatchWorkout;
- (bool)hasSample;
- (bool)hasTotalBasalEnergyBurnedInCanonicalUnit;
- (bool)hasTotalDistanceInCanonicalUnit;
- (bool)hasTotalEnergyBurnedInCanonicalUnit;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isIndoorWorkout;
- (bool)isWatchWorkout;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setBundleID:(id)arg1;
- (void)setDeviceManufacturer:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setGoalInCanonicalUnit:(double)arg1;
- (void)setGoalType:(long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasGoalInCanonicalUnit:(bool)arg1;
- (void)setHasGoalType:(bool)arg1;
- (void)setHasIsIndoorWorkout:(bool)arg1;
- (void)setHasIsWatchWorkout:(bool)arg1;
- (void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(bool)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(bool)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsIndoorWorkout:(bool)arg1;
- (void)setIsWatchWorkout:(bool)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalBasalEnergyBurnedInCanonicalUnit;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
