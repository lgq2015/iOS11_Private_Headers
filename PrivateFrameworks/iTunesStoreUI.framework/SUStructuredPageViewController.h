/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStructuredPageViewController : SUItemTableViewController <ISURLOperationDelegate, SUTermsAndConditionsViewDelegate> {
    Class  _dataSourceClass;
    UILabel * _noItemsLabel;
    SUStructuredPage * _structuredPage;
}

@property (nonatomic, retain) Class dataSourceClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, retain) SUStructuredPage *structuredPage;
@property (readonly) Class superclass;

- (bool)_gotoURLForItem:(id)arg1 withURLIndex:(long long)arg2;
- (bool)_handleLoadMoreForIndexPath:(id)arg1;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_loadMoreWithURL:(id)arg1;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (bool)canSelectRowAtIndexPath:(id)arg1;
- (Class)dataSourceClass;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (bool)hasDisplayableContent;
- (id)init;
- (bool)loadMoreWithURL:(id)arg1;
- (id)newDataSource;
- (id)newNoItemsOverlayLabel;
- (id)newTermsAndConditionsFooter;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadData;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setDataSourceClass:(Class)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)setStructuredPage:(id)arg1;
- (id)storePageProtocol;
- (id)structuredPage;
- (id)viewControllerForPresentingAccountAlertControllerFromTermsAndConditionsView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
