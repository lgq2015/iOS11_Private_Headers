/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserView : UIView <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate> {
    bool  _animating;
    NSTimer * _animationTimer;
    struct CGSize { 
        double width; 
        double height; 
    }  _browserSizeToRestoreFrom;
    NSMutableArray * _cellsToAnimate;
    UICollectionView * _collectionView;
    unsigned long long  _currentlyAnimatingIndex;
    <MSStickerBrowserViewDataSource> * _dataSource;
    <MSStickerBrowserViewDisplayDelegate> * _displayDelegate;
    UICollectionViewFlowLayout * _flowLayout;
    bool  _isRestoringContentOffset;
    MSStickerBrowserViewLayoutSpec * _layoutSpec;
    struct CGPoint { 
        double x; 
        double y; 
    }  _restoredContentOffset;
    NSMutableDictionary * _stickerCache;
    CKDispatchQueue * _stickerCacheQueue;
    long long  _stickerSize;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic) struct CGSize { double x1; double x2; } browserSizeToRestoreFrom;
@property (nonatomic, retain) NSMutableArray *cellsToAnimate;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) unsigned long long currentlyAnimatingIndex;
@property (nonatomic) <MSStickerBrowserViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MSStickerBrowserViewDisplayDelegate> *displayDelegate;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRestoringContentOffset;
@property (nonatomic, retain) MSStickerBrowserViewLayoutSpec *layoutSpec;
@property (nonatomic) struct CGPoint { double x1; double x2; } restoredContentOffset;
@property (nonatomic, readonly) NSDictionary *stateRestorationInfo;
@property (nonatomic, retain) NSMutableDictionary *stickerCache;
@property (nonatomic, retain) CKDispatchQueue *stickerCacheQueue;
@property (nonatomic, readonly) long long stickerSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startAnimating;
- (id)_stickerAtIndexPath:(id)arg1;
- (void)_stopAnimating;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)animateNextCell;
- (id)animationTimer;
- (struct CGSize { double x1; double x2; })browserSizeToRestoreFrom;
- (id)cellsToAnimate;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureStickerView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (unsigned long long)currentlyAnimatingIndex;
- (id)dataSource;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)displayDelegate;
- (id)flowLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stickerSize:(long long)arg2;
- (void)invalidateFlowLayout;
- (bool)isAnimating;
- (bool)isRestoringContentOffset;
- (id)layoutSpec;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)prepareForSnapshotting;
- (void)reloadData;
- (void)restoreFromState:(id)arg1;
- (struct CGPoint { double x1; double x2; })restoredContentOffset;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setBrowserSizeToRestoreFrom:(struct CGSize { double x1; double x2; })arg1;
- (void)setCellsToAnimate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setCurrentlyAnimatingIndex:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setIsRestoringContentOffset:(bool)arg1;
- (void)setLayoutSpec:(id)arg1;
- (void)setRestoredContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStickerCache:(id)arg1;
- (void)setStickerCacheQueue:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)stateRestorationInfo;
- (id)stickerCache;
- (id)stickerCacheQueue;
- (long long)stickerSize;

@end
