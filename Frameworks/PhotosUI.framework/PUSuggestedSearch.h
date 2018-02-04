/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSuggestedSearch : NSObject <PUSearchResult> {
    unsigned long long  __approximateCount;
    NSArray * _additionalUUIDs;
    NSString * _albumUUID;
    <PUSuggestedSearchDelegate> * _delegate;
    NSString * _displaySubtitle;
    NSString * _displayTitle;
    bool  _hasPendingChanges;
    NSString * _memoryUUID;
    PSIQuery * _query;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _searchCategories;
    NSString * _searchString;
    PUSiriSearch * _siriSearch;
    unsigned long long  _taskId;
    NSMutableArray * _uncommittedAdditionalUUIDs;
    NSMutableArray * _uncommittedUUIDs;
    NSArray * _uuids;
}

@property (setter=_setApproximateCount:) unsigned long long _approximateCount;
@property (readonly) NSArray *additionalUUIDs;
@property (setter=_setAlbumUUID:, retain) NSString *albumUUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSuggestedSearchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (setter=_setDisplaySubtitle:, copy) NSString *displaySubtitle;
@property (setter=_setDisplayTitle:, copy) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEmpty;
@property (setter=_setMemoryUUID:, retain) NSString *memoryUUID;
@property unsigned long long searchCategories;
@property (setter=_setSearchString:, copy) NSString *searchString;
@property (setter=_setSiriSearch:, retain) PUSiriSearch *siriSearch;
@property (readonly) Class superclass;
@property (readonly) NSArray *uuids;

- (void).cxx_destruct;
- (unsigned long long)_approximateCount;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1 synchronous:(bool)arg2;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (void)_inqMergePendingChanges;
- (void)_inqRestart;
- (unsigned long long)_inqTaskId;
- (bool)_isTargetGroupResult:(id)arg1;
- (void)_mergePendingChanges;
- (void)_setAlbumUUID:(id)arg1;
- (void)_setApproximateCount:(unsigned long long)arg1;
- (void)_setDisplaySubtitle:(id)arg1;
- (void)_setDisplayTitle:(id)arg1;
- (void)_setMemoryUUID:(id)arg1;
- (void)_setSearchString:(id)arg1;
- (void)_setSiriSearch:(id)arg1;
- (id)additionalUUIDs;
- (id)albumUUID;
- (void)cancel;
- (id)delegate;
- (id)displaySubtitle;
- (id)displayTitle;
- (void)fetchRemainingUUIDs:(id /* block */)arg1;
- (void)fetchRemainingUUIDs:(id /* block */)arg1 completionQueue:(id)arg2;
- (bool)hasPendingChanges;
- (id)init;
- (id)initWithDisplayTitle:(id)arg1;
- (id)initWithDisplayTitle:(id)arg1 displaySubtitle:(id)arg2 uuids:(id)arg3;
- (bool)isEmpty;
- (id)memoryUUID;
- (void)restart;
- (unsigned long long)searchCategories;
- (id)searchString;
- (void)setDelegate:(id)arg1;
- (void)setSearchCategories:(unsigned long long)arg1;
- (id)siriSearch;
- (id)uuids;

@end
