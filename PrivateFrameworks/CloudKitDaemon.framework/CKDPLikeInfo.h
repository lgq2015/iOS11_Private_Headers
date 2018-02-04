/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikeInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int likeCount : 1; 
        unsigned int likedByCurrentUser : 1; 
    }  _has;
    int  _likeCount;
    bool  _likedByCurrentUser;
}

@property (nonatomic) bool hasLikeCount;
@property (nonatomic) bool hasLikedByCurrentUser;
@property (nonatomic) int likeCount;
@property (nonatomic) bool likedByCurrentUser;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLikeCount;
- (bool)hasLikedByCurrentUser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)likeCount;
- (bool)likedByCurrentUser;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLikeCount:(bool)arg1;
- (void)setHasLikedByCurrentUser:(bool)arg1;
- (void)setLikeCount:(int)arg1;
- (void)setLikedByCurrentUser:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
