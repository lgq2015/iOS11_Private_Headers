/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCachePurger : NSObject {
    NSArray * _oldCacheDirs;
    bool  _purged;
}

@property (nonatomic, readonly) NSArray *oldCacheDirs;
@property (nonatomic) bool purged;

+ (id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4;

- (void).cxx_destruct;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4;
- (id)oldCacheDirs;
- (void)purgeOldCacheDirectories;
- (bool)purged;
- (void)setPurged:(bool)arg1;

@end
