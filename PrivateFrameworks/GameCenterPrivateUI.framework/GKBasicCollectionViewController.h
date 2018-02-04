/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBasicCollectionViewController : GKCollectionViewController {
    GKCollectionViewDataSource * _initialDataSource;
    NSArray * _metricsForSections;
    id  _target;
}

@property (nonatomic, retain) GKCollectionViewDataSource *initialDataSource;
@property (nonatomic, retain) NSArray *metricsForSections;
@property (nonatomic, retain) id target;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 title:(id)arg2;
- (id)initialDataSource;
- (id)metricsForSections;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDataSource:(id)arg1;
- (void)setInitialDataSource:(id)arg1;
- (void)setMetricsForSections:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
