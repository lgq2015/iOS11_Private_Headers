/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {
    CKDispatchCache * _dispatchCache;
    CKMultiDict * _pendingBlocks;
}

@property (nonatomic, retain) CKDispatchCache *dispatchCache;
@property (nonatomic, retain) CKMultiDict *pendingBlocks;

+ (void)_invalidateStickerPreviewCache;
+ (id)detailsPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)snapshotCache;
+ (id)stickerPreviewCache;
+ (id)transcriptPreviewCache;

- (void).cxx_destruct;
- (void)beginGeneratingForKey:(id)arg1;
- (id)cachedPreviewForKey:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)dispatchCache;
- (void)endGeneratingForKey:(id)arg1;
- (void)enqueueGenerationBlock:(id /* block */)arg1 completion:(id /* block */)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(id /* block */)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;
- (void)enqueueSaveBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)flush;
- (id)init;
- (id)initWithCacheLimit:(unsigned long long)arg1;
- (bool)isGeneratingPreviewForKey:(id)arg1;
- (id)mediaObjectManager;
- (id)notificationCenter;
- (id)pendingBlocks;
- (void)resume;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (void)setDispatchCache:(id)arg1;
- (void)setPendingBlocks:(id)arg1;
- (bool)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (void)systemApplicationDidSuspend;
- (void)transferFinished:(id)arg1;
- (void)transferRemoved:(id)arg1;

@end
