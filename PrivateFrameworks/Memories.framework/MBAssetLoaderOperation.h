/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MBAssetLoaderOperation : NSOperation {
    AVAsset * _asset;
    NSURL * _identifierURL;
    id /* block */  _preCompletionBlock;
    NSArray * _prefetchKeys;
    bool  executing;
    bool  finished;
}

@property (nonatomic, retain) AVAsset *asset;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (nonatomic, retain) NSURL *identifierURL;
@property (nonatomic, copy) id /* block */ preCompletionBlock;
@property (nonatomic, retain) NSArray *prefetchKeys;

- (void).cxx_destruct;
- (id)asset;
- (void)finish;
- (id)identifierURL;
- (id)initWithIdentifierURL:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id /* block */)preCompletionBlock;
- (id)prefetchKeys;
- (void)setAsset:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setIdentifierURL:(id)arg1;
- (void)setPreCompletionBlock:(id /* block */)arg1;
- (void)setPrefetchKeys:(id)arg1;
- (void)start;

@end
