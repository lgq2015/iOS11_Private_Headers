/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXClient : NSObject {
    NSString * _cacheBasePath;
    int  _cacheFileDescriptor;
    unsigned long long  _consumerType;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)clientForConsumerType:(unsigned long long)arg1;
+ (id)clientForConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2;
+ (id)clientForConsumerType:(unsigned long long)arg1 cachePath:(const char *)arg2;

- (void).cxx_destruct;
- (id)_readCacheFileForConsumerSubtype:(unsigned char)arg1;
- (id)appPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (id)appPredictionsWithLimit:(int)arg1;
- (void)dealloc;
- (bool)forceCacheUpdateForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3;
- (id)getAppPredictorAssetMappingDescription;
- (id)init;
- (id)initWithConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2;
- (void)logUserFeedback:(id)arg1 aprResponse:(id)arg2 consumerSubType:(unsigned char)arg3 engagementType:(unsigned long long)arg4 bundleIdentifier:(id)arg5 bundleIdsShown:(id)arg6;
- (void)logUserFeedback:(id)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 bundleIdsShown:(id)arg5;
- (id)xpcConnection;

@end
