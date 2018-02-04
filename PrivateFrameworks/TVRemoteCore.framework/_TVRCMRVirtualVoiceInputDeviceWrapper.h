/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {
    void * _deviceDescriptor;
}

@property (nonatomic, copy) NSDictionary *defaultAudioFormat;
@property (nonatomic, copy) NSArray *supportedFormats;

- (void)dealloc;
- (id)defaultAudioFormat;
- (void*)deviceDescriptor;
- (id)init;
- (void)setDefaultAudioFormat:(id)arg1;
- (void)setSupportedFormats:(id)arg1;
- (id)supportedFormats;

@end
