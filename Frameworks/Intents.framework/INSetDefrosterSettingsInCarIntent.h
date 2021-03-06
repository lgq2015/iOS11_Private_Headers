/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defroster;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (long long)defroster;
- (id)domain;
- (id)enable;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2;
- (id)parametersByName;
- (void)setDefroster:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
