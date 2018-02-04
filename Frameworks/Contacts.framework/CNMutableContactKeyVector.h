/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableContactKeyVector : CNContactKeyVector

+ (id)freezeIfClassIsImmutable:(id)arg1;
+ (id)new;

- (void)addKey:(id)arg1;
- (void)addKeys:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;
- (id)init;
- (id)initWithKeyVector:(id)arg1;
- (void)minusKeyVector:(id)arg1;
- (void)subtractKey:(id)arg1;
- (void)subtractKeys:(id)arg1;
- (void)unionKeyVector:(id)arg1;

@end
