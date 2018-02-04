/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantLocal : VCSessionParticipant

- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (void)cleanupMediaBlob;
- (bool)computeMediaBlob;
- (bool)containsAudioStreamWithIDSStreamID:(unsigned short)arg1;
- (void)createOpaqueData;
- (bool)createParticipantInfo;
- (void)dealloc;
- (unsigned int)generateSSRC;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3;
- (id)newAudioStreamConfigForLowQualityAudioBitrate:(unsigned int*)arg1;
- (id)newStreamConfiguration;
- (void)setFrequencyMeteringEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (id)setupAudioStreamRTP:(id)arg1;
- (bool)setupAudioStreams;
- (bool)setupStreamWithConfiguration:(id)arg1 maxAudioBitrate:(unsigned int)arg2 idsDestination:(id)arg3;

@end
