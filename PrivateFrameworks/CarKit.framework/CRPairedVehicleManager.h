/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRPairedVehicleManager : NSObject {
    CRCarKitServiceClient * _serviceClient;
}

@property (nonatomic, retain) CRCarKitServiceClient *serviceClient;

- (void).cxx_destruct;
- (id)allVehicles;
- (id)init;
- (id)pairedVehicles;
- (bool)removeVehicle:(id)arg1;
- (id)saveVehicle:(id)arg1;
- (id)serviceClient;
- (void)setServiceClient:(id)arg1;
- (id)vehicleForBluetoothAddress:(id)arg1;
- (id)vehicleForCertificateSerial:(id)arg1;
- (id)vehicleNameForWiFiUUID:(id)arg1;

@end
