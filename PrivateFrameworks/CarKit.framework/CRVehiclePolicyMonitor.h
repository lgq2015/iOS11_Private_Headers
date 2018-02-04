/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService> {
    <CRVehiclePolicyMonitoring> * _delegate;
    bool  _monitoring;
    NSXPCConnection * _serviceConnection;
    NSData * _vehicleCertificateSerial;
}

@property (nonatomic) <CRVehiclePolicyMonitoring> *delegate;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;
@property (nonatomic, retain) NSData *vehicleCertificateSerial;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithVehicleCertificateSerial:(id)arg1;
- (bool)isMonitoring;
- (id)monitoringConnection;
- (id)serviceConnection;
- (void)setDelegate:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)setVehicleCertificateSerial:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)vehicleCertificateSerial;
- (void)willDisableCertificateSerial:(id)arg1 reply:(id /* block */)arg2;
- (void)willEnableCertificateSerial:(id)arg1 reply:(id /* block */)arg2;

@end
