/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation {
    NSString * _inviteMessage;
    GKPlayerInternal * _invitedBy;
    NSDate * _lastTurnDate;
    unsigned int  _matchOutcome;
    GKPlayerInternal * _player;
    NSString * _sessionID;
    unsigned char  _slot;
    NSString * _status;
    NSDate * _timeoutDate;
}

@property (nonatomic, retain) NSString *inviteMessage;
@property (nonatomic, retain) GKPlayerInternal *invitedBy;
@property (nonatomic, retain) NSDate *lastTurnDate;
@property (nonatomic) unsigned int matchOutcome;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned char slot;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSDate *timeoutDate;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)descriptionSubstitutionMap;
- (unsigned long long)hash;
- (id)inviteMessage;
- (id)invitedBy;
- (bool)isEqual:(id)arg1;
- (id)lastTurnDate;
- (unsigned int)matchOutcome;
- (id)player;
- (id)playerID;
- (id)serverRepresentation;
- (id)sessionID;
- (void)setInviteMessage:(id)arg1;
- (void)setInvitedBy:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setMatchOutcome:(unsigned int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSlot:(unsigned char)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimeoutDate:(id)arg1;
- (unsigned char)slot;
- (id)status;
- (id)timeoutDate;

@end
