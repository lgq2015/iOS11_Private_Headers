/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPostCommentRequest : PBRequest <NSCopying> {
    CKDPCommentContent * _commentContent;
    CKDPCommentedOnId * _identifier;
    NSString * _path;
}

@property (nonatomic, retain) CKDPCommentContent *commentContent;
@property (nonatomic, readonly) bool hasCommentContent;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, retain) CKDPCommentedOnId *identifier;
@property (nonatomic, retain) NSString *path;

+ (id)options;

- (void).cxx_destruct;
- (id)commentContent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommentContent;
- (bool)hasIdentifier;
- (bool)hasPath;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCommentContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
