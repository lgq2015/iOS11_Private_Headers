/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener> {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _cacheDiskQueue;
    IMScheduledUpdater * _evictionUpdater;
    IMDoubleLinkedList * _orderedKeys;
    NSString * _preferredLocalization;
    bool  _test_throwExceptionDuringInflate;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheDiskQueue;
@property (nonatomic, retain) IMScheduledUpdater *evictionUpdater;
@property (nonatomic, retain) IMDoubleLinkedList *orderedKeys;
@property (nonatomic, retain) NSString *preferredLocalization;
@property (nonatomic) bool test_throwExceptionDuringInflate;

+ (id)sharedInstance;
+ (id)test_cachePath;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_evictIfNeeded;
- (void)_inflateCache;
- (void)_invalidateCachedSizeForKeyPassingTest:(id /* block */)arg1;
- (void)_persistCache;
- (id)cache;
- (id)cacheDiskQueue;
- (id)cacheKeyForChatItem:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)cachedSizeForChatItem:(id)arg1 size:(out struct CGSize { double x1; double x2; }*)arg2 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 fittingSize:(struct CGSize { double x1; double x2; })arg4;
- (void)dealloc;
- (id)evictionUpdater;
- (id)init;
- (id)initForTestAndThrowException:(bool)arg1;
- (void)invalidateCachedSizeForChatItem:(id)arg1;
- (void)invalidateCachedSizeForGUIDPrefix:(id)arg1;
- (id)orderedKeys;
- (id)preferredLocalization;
- (void)setCache:(id)arg1;
- (void)setCacheDiskQueue:(id)arg1;
- (void)setCachedSizeForChatItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 fittingSize:(struct CGSize { double x1; double x2; })arg4;
- (void)setEvictionUpdater:(id)arg1;
- (void)setOrderedKeys:(id)arg1;
- (void)setPreferredLocalization:(id)arg1;
- (void)setTest_throwExceptionDuringInflate:(bool)arg1;
- (void)systemApplicationDidSuspend;
- (bool)test_throwExceptionDuringInflate;

@end
