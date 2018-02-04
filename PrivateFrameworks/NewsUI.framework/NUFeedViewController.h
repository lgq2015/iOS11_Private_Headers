/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedViewController : UIViewController <UICollectionViewDataSource> {
    UICollectionView * _collectionView;
    <NUFeedDataProvider> * _feedDataProvider;
    <NUFeedTriggerProvider> * _feedTriggerProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _laidOutBounds;
    bool  _viewHasAppearedOnce;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUFeedDataProvider> *feedDataProvider;
@property (nonatomic, readonly) <NUFeedTriggerProvider> *feedTriggerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } laidOutBounds;
@property (readonly) Class superclass;
@property (nonatomic) bool viewHasAppearedOnce;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)feedDataProvider;
- (id)feedTriggerProvider;
- (id)initWithFeedDataProvider:(id)arg1 feedTriggerProvider:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })laidOutBounds;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setLaidOutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewHasAppearedOnce:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewHasAppearedOnce;
- (void)viewWillAppear:(bool)arg1;

@end