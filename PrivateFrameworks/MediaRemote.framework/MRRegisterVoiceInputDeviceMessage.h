/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor * _descriptor;
}

@property (nonatomic, readonly) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (void)dealloc;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (unsigned long long)type;

@end
