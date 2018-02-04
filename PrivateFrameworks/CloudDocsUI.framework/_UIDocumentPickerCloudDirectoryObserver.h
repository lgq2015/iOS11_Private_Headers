/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver> {
    bool  _afterInitialUpdate;
    NSURL * _firstURL;
    NSDate * _lastSnapshotDate;
    NSMetadataQuery * _query;
    NSPredicate * _queryPredicate;
    NSObject<OS_dispatch_queue> * _queryQueue;
    NSOperationQueue * _queryWorkerQueue;
    bool  _recursive;
    NSArray * _scopes;
    NSOrderedSet * _staticItems;
}

@property (nonatomic) bool afterInitialUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastSnapshotDate;
@property (nonatomic, retain) NSMetadataQuery *query;
@property (nonatomic, retain) NSPredicate *queryPredicate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic, retain) NSOperationQueue *queryWorkerQueue;
@property (nonatomic, retain) NSArray *scopes;
@property (nonatomic, retain) NSOrderedSet *staticItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initialGatherFinished:(id)arg1;
- (id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id*)arg2;
- (void)_queryUpdated:(id)arg1;
- (void)_updateObservers:(id)arg1;
- (void)_updateQuery;
- (bool)afterInitialUpdate;
- (void)assertOnQueryQueue;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)isVisiblePredicate;
- (id)lastSnapshotDate;
- (bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (id)query;
- (id)queryPredicate;
- (id)queryQueue;
- (id)queryWorkerQueue;
- (id)scopes;
- (void)setAfterInitialUpdate:(bool)arg1;
- (void)setLastSnapshotDate:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryPredicate:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setQueryWorkerQueue:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setStaticItems:(id)arg1;
- (id)staticItems;

@end
