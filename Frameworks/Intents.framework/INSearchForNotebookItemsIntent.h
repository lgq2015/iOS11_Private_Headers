/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly) long long dateSearchType;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly) long long locationSearchType;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *title;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)content;
- (long long)dateSearchType;
- (id)dateTime;
- (id)domain;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8;
- (long long)itemType;
- (id)location;
- (long long)locationSearchType;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDateSearchType:(long long)arg1;
- (void)setDateTime:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setItemType:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSearchType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (long long)status;
- (id)title;
- (id)verb;

@end
