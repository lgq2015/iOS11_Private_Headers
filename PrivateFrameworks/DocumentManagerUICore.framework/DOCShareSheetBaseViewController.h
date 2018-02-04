/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCShareSheetBaseViewController : UIViewController <DOCShareFPItemLoaderDelegate, FPItemCollectionDelegate, UIShareUIAccessoryPresenting> {
    DOCFileProviderMonitor * _fileProviderMonitor;
    DOCShareHeaderView * _header;
    <UIShareUIAccessoryHosting> * _host;
    NSDictionary * _itemCollections;
    <DOCShareFPItemLoader> * _itemLoader;
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOCFileProviderMonitor *fileProviderMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOCShareHeaderView *header;
@property (nonatomic, readonly) <UIShareUIAccessoryHosting> *host;
@property (nonatomic, retain) NSDictionary *itemCollections;
@property (nonatomic, readonly) <DOCShareFPItemLoader> *itemLoader;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, readonly) bool shouldShowAddTagButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calculatePreferredSize;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (id)combineProviderNames:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dealloc;
- (void)didFailToLoadItems;
- (void)didLoadItems:(id)arg1;
- (id)fileProviderMonitor;
- (id)header;
- (id)host;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2 fileProviderMonitor:(id)arg3;
- (id)itemCollections;
- (id)itemLoader;
- (id)items;
- (id)overrideTraitCollection;
- (void)setHeader:(id)arg1;
- (void)setItemCollections:(id)arg1;
- (void)setItems:(id)arg1;
- (bool)shouldShowAddTagButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeader;

@end
