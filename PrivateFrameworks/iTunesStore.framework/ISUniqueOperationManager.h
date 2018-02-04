/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
    ISUniqueOperationContext * _activeContext;
    NSMutableArray * _contexts;
    NSLock * _lock;
    NSMutableDictionary * _lockPool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)_activeContext;
- (id)_contextForOperation:(id)arg1;
- (void)checkInOperation:(id)arg1;
- (void)checkOutOperation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)lockWithIdentifier:(id)arg1;
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;
- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;

@end
