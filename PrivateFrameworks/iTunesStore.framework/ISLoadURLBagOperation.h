/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    SSURLBagContext * _context;
    ISURLBag * _outputBag;
}

@property (readonly) ISURLBag *URLBag;
@property (readonly) SSURLBagContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;

+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)storeFrontHeaderSuffix;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)URLBag;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_analyzeBagForActiveSystemApps:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (bool)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)context;
- (id)init;
- (id)initWithBagContext:(id)arg1;
- (bool)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
- (id)uniqueKey;

@end
