/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequest : NSObject {
    GKMatchRequestInternal * _internal;
    id /* block */  _inviteeResponseHandler;
    id /* block */  _recipientResponseHandler;
}

@property unsigned long long defaultNumberOfPlayers;
@property (retain) GKMatchRequestInternal *internal;
@property (copy) NSString *inviteMessage;
@property (copy) id /* block */ inviteeResponseHandler;
@property unsigned long long maxPlayers;
@property unsigned long long minPlayers;
@property unsigned int playerAttributes;
@property unsigned long long playerGroup;
@property (retain) NSArray *playersToInvite;
@property (copy) id /* block */ recipientResponseHandler;
@property (retain) NSArray *recipients;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)defaultNumberOfPlayersIsValid;
- (id)description;
- (void)ensureValidityHosted:(bool)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)guestPlayers;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id /* block */)inviteeResponseHandler;
- (bool)isEqual:(id)arg1;
- (bool)isRecipientCountValid;
- (bool)isTurnBasedValid;
- (bool)isValidForHosted:(bool)arg1;
- (bool)isValidWithMax:(unsigned long long)arg1;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)playersToInvite;
- (id /* block */)recipientResponseHandler;
- (id)recipients;
- (void)removeLocalPlayerFromPlayersToInvite;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setInviteeResponseHandler:(id /* block */)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setRecipientResponseHandler:(id /* block */)arg1;
- (void)setRecipients:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
