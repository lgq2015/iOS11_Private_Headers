/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {
    SKUICategoryArtworkLoader * _artworkLoader;
    SKUICategory * _category;
    bool  _childrenHaveArtwork;
    SKUIClientContext * _clientContext;
    NSURL * _defaultURL;
    <SKUICategoryTableViewControllerDelegate> * _delegate;
    bool  _isRoot;
    NSArray * _metricsLocations;
    long long  _numberOfHiddenRows;
    NSURL * _selectedURL;
}

@property (nonatomic, retain) SKUICategoryArtworkLoader *artworkLoader;
@property (nonatomic, retain) SKUICategory *category;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic) <SKUICategoryTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *metricsLocations;
@property (nonatomic) long long numberOfHiddenRows;
@property (getter=isRoot, nonatomic) bool root;
@property (nonatomic, retain) NSURL *selectedURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_categoryAtIndexPath:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (long long)_metricsLocationPostionForIndexPath:(id)arg1;
- (id)_metricsLocationsToPushIndexPath:(id)arg1;
- (void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3;
- (id)artworkLoader;
- (id)category;
- (void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)defaultURL;
- (id)delegate;
- (bool)isRoot;
- (void)loadView;
- (id)metricsLocations;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (long long)numberOfHiddenRows;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedURL;
- (void)setArtworkLoader:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDefaultURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsLocations:(id)arg1;
- (void)setNumberOfHiddenRows:(long long)arg1;
- (void)setRoot:(bool)arg1;
- (void)setSelectedURL:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
