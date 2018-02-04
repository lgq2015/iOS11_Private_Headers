/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationDataStore : NSObject <XBSnapshotManifestStore> {
    NSCountedSet * _cacheableBundleIdentifiers;
    NSMutableDictionary * _cachedStoresByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCompatibilityInfoForBundleIdentifier:(id)arg1;
- (id)_init;
- (id)_loadCompatibilityInfoForBundleIdentifier:(id)arg1;
- (void)_persistCompatibilityInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_storeForBundleIdentifier:(id)arg1;
- (void)beginAccessBlockForBundleIdentifier:(id)arg1;
- (void)clearManifestDataForBundleIdentifier:(id)arg1;
- (void)endAccessBlockForBundleIdentifier:(id)arg1;
- (id)init;
- (id)loadManifestDataForBundleIdentifier:(id)arg1;
- (void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;

@end
