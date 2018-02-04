/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {
    NSMutableArray * _buffer;
    long long  _bufferedState;
    id /* block */  _fetchNextBatch;
}

@property (nonatomic, copy) id /* block */ fetchNextBatch;

- (void).cxx_destruct;
- (long long)_sendBufferedChanges:(id /* block */)arg1;
- (id /* block */)fetchNextBatch;
- (id)init;
- (bool)isResetSync;
- (void)setFetchNextBatch:(id /* block */)arg1;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;

@end
