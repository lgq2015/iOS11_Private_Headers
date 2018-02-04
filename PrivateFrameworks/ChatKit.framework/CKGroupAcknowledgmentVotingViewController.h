/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <CKAcknowledgmentVotingViewAnimatorDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    CKAcknowledgmentVotingViewAnimator * _animator;
    CKAggregateAcknowledgmentChatItem * _chatItem;
    UIButton * _collapseButton;
    UICollectionView * _collectionView;
    _CKAcknowledgmentVoteCountView * _currentlyExpandedVoteCountView;
    CKGroupAcknowledgmentVotingLayout * _layout;
    NSArray * _sortedAnimatorModelItems;
    NSArray * _tallies;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) CKAcknowledgmentVotingViewAnimator *animator;
@property (nonatomic, retain) CKAggregateAcknowledgmentChatItem *chatItem;
@property (nonatomic, retain) UIButton *collapseButton;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKGroupAcknowledgmentVotingLayout *layout;
@property (nonatomic, copy) NSArray *sortedAnimatorModelItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tallies;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)arg1;
- (void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2;
- (void)_collapseCollectionView;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1;
- (void)_handleCollapseButton:(id)arg1;
- (void)_layoutCollapseButton;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (void)_setupTallies;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1;
- (id)animator;
- (id)chatItem;
- (id)collapseButton;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentlyExpandedVoteCountView;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withGestureRecognizer:(id)arg2;
- (id)initWithMessagePartChatItem:(id)arg1;
- (id)layout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setChatItem:(id)arg1;
- (void)setCollapseButton:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentlyExpandedVoteCountView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSortedAnimatorModelItems:(id)arg1;
- (void)setTallies:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)sortedAnimatorModelItems;
- (id)tallies;
- (void)tapGestureRecognized:(id)arg1;
- (id)tapGestureRecognizer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
