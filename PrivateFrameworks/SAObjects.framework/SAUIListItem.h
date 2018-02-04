/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIListItem : SAAceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *imageType;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelValue;
@property (nonatomic, retain) <SAAceSerializable> *object;
@property (nonatomic, copy) NSString *selectionResponse;
@property (nonatomic, copy) NSString *selectionText;
@property (nonatomic, copy) NSString *speakableSelectionResponse;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)listItem;
+ (id)listItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageType;
- (id)label;
- (id)labelValue;
- (id)object;
- (id)selectionResponse;
- (id)selectionText;
- (void)setCommands:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelValue:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setSelectionResponse:(id)arg1;
- (void)setSelectionText:(id)arg1;
- (void)setSpeakableSelectionResponse:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)speakableSelectionResponse;
- (id)title;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_appInfo;
- (void)afui_setSelectionTextWithDisambiguationList:(id)arg1;

@end
