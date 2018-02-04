/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryReachabilityTuple : HMFObject {
    NSString * _accessoryUUID;
    bool  _currentReachability;
    bool  _previouslySentReachability;
}

@property (nonatomic, retain) NSString *accessoryUUID;
@property (nonatomic) bool currentReachability;
@property (nonatomic) bool previouslySentReachability;

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(bool)arg2;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (bool)currentReachability;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)previouslySentReachability;
- (void)setAccessoryUUID:(id)arg1;
- (void)setCurrentReachability:(bool)arg1;
- (void)setPreviouslySentReachability:(bool)arg1;

@end
