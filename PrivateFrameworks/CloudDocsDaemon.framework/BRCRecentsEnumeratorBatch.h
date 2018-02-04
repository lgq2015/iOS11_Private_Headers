/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRecentsEnumeratorBatch : NSObject {
    NSMutableOrderedSet * _deletedItemIDs;
    <NSFileProviderEnumerationObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _rank;
    NSMutableOrderedSet * _toIndexItems;
}

@property (nonatomic) unsigned long long rank;

- (void).cxx_destruct;
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;
- (void)addIndexOfItem:(id)arg1;
- (unsigned long long)batchCount;
- (id)description;
- (id)init;
- (void)listItems:(id /* block */)arg1;
- (unsigned long long)rank;
- (void)setRank:(unsigned long long)arg1;

@end
