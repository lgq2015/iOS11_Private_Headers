/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic) long long audioRoute;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destinationType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredCallProvider;
@property (readonly) Class superclass;
@property (setter=setTTYType:, nonatomic) long long ttyType;
@property (nonatomic, readonly) bool useSpeaker;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (long long)audioRoute;
- (id)contacts;
- (long long)destinationType;
- (id)domain;
- (id)initWithContacts:(id)arg1;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2;
- (id)parametersByName;
- (long long)preferredCallProvider;
- (void)setAudioRoute:(long long)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setUseSpeaker:(bool)arg1;
- (void)setVerb:(id)arg1;
- (long long)ttyType;
- (bool)useSpeaker;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToPeopleStore;

@end
