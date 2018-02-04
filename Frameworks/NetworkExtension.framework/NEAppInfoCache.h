/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppInfoCache : NSObject {
    NSMutableDictionary * _cachedSourceAppInfo;
    id /* block */  _customLookupHandler;
}

@property (retain) NSMutableDictionary *cachedSourceAppInfo;
@property (nonatomic, copy) id /* block */ customLookupHandler;

+ (id)sharedAppInfoCache;

- (void).cxx_destruct;
- (void)addAppInfoToCache:(id)arg1;
- (bool)appInfo:(id)arg1 mismatchedWithUUID:(id)arg2 andBundleID:(id)arg3;
- (bool)appInfo:(id)arg1 shouldOverwriteAppInfo:(id)arg2;
- (void)appInfoForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)bundleID:(id)arg1 matchesBundleID:(id)arg2;
- (id)bundleIDWithoutTeamID:(id)arg1;
- (id)cachedSourceAppInfo;
- (id /* block */)customLookupHandler;
- (id)init;
- (id)lookupAppInfoForPid:(int)arg1 bundleID:(id)arg2;
- (void)performCustomLookupIfNecessaryForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)setAppInfo:(id)arg1 forUUID:(id)arg2;
- (void)setCachedSourceAppInfo:(id)arg1;
- (void)setCustomLookupHandler:(id /* block */)arg1;

@end
