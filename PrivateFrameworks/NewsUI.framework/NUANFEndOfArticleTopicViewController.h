/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleTopicViewController : UIViewController <NUANFEndOfArticleTopicCollectionViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    NUANFEndOfArticleTopicDataProvider * _dataProvider;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) NUANFEndOfArticleTopicDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsBasedOnCollectionViewContent;
- (void)endOfArticleTopicCollectionViewCellWasTapped:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)topicForIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
