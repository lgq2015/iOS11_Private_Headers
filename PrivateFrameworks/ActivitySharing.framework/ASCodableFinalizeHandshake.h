/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableFinalizeHandshake : PBCodable <NSCopying> {
    ASCodableActivityDataPreview * _activityDataPreview;
    NSString * _handshakeToken;
    ASCodableShareLocations * _inviterShareLocations;
}

@property (nonatomic, retain) ASCodableActivityDataPreview *activityDataPreview;
@property (nonatomic, retain) NSString *handshakeToken;
@property (nonatomic, readonly) bool hasActivityDataPreview;
@property (nonatomic, readonly) bool hasHandshakeToken;
@property (nonatomic, readonly) bool hasInviterShareLocations;
@property (nonatomic, retain) ASCodableShareLocations *inviterShareLocations;

- (void).cxx_destruct;
- (id)activityDataPreview;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handshakeToken;
- (bool)hasActivityDataPreview;
- (bool)hasHandshakeToken;
- (bool)hasInviterShareLocations;
- (unsigned long long)hash;
- (id)inviterShareLocations;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityDataPreview:(id)arg1;
- (void)setHandshakeToken:(id)arg1;
- (void)setInviterShareLocations:(id)arg1;
- (void)writeTo:(id)arg1;

@end
