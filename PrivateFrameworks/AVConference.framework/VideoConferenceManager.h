/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {
    unsigned char  _clientUUID;
    id  _networkAgent;
    id  _vtpWrapper;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
    VideoConference * activeConference;
    VideoConference * conferenceWithMic;
    struct tagHANDLE { int x1; } * hSIP;
    bool  isVTPInitialized;
    ICEResultWaitQueue * resultQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  sipLock;
    int  sipRefCount;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  stateLock;
    NSMutableArray * vcList;
}

@property VideoConference *activeConference;
@property VideoConference *conferenceWithMic;
@property (readonly) ICEResultWaitQueue *resultQueue;
@property (readonly) NSMutableArray *vcList;

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;
+ (id)defaultVideoConferenceManager;

- (struct tagHANDLE { int x1; }*)SIPHandle;
- (id)activeConference;
- (void)addVideoConference:(id)arg1;
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)cleanupVTP;
- (id)conferenceForCallID:(unsigned int)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (id)conferenceWithMic;
- (void)createSIPWithPacketMultiplexMode:(int)arg1;
- (void)getClientUUID:(unsigned char)arg1;
- (bool)hasVideoConference:(id)arg1;
- (id)init;
- (bool)isSIPHandleValid:(struct tagHANDLE { int x1; }*)arg1;
- (void)pauseVideoConferences:(bool)arg1;
- (void)registerBlocksForConference;
- (void)removeVideoConference:(id)arg1;
- (id)resultQueue;
- (void)setActiveConference:(id)arg1;
- (void)setConferenceWithMic:(id)arg1;
- (void)startSIPWithPacketMultiplexMode:(int)arg1 transportType:(unsigned int)arg2;
- (void)stopSIPWithTransportType:(unsigned int)arg1;
- (id)vcList;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(bool)arg2;
- (void)videoConference:(id)arg1 localAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteMediaStalled:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseAudio:(bool)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseVideo:(bool)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(bool)arg3;

@end
