/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSheetProxy : NSObject {
    <ADAdSheetProxyDelegate> * _delegate;
    long long  _interruptionCount;
    double  _lastLaunchTimestamp;
    NSMutableSet * _launchAssertions;
    double  _nextScheduledLaunch;
    bool  _openApplicationInProgress;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    bool  _serviceLaunchThrottled;
    long long  _unexpectedTerminationCount;
    bool  _waitingForAdSheet;
}

@property (nonatomic) <ADAdSheetProxyDelegate> *delegate;
@property (nonatomic) long long interruptionCount;
@property (nonatomic) double lastLaunchTimestamp;
@property (nonatomic, retain) NSMutableSet *launchAssertions;
@property (nonatomic) double nextScheduledLaunch;
@property (nonatomic) bool openApplicationInProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyQueue;
@property (nonatomic, readonly) double remainingLaunchBackoff;
@property (nonatomic, readonly) bool serviceLaunchThrottled;
@property (nonatomic) long long unexpectedTerminationCount;
@property (nonatomic) bool waitingForAdSheet;

+ (id)sharedInstance;

- (void)_adSheetAvailable;
- (void)_considerLaunchingAdSheet;
- (void)considerLaunchingAdSheet;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (long long)interruptionCount;
- (double)lastLaunchTimestamp;
- (id)launchAssertions;
- (double)nextScheduledLaunch;
- (bool)openApplicationInProgress;
- (id)proxyQueue;
- (void)releaseLaunchAssertion:(id)arg1;
- (double)remainingLaunchBackoff;
- (void)reportAdSheetInterruption;
- (void)reportAdSheetUnexpectedTermination;
- (void)resetAdSheetThrottle;
- (bool)serviceLaunchThrottled;
- (void)setDelegate:(id)arg1;
- (void)setInterruptionCount:(long long)arg1;
- (void)setLastLaunchTimestamp:(double)arg1;
- (void)setLaunchAssertions:(id)arg1;
- (void)setNextScheduledLaunch:(double)arg1;
- (void)setOpenApplicationInProgress:(bool)arg1;
- (void)setUnexpectedTerminationCount:(long long)arg1;
- (void)setWaitingForAdSheet:(bool)arg1;
- (void)takeLaunchAssertion:(id)arg1;
- (long long)unexpectedTerminationCount;
- (bool)waitingForAdSheet;

@end
