/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXPhoneWatchBundleIdCache : NSObject {
    NSUserDefaults * _appPredictionDefaults;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    LSApplicationProxy * _mockLSApplicationProxy;
    NSMutableDictionary * _phoneToWatchCache;
    NSMutableDictionary * _watchToPhoneCache;
}

@property (nonatomic, retain) LSApplicationProxy *mockLSApplicationProxy;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_saveCacheToUserDefaults;
- (void)_updatePhoneToWatchCache;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (id)mockLSApplicationProxy;
- (id)phoneBundleIdForWatchBundleId:(id)arg1;
- (void)setMockLSApplicationProxy:(id)arg1;
- (void)updateMappings;
- (id)watchBundleIdForPhoneBundleId:(id)arg1;

@end
