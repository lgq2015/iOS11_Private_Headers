/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKURLBagCache : NSObject {
    ISURLBag * _bag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bagOperationLock;
    NSString * _cachePath;
    id  _isURLBagDidLoadToken;
    ISLoadURLBagOperation * _pendingBagOperation;
    NSObject<OS_dispatch_queue> * _updateBagQueue;
}

@property (readonly) ISURLBag *bag;
@property (nonatomic, readonly) NSString *cachePath;
@property (nonatomic) ISLoadURLBagOperation *pendingBagOperation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *updateBagQueue;

+ (id)URLBagContext;
+ (id)_cachedBagFromCachePath:(id*)arg1;
+ (id)sharedInMemoryBagCache;

- (void).cxx_destruct;
- (id)_initWithCachePath:(id)arg1 cachedBag:(id)arg2;
- (void)_persistURLBag;
- (void)_updateWithBag:(id)arg1 invalidate:(bool)arg2;
- (id)bag;
- (id)cachePath;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithCachePath:(id)arg1;
- (id)pendingBagOperation;
- (void)setPendingBagOperation:(id)arg1;
- (id)updateBagQueue;
- (void)updateWithInvalidation:(bool)arg1;

@end
