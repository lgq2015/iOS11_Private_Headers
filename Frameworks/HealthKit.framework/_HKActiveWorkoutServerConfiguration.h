/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActiveWorkoutServerConfiguration : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _fitnessMachineSessionID;
    bool  _indoor;
    HKQuantity * _initialActiveEnergyBurned;
    HKQuantity * _initialBasalEnergyBurned;
    HKQuantity * _lapLength;
    NSDictionary * _resumeDataByType;
    bool  _shouldUseDeviceData;
    NSDate * _startDate;
    long long  _swimmingLocation;
    unsigned long long  _workoutActivityType;
    NSArray * _workoutEvents;
    long long  _workoutState;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSUUID *fitnessMachineSessionID;
@property (getter=isIndoor, nonatomic) bool indoor;
@property (nonatomic, retain) HKQuantity *initialActiveEnergyBurned;
@property (nonatomic, retain) HKQuantity *initialBasalEnergyBurned;
@property (nonatomic, retain) HKQuantity *lapLength;
@property (nonatomic, retain) NSDictionary *resumeDataByType;
@property (nonatomic) bool shouldUseDeviceData;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) long long swimmingLocation;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic, retain) NSArray *workoutEvents;
@property (nonatomic) long long workoutState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)fitnessMachineSessionID;
- (id)initWithCoder:(id)arg1;
- (id)initialActiveEnergyBurned;
- (id)initialBasalEnergyBurned;
- (bool)isIndoor;
- (id)lapLength;
- (id)resumeDataByType;
- (void)setFitnessMachineSessionID:(id)arg1;
- (void)setIndoor:(bool)arg1;
- (void)setInitialActiveEnergyBurned:(id)arg1;
- (void)setInitialBasalEnergyBurned:(id)arg1;
- (void)setLapLength:(id)arg1;
- (void)setResumeDataByType:(id)arg1;
- (void)setShouldUseDeviceData:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSwimmingLocation:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (void)setWorkoutState:(long long)arg1;
- (bool)shouldUseDeviceData;
- (id)startDate;
- (long long)swimmingLocation;
- (unsigned long long)workoutActivityType;
- (id)workoutEvents;
- (long long)workoutState;

@end
