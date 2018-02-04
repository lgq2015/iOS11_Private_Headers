/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic, readonly) unsigned long long callCapabilities;
@property (nonatomic, readonly) long long callType;
@property (nonatomic, readonly) unsigned long long callTypes;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic, readonly, copy) INPerson *recipient;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *unseen;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (unsigned long long)callCapabilities;
- (long long)callType;
- (unsigned long long)callTypes;
- (id)dateCreated;
- (id)domain;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5;
- (id)parametersByName;
- (long long)preferredCallProvider;
- (id)recipient;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallTypes:(unsigned long long)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setRecipient:(id)arg1;
- (void)setUnseen:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)unseen;
- (id)verb;

@end
