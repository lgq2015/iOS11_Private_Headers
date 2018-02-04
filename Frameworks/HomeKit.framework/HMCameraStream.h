/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraStream : HMCameraSource {
    _HMCameraStream * _stream;
}

@property (nonatomic, readonly) unsigned long long audioStreamSetting;
@property (nonatomic, retain) _HMCameraStream *stream;

- (void).cxx_destruct;
- (unsigned long long)audioStreamSetting;
- (id)initWithStream:(id)arg1;
- (void)setAudioStreamSetting:(unsigned long long)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end
