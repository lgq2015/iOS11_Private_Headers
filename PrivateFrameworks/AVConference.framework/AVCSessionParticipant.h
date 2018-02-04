/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSessionParticipant : NSObject {
    float  _audioPosition;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    bool  _frequencyMeteringEnabled;
    bool  _muted;
    NSData * _participantData;
    NSString * _participantID;
    long long  _streamToken;
    NSString * _transportToken;
    float  _volume;
}

@property (nonatomic) float audioPosition;
@property (nonatomic) <AVCSessionParticipantDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (getter=isFrequencyMeteringEnabled, nonatomic) bool frequencyMeteringEnabled;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) NSData *participantData;
@property (nonatomic, readonly) NSString *participantID;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic) float volume;

- (float)audioPosition;
- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterFromNotifications;
- (id)description;
- (id)initWithParticipantID:(id)arg1 data:(id)arg2 transportToken:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (bool)isFrequencyMeteringEnabled;
- (bool)isMuted;
- (id)participantData;
- (id)participantID;
- (void)registerBlocksForNotifications;
- (void)setAudioPosition:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrequencyMeteringEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setupNotificationQueue:(id)arg1;
- (long long)streamToken;
- (float)volume;

@end
