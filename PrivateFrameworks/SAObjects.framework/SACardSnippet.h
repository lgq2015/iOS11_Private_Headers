/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACardSnippet : SAUISnippet

@property (nonatomic, copy) NSData *cardData;
@property (nonatomic, copy) NSArray *contextItems;
@property (nonatomic, copy) NSArray *referencedCommands;
@property (nonatomic, copy) NSArray *referencedSnippets;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)cardData;
- (id)contextItems;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)referencedCommands;
- (id)referencedSnippets;
- (void)setCardData:(id)arg1;
- (void)setContextItems:(id)arg1;
- (void)setReferencedCommands:(id)arg1;
- (void)setReferencedSnippets:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriui_card;
- (id)siriui_eventInfo;

@end
