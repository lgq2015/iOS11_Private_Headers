/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSocialProfilesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNValueForContact:(id)arg1;
- (bool)abPropertyID:(int*)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id /* block */)dictionaryTransform;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id /* block */)fromDictionaryTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isNonnull;
- (Class)labeledValueClass;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)summarizationKeys;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id /* block */)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (id /* block */)CNLabeledValueFromABSMultiValueTranform;
- (bool)absPropertyID:(int*)arg1;
- (unsigned int)absPropertyType;

@end
