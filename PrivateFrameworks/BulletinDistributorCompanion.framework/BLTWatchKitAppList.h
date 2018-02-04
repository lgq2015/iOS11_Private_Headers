/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList> {
    NSDictionary * _appsByAppBundleID;
    <BLTWatchKitAppListDelegate> * _delegate;
    bool  _loaded;
    bool  _loading;
    NSMutableArray * _loadingCompletionHandlers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTWatchKitAppListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded) bool loaded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)_fetchWatchKitInfoWithForce:(bool)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)fetchWatchKitInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isLoaded;
- (void)setDelegate:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;

@end
