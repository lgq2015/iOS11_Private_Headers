/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorLocalConfiguration : NSObject {
    bool  _allowAudioRecording;
    bool  _allowAudioSwitching;
    bool  _allowRTCPFB;
    VCAudioRuleCollection * _audioRuleCollection;
    unsigned int  _audioSSRC;
    unsigned int  _audioUnitNumber;
    NSString * _basebandCodec;
    unsigned int  _basebandCodecSampleRate;
    VCBitrateArbiter * _bitrateArbiter;
    void * _callLogFile;
    NSSet * _captionsReceiverLanguages;
    NSSet * _captionsSenderLanguages;
    int  _deviceRole;
    bool  _isCaller;
    int  _preferredAudioCodec;
    VCVideoRuleCollections * _screenRuleCollections;
    NSDictionary * _videoFeatureStrings;
    VCVideoRuleCollections * _videoRuleCollections;
    unsigned int  _videoSSRC;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) bool allowAudioSwitching;
@property (nonatomic) bool allowRTCPFB;
@property (nonatomic, retain) VCAudioRuleCollection *audioRuleCollection;
@property (nonatomic) unsigned int audioSSRC;
@property (nonatomic) unsigned int audioUnitNumber;
@property (nonatomic, retain) NSString *basebandCodec;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (nonatomic, retain) VCBitrateArbiter *bitrateArbiter;
@property (nonatomic) void*callLogFile;
@property (nonatomic, retain) NSSet *captionsReceiverLanguages;
@property (nonatomic, retain) NSSet *captionsSenderLanguages;
@property (nonatomic) int deviceRole;
@property (nonatomic) bool isCaller;
@property (nonatomic) int preferredAudioCodec;
@property (nonatomic, retain) VCVideoRuleCollections *screenRuleCollections;
@property (nonatomic, retain) NSDictionary *videoFeatureStrings;
@property (nonatomic, retain) VCVideoRuleCollections *videoRuleCollections;
@property (nonatomic) unsigned int videoSSRC;

- (bool)allowAudioRecording;
- (bool)allowAudioSwitching;
- (bool)allowRTCPFB;
- (id)audioRuleCollection;
- (unsigned int)audioSSRC;
- (unsigned int)audioUnitNumber;
- (id)basebandCodec;
- (unsigned int)basebandCodecSampleRate;
- (id)bitrateArbiter;
- (void*)callLogFile;
- (id)captionsReceiverLanguages;
- (id)captionsSenderLanguages;
- (void)dealloc;
- (int)deviceRole;
- (bool)isCaller;
- (int)preferredAudioCodec;
- (id)screenRuleCollections;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAllowAudioSwitching:(bool)arg1;
- (void)setAllowRTCPFB:(bool)arg1;
- (void)setAudioRuleCollection:(id)arg1;
- (void)setAudioSSRC:(unsigned int)arg1;
- (void)setAudioUnitNumber:(unsigned int)arg1;
- (void)setBasebandCodec:(id)arg1;
- (void)setBasebandCodecSampleRate:(unsigned int)arg1;
- (void)setBitrateArbiter:(id)arg1;
- (void)setCallLogFile:(void*)arg1;
- (void)setCaptionsReceiverLanguages:(id)arg1;
- (void)setCaptionsSenderLanguages:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setIsCaller:(bool)arg1;
- (void)setPreferredAudioCodec:(int)arg1;
- (void)setScreenRuleCollections:(id)arg1;
- (void)setVideoFeatureStrings:(id)arg1;
- (void)setVideoRuleCollections:(id)arg1;
- (void)setVideoSSRC:(unsigned int)arg1;
- (id)videoFeatureStrings;
- (id)videoRuleCollections;
- (unsigned int)videoSSRC;

@end
