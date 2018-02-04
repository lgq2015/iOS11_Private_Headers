/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying> {
    UICollectionViewLayoutAttributes * _ackIconAttributes;
    NSArray * _avatarAttributesCollection;
    UICollectionViewLayoutAttributes * _containerAttributes;
    NSArray * _nameAttributesCollection;
    UICollectionViewLayoutAttributes * _voteCountAttributes;
}

@property (nonatomic, retain) UICollectionViewLayoutAttributes *ackIconAttributes;
@property (nonatomic, retain) NSArray *avatarAttributesCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *containerAttributes;
@property (nonatomic, retain) NSArray *nameAttributesCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *voteCountAttributes;

- (void).cxx_destruct;
- (void)_applyAlphaToAllAttributesAlpha:(double)arg1;
- (void)_setContainerAttributes:(id)arg1 forLayoutMode:(unsigned long long)arg2;
- (id)ackIconAttributes;
- (id)avatarAttributesCollection;
- (id)containerAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)nameAttributesCollection;
- (void)setAckIconAttributes:(id)arg1;
- (void)setAvatarAttributesCollection:(id)arg1;
- (void)setContainerAttributes:(id)arg1;
- (void)setNameAttributesCollection:(id)arg1;
- (void)setVoteCountAttributes:(id)arg1;
- (id)voteCountAttributes;

@end
