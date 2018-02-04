/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableShareLocations : PBCodable <NSCopying> {
    NSString * _activityShareURL;
    NSString * _relationshipShareURL;
}

@property (nonatomic, retain) NSString *activityShareURL;
@property (nonatomic, readonly) bool hasActivityShareURL;
@property (nonatomic, readonly) bool hasRelationshipShareURL;
@property (nonatomic, retain) NSString *relationshipShareURL;

- (void).cxx_destruct;
- (id)activityShareURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityShareURL;
- (bool)hasRelationshipShareURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relationshipShareURL;
- (void)setActivityShareURL:(id)arg1;
- (void)setRelationshipShareURL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
