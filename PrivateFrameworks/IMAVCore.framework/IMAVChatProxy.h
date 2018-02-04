/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVChatProxy : NSObject {
    NSDictionary * _info;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSString *conferenceID;
@property (nonatomic) double connectionTimeoutTime;
@property (nonatomic, readonly, retain) NSNumber *dataDownloaded;
@property (nonatomic, readonly, retain) NSNumber *dataUploaded;
@property (nonatomic, readonly, retain) NSDate *dateConnected;
@property (nonatomic, readonly, retain) NSDate *dateEnded;
@property (nonatomic, readonly) int endedError;
@property (nonatomic, readonly) unsigned int endedReason;
@property (nonatomic, readonly) bool hasReceivedFirstFrame;
@property (nonatomic, readonly, retain) IMHandle *initiatorIMHandle;
@property (nonatomic) double invitationTimeoutTime;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCaller;
@property (setter=setMute:, nonatomic) bool isMute;
@property (nonatomic) bool isSendingAudio;
@property (nonatomic) bool isSendingVideo;
@property (nonatomic, readonly) bool isStateFinal;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly, retain) IMHandle *otherIMHandle;
@property (getter=isRelayed, nonatomic) bool relayed;
@property (nonatomic, readonly, retain) NSArray *remoteParticipants;
@property (nonatomic, readonly) unsigned int sessionID;
@property (nonatomic, readonly) unsigned int state;

- (id)GUID;
- (bool)_isCallUpgradeTo:(id)arg1;
- (bool)_isProxy;
- (void)acceptInvitation;
- (id)account;
- (void)cancelInvitation;
- (id)conferenceID;
- (double)connectionTimeoutTime;
- (id)dataDownloaded;
- (id)dataUploaded;
- (id)dateConnected;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (id)description;
- (void)endChat;
- (void)endChatWithReason:(unsigned int)arg1;
- (int)endedError;
- (unsigned int)endedReason;
- (void)finalUpdate;
- (void)forwardInvocation:(id)arg1;
- (bool)hasReceivedFirstFrame;
- (id)initiatorIMHandle;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)inviteAll;
- (bool)isActive;
- (bool)isCaller;
- (bool)isMute;
- (bool)isRelayed;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isStateFinal;
- (bool)isVideo;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)otherIMHandle;
- (id)remoteParticipants;
- (unsigned int)sessionID;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setLocalAspectRatio:(struct CGSize { double x1; double x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)setMute:(bool)arg1;
- (void)setRelayed:(bool)arg1;
- (unsigned int)state;
- (void)updateWithInfo:(id)arg1;

@end
