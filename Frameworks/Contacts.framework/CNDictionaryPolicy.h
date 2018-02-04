/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary * _policyDictionary;
}

- (void).cxx_destruct;
- (id)contactRestrictionsForLabeledProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isContactPropertySupported:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;

@end
