/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATHostWakeupService : NSObject <ATEnvironmentMonitorObserver> {
    ATEnvironmentMonitor * _environmentMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_wakeupHost:(id)arg1;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)getWakeableHostsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)sendWakeupToAllHostsWithCompletion:(id /* block */)arg1;
- (void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
