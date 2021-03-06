/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendAchievement : HKSample <ASCloudKitCodable, HDCoding, NSCopying> {
    NSDate * _completedDate;
    NSString * _definitionIdentifier;
    NSUUID * _friendUUID;
    NSNumber * _value;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic, readonly) ASCodableCloudKitAchievement *codableAchievement;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic) unsigned long long workoutActivityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 friendUUID:(id)arg5;
+ (id)fitnessFriendAchievementFromHKAchievement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completedDate;
- (id)definitionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)friendUUID;
- (id)hkAchievementFromFriendAchievement;
- (id)initWithCoder:(id)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (id)value;
- (unsigned long long)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (struct _HKFitnessFriendAchievement { Class x1; }*)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;

- (id)codableAchievement;
- (id)recordWithZoneID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
