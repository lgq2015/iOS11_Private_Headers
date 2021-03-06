/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIMediaPlayer : IKJSObject <WLKUIMediaPlayerLibraryExport, WLKUIOrderedItemsMapDelegate> {
    NSOperationQueue * _artworkLoadingQueue;
    WLKUIOrderedItemsMap * _orderedItemsMap;
    MPUQueryDataSource * _queryDataSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WLKUIOrderedItemsMap *orderedItemsMap;
@property (nonatomic, retain) MPUQueryDataSource *queryDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataSourceChanged:(id)arg1;
- (void)_dataSourceDidChange;
- (id)_dataSourceForConfigurationOptions:(id)arg1;
- (long long)_dataSourceType;
- (void)_dataSourceWillChange;
- (id)_dateFromConfigurationObject:(id)arg1;
- (id)_getItem:(id)arg1 includeChildren:(bool)arg2 additionalProperties:(id)arg3;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (id)_mediaItemForIdentifier:(id)arg1;
- (void)_mediaLibraryChanged:(id)arg1;
- (id)_numberForString:(id)arg1;
- (void)_onIsUpdateInProgressChangedNotification:(id)arg1;
- (void)_onSyncGenerationChangedNotification:(id)arg1;
- (id)_stringForNumber:(id)arg1;
- (void)dealloc;
- (id)findItemByPersistentIdentifier:(id)arg1 :(id)arg2;
- (id)findItemByStoreIdentifier:(id)arg1 :(id)arg2;
- (void)getImageForItem:(id)arg1 :(id)arg2 :(id)arg3;
- (bool)getIsInitialImport;
- (bool)getIsUpdateInProgress;
- (id)getItem:(id)arg1 :(id)arg2;
- (unsigned long long)getItemCount;
- (id)getItemWithChildren:(id)arg1 :(id)arg2;
- (id)getItems;
- (id)getShowIdentifierForStoreIdentifier:(id)arg1;
- (void)getUpdateProgress:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)itemsMapAddedKeys:(id)arg1 andRemovedKeys:(id)arg2;
- (bool)libraryHasMedia;
- (id)orderedItemsMap;
- (id)queryDataSource;
- (long long)queryHasItemCount:(id)arg1;
- (bool)setFilter:(id)arg1;
- (void)setFilterAsync:(id)arg1 :(id)arg2;
- (void)setOrderedItemsMap:(id)arg1;
- (void)setQueryDataSource:(id)arg1;

@end
