/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantStreamInfo : NSObject {
    VCAudioRuleCollection * _audioRules;
    VCAudioRuleCollection * _audioRulesNegotiated;
    VCAudioStream * _audioStream;
    VCAudioStreamConfig * _audioStreamConfig;
    unsigned short  _idsStreamID;
    unsigned int  _maxAudioBitrate;
}

@property (nonatomic, retain) VCAudioRuleCollection *audioRules;
@property (nonatomic, retain) VCAudioRuleCollection *audioRulesNegotiated;
@property (nonatomic, retain) VCAudioStream *audioStream;
@property (nonatomic, retain) VCAudioStreamConfig *audioStreamConfig;
@property (nonatomic) unsigned short idsStreamID;
@property (nonatomic) unsigned int maxAudioBitrate;

- (id)audioRules;
- (id)audioRulesNegotiated;
- (id)audioStream;
- (id)audioStreamConfig;
- (void)dealloc;
- (unsigned short)idsStreamID;
- (unsigned int)maxAudioBitrate;
- (void)setAudioRules:(id)arg1;
- (void)setAudioRulesNegotiated:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamConfig:(id)arg1;
- (void)setIdsStreamID:(unsigned short)arg1;
- (void)setMaxAudioBitrate:(unsigned int)arg1;

@end
