/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipant : NSObject <AVCRateControllerDelegate, VCMediaStreamDelegate, VCSecurityEventHandler> {
    float  _audioPosition;
    union tagNTP { 
        unsigned long long wide; 
        struct { 
            unsigned int frac; 
            unsigned int sec; 
        } time; 
    }  _creationTime;
    id  _delegate;
    bool  _frequencyMeteringEnabled;
    NSString * _idsDestination;
    bool  _isMuted;
    VCMediaNegotiationBlob * _mediaBlob;
    NSData * _opaqueData;
    NSDictionary * _participantInfo;
    NSObject<OS_dispatch_queue> * _participantQueue;
    NSMutableDictionary * _participantStreams;
    int  _processId;
    AVCRateController * _rateController;
    NSMutableArray * _runningStreams;
    NSMutableArray * _startingStreams;
    unsigned int  _state;
    NSMutableArray * _stoppingStreams;
    id  _streamDelegate;
    NSString * _uuid;
    float  _volume;
}

@property (nonatomic, readonly) NSArray *audioStreams;
@property (nonatomic, readonly) union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } creationTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VCSessionParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFrequencyMeteringEnabled, nonatomic) bool frequencyMeteringEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) NSData *opaqueData;
@property (nonatomic, readonly) NSMutableDictionary *streamConfiguration;
@property (nonatomic) <VCSessionParticipantStreamDelegate> *streamDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void)applyNegotiatedStreamConfiguration:(id)arg1;
- (id)audioStreams;
- (bool)configureWithDatagramChannelToken:(unsigned int)arg1 isContinuity:(bool)arg2;
- (union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })creationTime;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)dispatchedStart;
- (void)dispatchedStop;
- (void)dispatchedStream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)dispatchedStreamDidStop:(id)arg1;
- (id)generateEncryptionKey;
- (void)handleEncryptionInfoChange:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3;
- (bool)isFrequencyMeteringEnabled;
- (bool)isMuted;
- (void)negotiateStreamConfiguration:(id)arg1;
- (id)newStreamConfigurationWithRemoteSSRC:(unsigned int)arg1;
- (id)opaqueData;
- (char *)participantStateToString:(unsigned int)arg1;
- (void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (bool)setAudioPosition:(float)arg1;
- (void)setFrequencyMeteringEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStreamDelegate:(id)arg1;
- (bool)setVolume:(float)arg1;
- (void)start;
- (void)stop;
- (id)streamConfiguration;
- (id)streamDelegate;
- (id)streamsToString;
- (id)uuid;
- (void)vcMediaStream:(id)arg1 didPauseStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(bool)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;

@end
