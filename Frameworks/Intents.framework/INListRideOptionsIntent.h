/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CLPlacemark *dropOffLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLPlacemark *pickupLocation;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)dropOffLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2;
- (id)parametersByName;
- (id)pickupLocation;
- (void)setDomain:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
