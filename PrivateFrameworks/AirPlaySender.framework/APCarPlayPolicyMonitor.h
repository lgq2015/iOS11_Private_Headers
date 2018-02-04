/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
 */

@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring> {
    <APCarPlayPolicyMonitorDelegate> * _delegate;
    CRVehiclePolicyMonitor * _monitor;
    struct OpaqueFigEndpoint { } * _observedEndpoint;
    NSObject<OS_dispatch_queue> * _queue;
    struct OpaqueFigCFWeakReferenceHolder { } * _weakEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APCarPlayPolicyMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)endpointAuthenticationSucceeded;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)willDisableVehicleTrackedByMonitor:(id)arg1;
- (void)willEnableVehicleTrackedByMonitor:(id)arg1;

@end
