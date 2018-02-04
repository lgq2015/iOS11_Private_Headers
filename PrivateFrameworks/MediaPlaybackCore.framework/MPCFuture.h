/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCFuture : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableArray * _completionBlocks;
    NSString * _debugLabel;
    NSError * _error;
    NSMutableArray * _failureBlocks;
    bool  _finalized;
    bool  _invalid;
    NSMapTable * _invalidBlocks;
    id  _result;
    NSMutableArray * _successBlocks;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, copy) NSString *debugLabel;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSMutableArray *failureBlocks;
@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (nonatomic, readonly) NSMapTable *invalidBlocks;
@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) NSMutableArray *successBlocks;

- (void).cxx_destruct;
- (void)_onQueue_finalize;
- (id)accessQueue;
- (id)calloutQueue;
- (id)completionBlocks;
- (void)dealloc;
- (id)debugLabel;
- (id)description;
- (id)error;
- (id)failureBlocks;
- (void)finishWithError:(id)arg1;
- (void)finishWithValue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)invalidBlocks;
- (void)invalidate;
- (bool)isFinalized;
- (bool)isInvalid;
- (id)onCompletion:(id /* block */)arg1;
- (id)onFailure:(id /* block */)arg1;
- (id)onInvalid:(id /* block */)arg1;
- (id)onSuccess:(id /* block */)arg1;
- (id)result;
- (void)setDebugLabel:(id)arg1;
- (id)successBlocks;

@end
