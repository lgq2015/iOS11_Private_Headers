/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enableCooling;
@property (nonatomic, readonly, copy) NSNumber *enableHeating;
@property (nonatomic, readonly, copy) NSNumber *enableMassage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *level;
@property (nonatomic, readonly) long long relativeLevelSetting;
@property (nonatomic, readonly) long long seat;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)enableCooling;
- (id)enableHeating;
- (id)enableMassage;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6;
- (id)level;
- (id)parametersByName;
- (long long)relativeLevelSetting;
- (long long)seat;
- (void)setDomain:(id)arg1;
- (void)setEnableCooling:(id)arg1;
- (void)setEnableHeating:(id)arg1;
- (void)setEnableMassage:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeLevelSetting:(long long)arg1;
- (void)setSeat:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
