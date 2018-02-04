/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetCarLockStatusIntent : INIntent <INSetCarLockStatusIntentExport>

@property (nonatomic, readonly, copy) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *locked;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)carName;
- (id)domain;
- (id)initWithLocked:(id)arg1 carName:(id)arg2;
- (id)locked;
- (id)parametersByName;
- (void)setCarName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLocked:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end