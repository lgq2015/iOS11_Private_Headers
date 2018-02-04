/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long deviceIdentifier;
@property (nonatomic, readonly) unsigned int errorCode;

- (unsigned long long)deviceIdentifier;
- (unsigned int)errorCode;
- (id)initWithErrorCode:(unsigned int)arg1 deviceIdentifier:(unsigned long long)arg2;
- (unsigned long long)type;

@end
