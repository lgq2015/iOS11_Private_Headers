/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendWorkout : HKSample <ASCloudKitCodable, HDCoding, NSCopying> {
    NSString * _bundleID;
    NSString * _deviceManufacturer;
    NSString * _deviceModel;
    double  _duration;
    NSUUID * _friendUUID;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _isIndoorWorkout;
    bool  _isWatchWorkout;
    HKQuantity * _totalBasalEnergyBurned;
    HKQuantity * _totalDistance;
    HKQuantity * _totalEnergyBurned;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) ASCodableCloudKitWorkout *codableWorkout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceManufacturer;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isIndoorWorkout;
@property (nonatomic) bool isWatchWorkout;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKQuantity *totalBasalEnergyBurned;
@property (nonatomic, retain) HKQuantity *totalDistance;
@property (nonatomic, retain) HKQuantity *totalEnergyBurned;
@property (nonatomic) unsigned long long workoutActivityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)fitnessFriendWorkoutFromHKWorkout:(id)arg1;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(bool)arg12 isIndoorWorkout:(bool)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)deviceManufacturer;
- (id)deviceModel;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)friendUUID;
- (id)goal;
- (unsigned long long)goalType;
- (id)hkWorkoutFromFriendWorkout;
- (id)initWithCoder:(id)arg1;
- (bool)isIndoorWorkout;
- (bool)isWatchWorkout;
- (void)setBundleID:(id)arg1;
- (void)setDeviceManufacturer:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setIsIndoorWorkout:(bool)arg1;
- (void)setIsWatchWorkout:(bool)arg1;
- (void)setTotalBasalEnergyBurned:(id)arg1;
- (void)setTotalDistance:(id)arg1;
- (void)setTotalEnergyBurned:(id)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (id)totalBasalEnergyBurned;
- (id)totalDistance;
- (id)totalEnergyBurned;
- (unsigned long long)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)_fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1;
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;
+ (struct _HKFitnessFriendWorkout { Class x1; }*)fitnessFriendWorkoutWithRecord:(id)arg1 friendUUID:(id)arg2;

- (id)codableWorkout;
- (id)recordWithZoneID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
