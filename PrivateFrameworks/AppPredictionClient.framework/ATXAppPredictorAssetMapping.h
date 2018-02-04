/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary * _consumerSubTypeAssetMappings;
}

+ (id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1;
- (id)getAtxToolDescription;
- (id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)init;

@end
