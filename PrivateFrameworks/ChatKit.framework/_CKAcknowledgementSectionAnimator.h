/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKAcknowledgementSectionAnimator : NSObject {
    UIImageView * _ackIconView;
    UICollectionViewLayoutAttributes * _ackIconViewAttr;
    unsigned long long  _ackVoteCount;
    long long  _acknowledgmentType;
    CNAvatarView * _avatarView;
    UICollectionViewLayoutAttributes * _avatarViewAttr;
    UIView * _containerView;
    CKEntity * _entityToShow;
    UILabel * _voteCountLabel;
    UICollectionViewLayoutAttributes * _voteCountViewAttr;
}

@property (nonatomic, retain) UIImageView *ackIconView;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *ackIconViewAttr;
@property (nonatomic) unsigned long long ackVoteCount;
@property (nonatomic) long long acknowledgmentType;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *avatarViewAttr;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) CKEntity *entityToShow;
@property (nonatomic, retain) UILabel *voteCountLabel;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *voteCountViewAttr;

- (void).cxx_destruct;
- (void)_updateAckIconViewDelayTime:(double)arg1;
- (void)_updateAvatarViewDelayTime:(double)arg1;
- (void)_updateVoteCountViewDelayTime:(double)arg1;
- (id)ackIconView;
- (id)ackIconViewAttr;
- (unsigned long long)ackVoteCount;
- (long long)acknowledgmentType;
- (void)animateInAckIconView:(double)arg1;
- (id)avatarView;
- (id)avatarViewAttr;
- (id)containerView;
- (void)dealloc;
- (id)entityToShow;
- (void)insertAvatarDelayTime:(double)arg1;
- (void)setAckIconView:(id)arg1;
- (void)setAckIconViewAttr:(id)arg1;
- (void)setAckVoteCount:(unsigned long long)arg1;
- (void)setAcknowledgmentType:(long long)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setAvatarViewAttr:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setEntityToShow:(id)arg1;
- (void)setVoteCountLabel:(id)arg1;
- (void)setVoteCountViewAttr:(id)arg1;
- (id)voteCountLabel;
- (id)voteCountViewAttr;

@end
