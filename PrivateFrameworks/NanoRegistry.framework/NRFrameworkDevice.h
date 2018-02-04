/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRFrameworkDevice : NRDevice {
    NSUUID * _deviceID;
    <NRFrameworkDeviceDelegate> * _syncDevicesDelegate;
}

@property (nonatomic, retain) NSUUID *deviceID;
@property (nonatomic) <NRFrameworkDeviceDelegate> *syncDevicesDelegate;

- (void).cxx_destruct;
- (bool)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_valueForProperty:(id)arg1;
- (id)deviceID;
- (id)initWithDevice:(id)arg1 deviceID:(id)arg2 queue:(id)arg3;
- (void)setDeviceID:(id)arg1;
- (void)setSyncDevicesDelegate:(id)arg1;
- (id)syncDevicesDelegate;
- (id)valueForProperty:(id)arg1;

@end
