/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic, copy) NSString *alignment;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSArray *labelComponents;
@property (nonatomic) bool showsDisclosureIndicator;

+ (id)textSnippetTemplate;
+ (id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)detailText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)labelComponents;
- (void)setAlignment:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setLabelComponents:(id)arg1;
- (void)setShowsDisclosureIndicator:(bool)arg1;
- (bool)showsDisclosureIndicator;

@end
