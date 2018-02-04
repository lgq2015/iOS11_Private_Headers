/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikedId : PBCodable <NSCopying> {
    CKDPIdentifier * _commentIdentifier;
    NSData * _itemId;
    CKDPShareIdentifier * _shareIdentifier;
}

@property (nonatomic, retain) CKDPIdentifier *commentIdentifier;
@property (nonatomic, readonly) bool hasCommentIdentifier;
@property (nonatomic, readonly) bool hasItemId;
@property (nonatomic, readonly) bool hasShareIdentifier;
@property (nonatomic, retain) NSData *itemId;
@property (nonatomic, retain) CKDPShareIdentifier *shareIdentifier;

- (void).cxx_destruct;
- (id)commentIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommentIdentifier;
- (bool)hasItemId;
- (bool)hasShareIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommentIdentifier:(id)arg1;
- (void)setItemId:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)shareIdentifier;
- (void)writeTo:(id)arg1;

@end
