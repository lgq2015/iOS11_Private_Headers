/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADBackgroundTaskRequest : NSObject {
    NSObject<OS_xpc_object> * _criteria;
    NSString * _requestIdentifier;
}

@property (nonatomic) bool allowBattery;
@property (nonatomic) long long backgroundTaskRetryCount;
@property (nonatomic) long long delay;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) bool isRepeating;
@property (nonatomic, retain) NSString *priority;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic) bool requireSleep;
@property (nonatomic) bool requiresNetworkConnectivity;

- (void).cxx_destruct;
- (bool)allowBattery;
- (long long)backgroundTaskRetryCount;
- (id)copyBackgroundTaskAgentCriteria;
- (long long)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getPropertyAsDate:(id)arg1;
- (double)getPropertyAsDouble:(id)arg1;
- (long long)getPropertyAsInteger:(id)arg1;
- (id)getPropertyAsString:(id)arg1;
- (long long)gracePeriod;
- (id)initWithCriteria:(id)arg1 andID:(id)arg2;
- (id)initWithID:(id)arg1;
- (bool)isRepeating;
- (id)priority;
- (id)requestIdentifier;
- (bool)requireSleep;
- (bool)requiresNetworkConnectivity;
- (void)setAllowBattery:(bool)arg1;
- (void)setBackgroundTaskRetryCount:(long long)arg1;
- (void)setDelay:(long long)arg1;
- (void)setGracePeriod:(long long)arg1;
- (void)setIsRepeating:(bool)arg1;
- (void)setPriority:(id)arg1;
- (void)setPropertyAsDate:(id)arg1 value:(id)arg2;
- (void)setPropertyAsDouble:(id)arg1 value:(double)arg2;
- (void)setPropertyAsInteger:(id)arg1 value:(long long)arg2;
- (void)setPropertyAsString:(id)arg1 value:(id)arg2;
- (void)setRequireSleep:(bool)arg1;
- (void)setRequiresNetworkConnectivity:(bool)arg1;

@end
