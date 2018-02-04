/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDisambiguationList : SAAceView <AFDisambiguationAssistancePrivate>

@property (nonatomic, readonly) NSData *af_disambiguationIdentifier;
@property (setter=af_setDisambiguationInfo:, nonatomic, retain) AFDisambiguationInfo *af_disambiguationInfo;
@property (nonatomic) bool autoDisambiguationDisabled;
@property (nonatomic, copy) NSString *disambiguationKey;
@property (nonatomic, retain) SAUIDomainObjectPicker *domainObjectPicker;
@property (nonatomic, copy) NSArray *fallbackCommands;
@property (nonatomic, copy) NSString *groupTitle;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *selectionResponse;
@property (nonatomic, copy) NSString *speakableDelimiter;
@property (nonatomic, copy) NSString *speakableFinalDelimiter;
@property (nonatomic, copy) NSString *speakableSelectionResponse;
@property (nonatomic, copy) NSString *speakableSuffix;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)disambiguationList;
+ (id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2;

- (bool)autoDisambiguationDisabled;
- (id)disambiguationKey;
- (id)domainObjectPicker;
- (id)encodedClassName;
- (id)fallbackCommands;
- (id)groupIdentifier;
- (id)groupTitle;
- (id)items;
- (id)selectionResponse;
- (void)setAutoDisambiguationDisabled:(bool)arg1;
- (void)setDisambiguationKey:(id)arg1;
- (void)setDomainObjectPicker:(id)arg1;
- (void)setFallbackCommands:(id)arg1;
- (void)setGroupTitle:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectionResponse:(id)arg1;
- (void)setSpeakableDelimiter:(id)arg1;
- (void)setSpeakableFinalDelimiter:(id)arg1;
- (void)setSpeakableSelectionResponse:(id)arg1;
- (void)setSpeakableSuffix:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)speakableDelimiter;
- (id)speakableFinalDelimiter;
- (id)speakableSelectionResponse;
- (id)speakableSuffix;
- (id)title;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_assistedSelectionItem;
- (id)af_disambiguationIdentifier;
- (id)af_disambiguationInfo;
- (id)af_indexIdentifierForItem:(id)arg1;
- (id)af_itemForIndexIdentifier:(id)arg1;
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;
- (void)af_setDisambiguationInfo:(id)arg1;

@end
