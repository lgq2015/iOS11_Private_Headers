/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCachingMailboxPredictor : NSObject <MFMailboxPredictor> {
    NSCache * _cache;
    NSMutableDictionary * _cacheKeysByProperty;
    <MFMailboxPredictor> * _predictor;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSMutableDictionary *cacheKeysByProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MFMailboxPredictor> *predictor;
@property (readonly) Class superclass;

- (id)_cacheKeyForMessages:(id)arg1;
- (id)_propertyKeysForMessage:(id)arg1;
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;
- (id)cache;
- (id)cacheKeysByProperty;
- (void)dealloc;
- (id)initWithPredictor:(id)arg1;
- (void)invalidatePredictionsAffectedByMessages:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3;
- (id)predictor;
- (void)removeAllPredictions;
- (void)setCache:(id)arg1;
- (void)setCacheKeysByProperty:(id)arg1;
- (void)setPredictor:(id)arg1;

@end
