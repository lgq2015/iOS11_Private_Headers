/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemManagerBatchedDelegateAdapter : NSObject {
    NSMutableSet * _batchedItemProviderInvalidationReasons;
    NSMutableSet * _batchedItemsToUpdate;
    SEL  _batchedSenderSelector;
    NAFuture * _finishExecutingBatchFuture;
    HFItemManager * _itemManager;
    <HFCharacteristicReadPolicy> * _readPolicy;
    NAFuture * _startExecutingBatchFuture;
    NSMutableSet * _uncommittedBatchingReasons;
}

@property (nonatomic, retain) NSMutableSet *batchedItemProviderInvalidationReasons;
@property (nonatomic, retain) NSMutableSet *batchedItemsToUpdate;
@property (nonatomic) SEL batchedSenderSelector;
@property (nonatomic, retain) NAFuture *finishExecutingBatchFuture;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic, retain) <HFCharacteristicReadPolicy> *readPolicy;
@property (nonatomic, retain) NAFuture *startExecutingBatchFuture;
@property (nonatomic, retain) NSMutableSet *uncommittedBatchingReasons;

- (void).cxx_destruct;
- (void)_executeBatch;
- (id)_itemProvidersToReloadForInvalidationReasons:(id)arg1;
- (void)_reset;
- (id)batchedItemProviderInvalidationReasons;
- (id)batchedItemsToUpdate;
- (SEL)batchedSenderSelector;
- (void)beginBatchWithReason:(id)arg1;
- (id)commitBatchWithReason:(id)arg1 senderSelector:(SEL)arg2;
- (id)finishExecutingBatchFuture;
- (id)initWithItemManager:(id)arg1 readPolicy:(id)arg2;
- (id)itemManager;
- (id)readPolicy;
- (id)requestUpdateForItems:(id)arg1 itemProviderInvalidationReasons:(id)arg2 modifiedHome:(id)arg3 senderSelector:(SEL)arg4;
- (void)setBatchedItemProviderInvalidationReasons:(id)arg1;
- (void)setBatchedItemsToUpdate:(id)arg1;
- (void)setBatchedSenderSelector:(SEL)arg1;
- (void)setFinishExecutingBatchFuture:(id)arg1;
- (void)setReadPolicy:(id)arg1;
- (void)setStartExecutingBatchFuture:(id)arg1;
- (void)setUncommittedBatchingReasons:(id)arg1;
- (id)startExecutingBatchFuture;
- (id)uncommittedBatchingReasons;

@end
