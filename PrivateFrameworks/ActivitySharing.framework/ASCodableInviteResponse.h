/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableInviteResponse : PBCodable <NSCopying> {
    ASCodableActivityDataPreview * _activityDataPreview;
    NSString * _handshakeToken;
    struct { 
        unsigned int inviteeVersion : 1; 
        unsigned int responseCode : 1; 
    }  _has;
    NSString * _inviteeBuildNumber;
    NSString * _inviteeCloudKitAddress;
    ASCodableShareLocations * _inviteeShareLocations;
    unsigned int  _inviteeVersion;
    int  _responseCode;
}

@property (nonatomic, retain) ASCodableActivityDataPreview *activityDataPreview;
@property (nonatomic, retain) NSString *handshakeToken;
@property (nonatomic, readonly) bool hasActivityDataPreview;
@property (nonatomic, readonly) bool hasHandshakeToken;
@property (nonatomic, readonly) bool hasInviteeBuildNumber;
@property (nonatomic, readonly) bool hasInviteeCloudKitAddress;
@property (nonatomic, readonly) bool hasInviteeShareLocations;
@property (nonatomic) bool hasInviteeVersion;
@property (nonatomic) bool hasResponseCode;
@property (nonatomic, retain) NSString *inviteeBuildNumber;
@property (nonatomic, retain) NSString *inviteeCloudKitAddress;
@property (nonatomic, retain) ASCodableShareLocations *inviteeShareLocations;
@property (nonatomic) unsigned int inviteeVersion;
@property (nonatomic) int responseCode;

- (void).cxx_destruct;
- (id)activityDataPreview;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handshakeToken;
- (bool)hasActivityDataPreview;
- (bool)hasHandshakeToken;
- (bool)hasInviteeBuildNumber;
- (bool)hasInviteeCloudKitAddress;
- (bool)hasInviteeShareLocations;
- (bool)hasInviteeVersion;
- (bool)hasResponseCode;
- (unsigned long long)hash;
- (id)inviteeBuildNumber;
- (id)inviteeCloudKitAddress;
- (id)inviteeShareLocations;
- (unsigned int)inviteeVersion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (void)setActivityDataPreview:(id)arg1;
- (void)setHandshakeToken:(id)arg1;
- (void)setHasInviteeVersion:(bool)arg1;
- (void)setHasResponseCode:(bool)arg1;
- (void)setInviteeBuildNumber:(id)arg1;
- (void)setInviteeCloudKitAddress:(id)arg1;
- (void)setInviteeShareLocations:(id)arg1;
- (void)setInviteeVersion:(unsigned int)arg1;
- (void)setResponseCode:(int)arg1;
- (void)writeTo:(id)arg1;

@end
