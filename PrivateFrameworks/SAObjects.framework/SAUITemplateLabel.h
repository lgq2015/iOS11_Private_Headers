/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic, retain) SAUITemplateAttributedString *text;

+ (id)label;
+ (id)labelWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setText:(id)arg1;
- (id)text;

@end
