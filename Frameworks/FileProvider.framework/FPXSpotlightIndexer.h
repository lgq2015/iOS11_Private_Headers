/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {
    unsigned long long  _clientState;
    NSObject<OS_dispatch_semaphore> * _clientStateSemaphore;
    NSOperation * _currentOperation;
    FPXDomainContext * _domainContext;
    CSSearchableIndex * _index;
    NSString * _indexName;
    bool  _isCanceled;
    NSData * _lastIndexState;
    NSOperationQueue * _operationQueue;
    NSString * _providerIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    <NSFileProviderEnumerator> * _vendorEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) FPXDomainContext *domainContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSData *lastIndexState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) <NSFileProviderEnumerator> *vendorEnumerator;

- (void).cxx_destruct;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (void)_learnNewIndexState:(id)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)domainContext;
- (void)dropIndexWithCompletionHandler:(id /* block */)arg1;
- (void)dumpStateTo:(id)arg1;
- (id)index;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIndexName:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (id)lastIndexState;
- (id)queue;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)vendorEnumerator;

@end
