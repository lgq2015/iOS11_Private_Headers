/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPermissivePolicy : CNPolicy

+ (id)sharedPermissivePolicy;

- (bool)isContactPropertySupported:(id)arg1;
- (bool)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (bool)shouldAddContact:(id)arg1;
- (bool)shouldRemoveContact:(id)arg1;
- (bool)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (id)unsupportedKeyPathsForContactProperty:(id)arg1;

@end
