/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottleParams : NSObject {
    double  inactivityKickbackDelay;
    double  inactivityKickbackRatio;
    double  maxWait;
    double  minWait;
    double  ratioOnFailure;
    double  ratioOnQuotaErrorClear;
    double  ratioOnSuccess;
}

@property (nonatomic) double inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio;
@property (nonatomic) double maxWait;
@property (nonatomic) double minWait;
@property (nonatomic) double ratioOnFailure;
@property (nonatomic) double ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnSuccess;

- (bool)check;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;
- (unsigned long long)hash;
- (double)inactivityKickbackDelay;
- (double)inactivityKickbackRatio;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)maxWait;
- (double)minWait;
- (id)paramsToDictionary;
- (double)ratioOnFailure;
- (double)ratioOnQuotaErrorClear;
- (double)ratioOnSuccess;
- (void)setInactivityKickbackDelay:(double)arg1;
- (void)setInactivityKickbackRatio:(double)arg1;
- (void)setMaxWait:(double)arg1;
- (void)setMinWait:(double)arg1;
- (void)setRatioOnFailure:(double)arg1;
- (void)setRatioOnQuotaErrorClear:(double)arg1;
- (void)setRatioOnSuccess:(double)arg1;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;

@end
