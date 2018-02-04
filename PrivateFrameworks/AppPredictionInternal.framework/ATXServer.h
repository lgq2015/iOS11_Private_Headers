/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {
    NSString * _cacheFileBasePath;
    NSMutableDictionary * _cacheFileDescriptors;
    NSMutableArray * _cacheFilePaths;
    NSXPCListener * _listener;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableArray *cacheFilePaths;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2;
- (bool)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3;
- (id)cacheFilePaths;
- (id)cachePathForConsumerSubtype:(unsigned char)arg1;
- (id)consumerSubTypesToUpdate;
- (void)dealloc;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 reply:(id /* block */)arg4;
- (void)generateNewAppPredictionsWithReply:(id /* block */)arg1;
- (void)getAppPredictorAssetMappingDescriptionWithReply:(id /* block */)arg1;
- (id)init;
- (id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 reply:(id /* block */)arg8;
- (void)updateAppPredictionsWithRefreshRate:(double)arg1 reply:(id /* block */)arg2;

@end
