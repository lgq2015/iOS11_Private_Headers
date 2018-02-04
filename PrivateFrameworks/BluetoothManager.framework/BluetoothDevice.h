/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@interface BluetoothDevice : NSObject {
    NSString * _address;
    unsigned int  _connectingServiceMask;
    struct BTDeviceImpl { } * _device;
    NSString * _name;
}

- (void)_clearName;
- (bool)_isNameCached;
- (void)acceptSSP:(long long)arg1;
- (int)accessorySettingFeatureBitMask;
- (id)address;
- (int)batteryLevel;
- (bool)cloudPaired;
- (long long)compare:(id)arg1;
- (void)connect;
- (void)connectWithServices:(unsigned int)arg1;
- (bool)connected;
- (unsigned long long)connectedServices;
- (unsigned long long)connectedServicesCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct BTDeviceImpl { }*)device;
- (void)disconnect;
- (unsigned int)doubleTapAction;
- (unsigned int)doubleTapActionEx:(unsigned int*)arg1 rightAction:(unsigned int*)arg2;
- (unsigned int)doubleTapCapability;
- (void)endVoiceCommand;
- (unsigned int)getConnectingServiceMask;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (bool)inEarDetectEnabled;
- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (bool)isAccessory;
- (bool)isAppleAudioDevice;
- (bool)isServiceSupported:(unsigned int)arg1;
- (unsigned int)listeningMode;
- (bool)magicPaired;
- (bool)magicPairedDeviceNameUpdated;
- (unsigned int)majorClass;
- (unsigned int)micMode;
- (unsigned int)minorClass;
- (id)name;
- (bool)paired;
- (unsigned int)productId;
- (id)scoUID;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (bool)setDoubleTapAction:(unsigned int)arg1;
- (bool)setDoubleTapActionEx:(unsigned int)arg1 rightAction:(unsigned int)arg2;
- (bool)setInEarDetectEnabled:(bool)arg1;
- (bool)setListeningMode:(unsigned int)arg1;
- (bool)setMicMode:(unsigned int)arg1;
- (void)setPIN:(id)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (void)setSyncGroup:(int)arg1 enabled:(bool)arg2;
- (void)setSyncSettings:(struct { bool x1; bool x2; bool x3; bool x4; })arg1;
- (bool)setUserName:(id)arg1;
- (void)startVoiceCommand;
- (bool)supportsBatteryLevel;
- (id)syncGroups;
- (struct { bool x1; bool x2; bool x3; bool x4; })syncSettings;
- (int)type;
- (void)unpair;
- (unsigned int)vendorId;

@end
