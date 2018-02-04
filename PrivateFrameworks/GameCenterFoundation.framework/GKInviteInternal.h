/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKInviteInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSString * _deviceID;
    NSString * _inviteID;
    NSDictionary * _localizableMessage;
    unsigned long long  _matchType;
    NSString * _message;
    NSString * _participantID;
    NSData * _peerBlob;
    NSString * _peerID;
    NSData * _peerNATIP;
    int  _peerNATType;
    NSData * _peerPushToken;
    GKPlayerInternal * _player;
    unsigned int  _playerAttributes;
    int  _playerGroup;
    NSString * _rid;
    NSData * _sessionToken;
    unsigned char  _version;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSString *inviteID;
@property (nonatomic, readonly) bool isNearby;
@property (nonatomic, retain) NSDictionary *localizableMessage;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) NSData *peerBlob;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, retain) NSData *peerNATIP;
@property (nonatomic) int peerNATType;
@property (nonatomic, retain) NSData *peerPushToken;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (nonatomic) unsigned int playerAttributes;
@property (nonatomic) int playerGroup;
@property (nonatomic, retain) NSString *rid;
@property (nonatomic, retain) NSData *sessionToken;
@property (nonatomic) unsigned char version;

+ (id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5;
+ (id)inviteWithBulletin:(id)arg1;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (void)dealloc;
- (id)descriptionSubstitutionMap;
- (id)deviceID;
- (unsigned long long)hash;
- (id)init;
- (id)inviteID;
- (bool)isEqual:(id)arg1;
- (bool)isNearby;
- (id)localizableMessage;
- (unsigned long long)matchType;
- (id)message;
- (id)participantID;
- (id)peerBlob;
- (id)peerID;
- (id)peerNATIP;
- (int)peerNATType;
- (id)peerPushToken;
- (id)player;
- (unsigned int)playerAttributes;
- (int)playerGroup;
- (id)rid;
- (id)sessionToken;
- (void)setBundleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setMatchType:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(int)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(int)arg1;
- (void)setRid:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end
