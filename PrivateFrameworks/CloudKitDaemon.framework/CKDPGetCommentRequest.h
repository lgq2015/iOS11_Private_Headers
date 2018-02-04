/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentRequest : PBRequest <NSCopying> {
    CKDPIdentifier * _commentId;
}

@property (nonatomic, retain) CKDPIdentifier *commentId;
@property (nonatomic, readonly) bool hasCommentId;

+ (id)options;

- (void).cxx_destruct;
- (id)commentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCommentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
