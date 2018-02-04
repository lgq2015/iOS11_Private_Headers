/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSTitleCardSection : SAUSCardSection

@property (nonatomic, copy) NSString *title;

+ (id)titleCardSection;
+ (id)titleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;

@end
