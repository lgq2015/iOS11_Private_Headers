/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary * actualDictionary;
    unsigned int  orignalCallID;
    unsigned long long  type;
}

@property unsigned int callID;
@property long long nonce;
@property (readonly) unsigned int originalCallID;

+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned int)arg4 focus:(bool)arg5;
+ (bool)validateCancel:(id)arg1;
+ (bool)validateDictionary:(id)arg1;
+ (bool)validateFocus:(id)arg1;
+ (bool)validateInvite:(id)arg1;
+ (bool)validateReply:(id)arg1;

- (unsigned int)callID;
- (id)cancelDictionary;
- (id)connectionData;
- (id)createBlob;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)focusDictionary:(bool)arg1;
- (id)fromParticipantID;
- (id)initWithCoder:(id)arg1;
- (bool)isCancelDictionary;
- (bool)isFocus;
- (bool)isFocusDictionary;
- (bool)isInviteDictionary;
- (bool)isReplyDictionary;
- (id)localVCPartyID;
- (bool)matchesNonce:(long long)arg1;
- (bool)matchesResponse:(id)arg1;
- (long long)nonce;
- (unsigned int)originalCallID;
- (id)participantID;
- (id)remoteVCPartyID;
- (id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(bool)arg4;
- (unsigned long long)response;
- (void)setCallID:(unsigned int)arg1;
- (void)setFocus:(bool)arg1;
- (void)setFromParticipantID:(id)arg1;
- (id)setLocalVCPartyID:(id)arg1;
- (void)setNonce:(long long)arg1;
- (id)setRemoteVCPartyID:(id)arg1;
- (unsigned long long)type;
- (id)version;

@end
