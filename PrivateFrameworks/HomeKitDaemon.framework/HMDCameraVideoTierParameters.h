/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraVideoTierParameters : HMFObject <HMFLogging, NSSecureCoding> {
    HMDCameraVideoTier * _currentPickedTier;
    HMDCameraVideoTier * _firstPickedTier;
    HMDCameraSessionID * _sessionID;
    NSArray * _tierOrder;
    NSDictionary * _videoTierCombinations;
}

@property (nonatomic, retain) HMDCameraVideoTier *currentPickedTier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDCameraVideoTier *firstPickedTier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tierOrder;
@property (nonatomic, readonly) NSDictionary *videoTierCombinations;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generateAllVideoTiers:(id)arg1;
- (id)currentPickedTier;
- (void)encodeWithCoder:(id)arg1;
- (id)firstPickedTier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 streamingCapabilities:(id)arg2;
- (id)logIdentifier;
- (bool)pickHigherTier;
- (bool)pickLowerTier;
- (id)sessionID;
- (void)setCurrentPickedTier:(id)arg1;
- (void)setFirstPickedTier:(id)arg1;
- (void)setTierOrder:(id)arg1;
- (id)tierOrder;
- (void)updateFirstPickedTier:(id)arg1;
- (void)updateTierOrder:(id)arg1;
- (void)updateTierParameters:(id)arg1 firstPickedParameter:(id)arg2;
- (id)videoTierCombinations;

@end
