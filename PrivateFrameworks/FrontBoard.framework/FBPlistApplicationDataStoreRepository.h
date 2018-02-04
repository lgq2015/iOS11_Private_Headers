/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    int  _autoFlushDuration;
    unsigned long long  _batchCount;
    <FBApplicationDataStoreRepositoryDelegate> * _delegate;
    bool  _dirty;
    NSMutableDictionary * _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSURL * _storeURL;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBApplicationDataStoreRepositoryReadingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_isEligibleForSaving:(id)arg1;
- (void)_load;
- (void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1;
- (void)_stateQueue_markDirty;
- (id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2;
- (id)_stateQueue_objectsForKeys:(id)arg1;
- (void)_stateQueue_removeStoreForIdentifier:(id)arg1;
- (id)_stateQueue_storeForIdentifier:(id)arg1;
- (void)_writeQueue_flushSynchronously;
- (id)applicationIdentifiersWithState;
- (void)beginBatchedUpdate;
- (void)close;
- (bool)containsKey:(id)arg1 forApplication:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endBatchedUpdate;
- (void)flushSynchronously;
- (id)initWithStorePath:(id)arg1;
- (bool)isDirty;
- (id)keysForApplication:(id)arg1;
- (id)location;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id /* block */)arg3;
- (void)objectForKeys:(id)arg1 forAllApplicationsWithResult:(id /* block */)arg2;
- (void)removeAllObjectsForApplication:(id)arg1;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;

@end
