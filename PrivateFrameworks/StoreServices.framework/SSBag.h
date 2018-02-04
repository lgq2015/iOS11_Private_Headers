/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBag : NSObject <ISStoreURLOperationDelegate> {
    NSDictionary * _backingDictionary;
    NSObject<OS_dispatch_queue> * _backingDictionaryAccessQueue;
    SSUniqueExecutionQueue * _loadBagQueue;
    NSString * _logKey;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    ISOperationQueue * _operationQueue;
    SSBagProfileConfig * _profileConfig;
}

@property (nonatomic, retain) NSDictionary *backingDictionary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backingDictionaryAccessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SSUniqueExecutionQueue *loadBagQueue;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationsQueue;
@property (nonatomic, retain) ISOperationQueue *operationQueue;
@property (nonatomic, readonly) SSBagProfileConfig *profileConfig;
@property (readonly) Class superclass;

+ (id)_OSString;
+ (id)_OSVersionString;
+ (id)_URLBuildIdentifier;
+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (void)_assertIfProfileConfigIsMisconfigured:(id)arg1;
+ (bool)_backingDictionaryIsExpired:(id)arg1;
+ (id)_bagCache;
+ (id)_bagCacheAccessQueue;
+ (id)_callerVersionString;
+ (id)_cookieForName:(id)arg1;
+ (id)_cookiesForNames:(id)arg1;
+ (id)_debugBackingDictionaries;
+ (id)_debugBackingDictionariesAccessQueue;
+ (id)_defaultURLCookieNames;
+ (bool)_deviceIsAppleTV;
+ (bool)_deviceIsAppleWatch;
+ (bool)_deviceIsiPad;
+ (bool)_deviceIsiPhone;
+ (bool)_deviceIsiPod;
+ (bool)_isBackingDictionary:(id)arg1 equalToBackingDictionary:(id)arg2;
+ (id)_overriddenURLCookieNames;
+ (id)_processLoadBagOperation:(id)arg1 error:(id*)arg2;
+ (id)_requestStorefrontFromURLResponse:(id)arg1;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (bool)_shouldReloadBagForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (bool)_shouldReloadBagForSetStorefront:(id)arg1 bagOutput:(id)arg2;
+ (id)_storefrontFromURLResponse:(id)arg1 bagOutput:(id)arg2;
+ (id)_storefrontSuffixFromBagOutput:(id)arg1;
+ (void)_updateStorefrontSuffixIfNecessaryWithBagOutput:(id)arg1 logKey:(id)arg2;
+ (bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)bagWithProfileConfig:(id)arg1;
+ (void)removeAllDebugBackingDictionaries;
+ (void)resetCachesForProfileConfig:(id)arg1;
+ (void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2;

- (void).cxx_destruct;
- (id)URLCache;
- (id)URLCacheID;
- (id)URLForKey:(id)arg1 error:(id*)arg2;
- (void)URLForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)URLPromiseForKey:(id)arg1;
- (id)_URLWithCookieNames:(id)arg1;
- (void)_assertIfKey:(id)arg1 doesNotReturnValueType:(unsigned long long)arg2;
- (void)_assertIfKeyWasNotRegistered:(id)arg1;
- (id)_createLoadBagURLOperationWithCookieNames:(id)arg1 timeout:(double)arg2;
- (void)_deviceStorefrontChanged:(id)arg1;
- (id)_initWithProfileConfig:(id)arg1;
- (id)_initWithProfileConfig:(id)arg1 logKey:(id)arg2;
- (bool)_isExpired;
- (id)_loadBagIfNeeded;
- (id)_loadBagWithAttempt:(unsigned long long)arg1 error:(id*)arg2;
- (void)_valueForKey:(id)arg1 ofType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)arrayForKey:(id)arg1 error:(id*)arg2;
- (void)arrayForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)arrayPromiseForKey:(id)arg1;
- (id)backingDictionary;
- (id)backingDictionaryAccessQueue;
- (id)boolForKey:(id)arg1 error:(id*)arg2;
- (void)boolForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)boolPromiseForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryForKey:(id)arg1 error:(id*)arg2;
- (void)dictionaryForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)dictionaryPromiseForKey:(id)arg1;
- (id)doubleForKey:(id)arg1 error:(id*)arg2;
- (void)doubleForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)doublePromiseForKey:(id)arg1;
- (id)integerForKey:(id)arg1 error:(id*)arg2;
- (void)integerForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)integerPromiseForKey:(id)arg1;
- (id)loadBagQueue;
- (id)logKey;
- (id)notificationsQueue;
- (id)operationQueue;
- (id)profileConfig;
- (void)setBackingDictionary:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (void)stringForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)stringPromiseForKey:(id)arg1;

@end
