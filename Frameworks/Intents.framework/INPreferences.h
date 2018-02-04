/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPreferences : NSObject {
    _INVocabularyConnection * _assistantdConnection;
    NSString * _cachedSiriLanguageCode;
}

@property (setter=_setCachedSiriLanguageCode:, copy) NSString *_cachedSiriLanguageCode;

+ (void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestSiriAuthorization:(id /* block */)arg1;
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;
+ (id)siriLanguageCode;

- (void).cxx_destruct;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)_cachedSiriLanguageCode;
- (id)_init;
- (void)_setCachedSiriLanguageCode:(id)arg1;
- (long long)_siriAuthorizationStatus;
- (id)_siriLanguageCode;
- (void)_updateWithExtensionContext:(id)arg1;
- (void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(id /* block */)arg2;
- (bool)_weAreRunningAsAnExtension;
- (void)assertThisProcessHasSiriEntitlement;
- (id)init;
- (void)requestSiriAuthorization:(id /* block */)arg1;

@end
