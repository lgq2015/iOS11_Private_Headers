/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface SDPMini : NSObject {
    NSMutableDictionary * _audioParameters;
    NSMutableDictionary * _mediaLines;
    NSString * _sdpUsername;
    NSNumber * aacBlockSize;
    bool  allowAudioRecording;
    bool  allowRTCPFB;
    bool  allowsContentsChangeWithAspectPreservation;
    bool  allowsDynamicMaxBitrate;
    NSNumber * answerBandwidth;
    NSMutableArray * audioPayloads;
    NSNumber * audioRTCPPort;
    NSNumber * audioRTPID;
    NSNumber * audioRTPPort;
    NSNumber * audioUnitModel;
    NSNumber * basebandCodecSampleRate;
    NSString * basebandCodecType;
    NSDictionary * featuresListDict;
    NSNumber * maxBandwidth;
    NSString * origin;
    NSMutableArray * secondaryAudioPayloads;
    NSString * sessionIP;
    NSNumber * videoRTPID;
}

@property (nonatomic, retain) NSNumber *aacBlockSize;
@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) bool allowRTCPFB;
@property (nonatomic) bool allowsContentsChangeWithAspectPreservation;
@property (nonatomic) bool allowsDynamicMaxBitrate;
@property (nonatomic, retain) NSNumber *answerBandwidth;
@property (nonatomic, readonly) NSMutableArray *audioPayloads;
@property (nonatomic, retain) NSNumber *audioRTCPPort;
@property (nonatomic, retain) NSNumber *audioRTPID;
@property (nonatomic, retain) NSNumber *audioRTPPort;
@property (nonatomic, retain) NSNumber *audioUnitModel;
@property (nonatomic, retain) NSDictionary *featuresListDict;
@property (nonatomic, retain) NSNumber *maxBandwidth;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, readonly) NSMutableArray *secondaryAudioPayloads;
@property (nonatomic, retain) NSString *sessionIP;

+ (bool)setPayload:(int)arg1 mediaLine:(id)arg2;

- (id)SDPUsername;
- (id)aacBlockSize;
- (void)addMediaLine:(id)arg1 mediaType:(int)arg2;
- (bool)allowAudioRecording;
- (bool)allowRTCPFB;
- (bool)allowsContentsChangeWithAspectPreservation;
- (bool)allowsDynamicMaxBitrate;
- (id)answerBandwidth;
- (id)audioPayloads;
- (id)audioRTCPPort;
- (id)audioRTPID;
- (id)audioRTPPort;
- (id)audioUnitModel;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (id)composeAudioString;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeSessionString;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg3 count:(int)arg4;
- (void)dealloc;
- (id)featuresListDict;
- (bool)getBasebandCodecType:(id*)arg1 sampleRate:(id*)arg2;
- (id)getMediaLineForType:(int)arg1;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg5 remoteSupportsHD:(bool)arg6 screenSharing:(bool)arg7;
- (bool)getUseSbr:(bool*)arg1 blockSize:(int*)arg2 forAACFormat:(int)arg3;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)maxBandwidth;
- (id)mediaTypeToString:(int)arg1;
- (id)origin;
- (void)parseAudioFormatAttribute:(id)arg1;
- (void)parseAudioMediaAttributes:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (void)parseSDPFromString:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (int)rulesFramerate:(int)arg1;
- (void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int*)arg2 pHeight:(int*)arg3;
- (id)secondaryAudioPayloads;
- (id)sessionIP;
- (void)setAacBlockSize:(id)arg1;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAllowRTCPFB:(bool)arg1;
- (void)setAllowsContentsChangeWithAspectPreservation:(bool)arg1;
- (void)setAllowsDynamicMaxBitrate:(bool)arg1;
- (void)setAnswerBandwidth:(id)arg1;
- (void)setAudioRTCPPort:(id)arg1;
- (void)setAudioRTPID:(id)arg1;
- (void)setAudioRTPPort:(id)arg1;
- (void)setAudioUnitModel:(id)arg1;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)setFeaturesListDict:(id)arg1;
- (void)setMaxBandwidth:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setSessionIP:(id)arg1;
- (void)setUseSbr:(bool)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (bool)setVideoPayloads:(int*)arg1 count:(int)arg2;
- (void)setVideoRTCPFB:(bool)arg1 useNACK:(bool)arg2;
- (id)toStringWithVideoEnabled:(bool)arg1;

@end
