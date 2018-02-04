/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPComment : PBCodable <NSCopying> {
    CKDPCommentContent * _commentContent;
    CKDPIdentifier * _commentId;
    CKDPDate * _createdAt;
    CKDPIdentifier * _from;
    CKDPLikeInfo * _likeInfo;
    NSString * _path;
}

@property (nonatomic, retain) CKDPCommentContent *commentContent;
@property (nonatomic, retain) CKDPIdentifier *commentId;
@property (nonatomic, retain) CKDPDate *createdAt;
@property (nonatomic, retain) CKDPIdentifier *from;
@property (nonatomic, readonly) bool hasCommentContent;
@property (nonatomic, readonly) bool hasCommentId;
@property (nonatomic, readonly) bool hasCreatedAt;
@property (nonatomic, readonly) bool hasFrom;
@property (nonatomic, readonly) bool hasLikeInfo;
@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, retain) CKDPLikeInfo *likeInfo;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (id)commentContent;
- (id)commentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (bool)hasCommentContent;
- (bool)hasCommentId;
- (bool)hasCreatedAt;
- (bool)hasFrom;
- (bool)hasLikeInfo;
- (bool)hasPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)likeInfo;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (bool)readFrom:(id)arg1;
- (void)setCommentContent:(id)arg1;
- (void)setCommentId:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setLikeInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
