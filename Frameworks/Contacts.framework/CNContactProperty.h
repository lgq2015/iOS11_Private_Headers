/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    CNContact * _internalContact;
    NSString * _key;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) CNContact *internalContact;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)internalContact;
- (bool)isEqual:(id)arg1;
- (bool)isMultiValueProperty;
- (id)key;
- (id)label;
- (id)labeledValue;
- (id)labeledValueForContact:(id)arg1;
- (int)multiValueIdentifier;
- (id)primitiveValue;
- (void)setIdentifier:(id)arg1;
- (void)setInternalContact:(id)arg1;
- (void)setKey:(id)arg1;
- (id)sourceContact;
- (id)value;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)property;

@end
