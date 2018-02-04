/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMDLogEventObserver, HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    SDRDiagnosticReporter * _reporter;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedObserver;
+ (bool)shouldSubmitEvent:(id)arg1;
+ (id)subTypeForEvent:(id)arg1;
+ (id)supportedEventTypes;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (id)init;
- (id)reporter;
- (void)start;
- (void)stop;

@end
