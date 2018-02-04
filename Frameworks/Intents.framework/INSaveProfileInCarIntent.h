/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profileLabel;
@property (nonatomic, readonly, copy) NSString *profileName;
@property (nonatomic, readonly, copy) NSNumber *profileNumber;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2;
- (id)parametersByName;
- (id)profileLabel;
- (id)profileName;
- (id)profileNumber;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProfileNumber:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
