/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerLibraryViewController : UITableViewController <MusicClientContextConsuming, MusicMediaPickerSearchDelegate> {
    NSArray * _allLibraryCategoriesConfigurations;
    MusicClientContext * _clientContext;
    bool  _invokedForPlaylistEditing;
    bool  _omitsGeniusPlaylists;
    bool  _picksSingleCollection;
    bool  _showsOnlyStoreItems;
    MPMediaPredicate * _storeItemsMediaLibraryPredicate;
    NSArray * _usedDataSources;
    NSArray * _usedLibraryCategoriesConfigurations;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvokedForPlaylistEditing, nonatomic) bool invokedForPlaylistEditing;
@property (nonatomic) bool omitsGeniusPlaylists;
@property (nonatomic) bool picksSingleCollection;
@property (nonatomic) bool showsOnlyStoreItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataSourceDidInvalidate:(id)arg1;
- (void)_filterAvailableCategoryConfigurations;
- (void)_loadCategoryConfigurations;
- (void)_reloadLibraryCategories;
- (id)clientContext;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isInvokedForPlaylistEditing;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)omitsGeniusPlaylists;
- (bool)picksSingleCollection;
- (void)setClientContext:(id)arg1;
- (void)setInvokedForPlaylistEditing:(bool)arg1;
- (void)setOmitsGeniusPlaylists:(bool)arg1;
- (void)setPicksSingleCollection:(bool)arg1;
- (void)setShowsOnlyStoreItems:(bool)arg1;
- (bool)showsOnlyStoreItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
