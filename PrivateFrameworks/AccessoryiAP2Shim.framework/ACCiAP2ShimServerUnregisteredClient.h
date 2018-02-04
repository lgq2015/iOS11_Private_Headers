/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

@interface ACCiAP2ShimServerUnregisteredClient : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSString * _bundleId;
    struct SBSProcessAssertion { } * _processAssertion;
    long long  _processAssertionStartTime;
    int  _processId;
}

@property (readonly) BKSApplicationStateMonitor *appStateMonitor;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) struct SBSProcessAssertion { }*processAssertion;
@property (nonatomic, readonly) long long processAssertionStartTime;
@property (nonatomic, readonly) int processId;

- (void).cxx_destruct;
- (id)_applicationInfoForBundleIDSync:(id)arg1;
- (int)_getProcessId;
- (id)appStateMonitor;
- (id)bundleId;
- (id)initWithBundleId:(id)arg1;
- (struct SBSProcessAssertion { }*)processAssertion;
- (long long)processAssertionStartTime;
- (int)processId;
- (void)releaseProcessAssertion;
- (void)takeProcessAssertion:(id)arg1;

@end
