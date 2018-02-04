/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightItemRecorder : NSObject <CSSearchableIndexObserver, SpotlightReceiver> {
    NSMutableDictionary * _activityPerBundleRateLimit;
    NSObject<OS_dispatch_queue> * _activityRateLimiterQueue;
    NSObject<OS_dispatch_source> * _batchExecutionSource;
    NSObject<OS_dispatch_queue> * _batchExecutionSourceQueue;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying><_DKKnowledgeEventStreamDeleting> * _knowledgeStore;
    NSObject<OS_dispatch_queue> * _knowledgeStoreDeletionQueue;
    NSMutableArray * _pendingOperations;
    NSObject<OS_dispatch_queue> * _pendingOperationsQueue;
    NSObject<OS_os_transaction> * _pendingOperationsTransaction;
    <_CDInteractionRecording><_CDInteractionDeleting> * _recorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_CDInteractionRecording><_CDInteractionDeleting> *recorder;
@property (readonly) Class superclass;

+ (void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3;
+ (id)spotlightItemRecorder;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1;

- (void).cxx_destruct;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addOrUpdateCoreDuetInteractions:(id)arg1 bundleID:(id)arg2;
- (void)addOrUpdateSearchableItems:(id)arg1;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)arg1;
- (void)deleteKnowledgeEventsWithBundleID:(id)arg1;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)enqueueOperation:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2;
- (id)recorder;
- (void)registerSpotlightRecorderWithServiceName:(id)arg1;
- (void)runOperation:(id)arg1;
- (void)setRecorder:(id)arg1;
- (id)supportedContentTypes;
- (id)supportedINIntentClassNames;
- (id)supportedUTIs;

@end
