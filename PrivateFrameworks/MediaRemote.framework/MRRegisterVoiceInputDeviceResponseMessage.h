/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int deviceID;
@property (nonatomic, readonly) unsigned int errorCode;

- (unsigned int)deviceID;
- (unsigned int)errorCode;
- (id)initWithDeviceID:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (unsigned long long)type;

@end
