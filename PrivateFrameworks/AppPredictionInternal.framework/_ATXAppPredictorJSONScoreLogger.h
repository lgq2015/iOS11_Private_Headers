/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppPredictorJSONScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {
    unsigned char  _consumerSubType;
    NSObject<OS_dispatch_queue> * _fastQueue;
    NSMutableDictionary * _history;
    NSObject<OS_dispatch_queue> * _slowQueue;
    NSMutableArray * _subscoreHistories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)flush;
- (id)init;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(id)arg1;

@end
