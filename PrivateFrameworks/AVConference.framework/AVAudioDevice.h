/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVAudioDevice : NSObject {
    NSString * _UID;
    NSNumber * _deviceID;
    NSString * _deviceName;
    bool  _inputAvailable;
    bool  _isBluetoothDevice;
    bool  _isLineIn;
    bool  _outputAvailable;
    bool  _preferredDevice;
}

@property (nonatomic, readonly) NSString *UID;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) bool inputAvailable;
@property (nonatomic, readonly) bool isBluetoothDevice;
@property (nonatomic, readonly) bool outputAvailable;
@property (getter=isPreferredDevice, nonatomic, readonly) bool preferredDevice;

- (id)UID;
- (unsigned int*)allocDeviceControlListAndSize:(unsigned int*)arg1;
- (void)createName;
- (void)createNameForScope:(unsigned int)arg1;
- (void)createUID;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (unsigned int)getDataSourceControlID;
- (unsigned long long)hash;
- (id)initWithDeviceID:(id)arg1;
- (bool)inputAvailable;
- (bool)isBluetoothDevice;
- (bool)isBuiltInDevice;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredDevice;
- (bool)isSomethingConnectedToJack;
- (bool)isStreamAvailableForScope:(unsigned int)arg1;
- (bool)isValidDevice;
- (bool)isValidInputDevice;
- (bool)outputAvailable;

@end