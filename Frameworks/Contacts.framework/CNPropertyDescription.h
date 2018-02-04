/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPropertyDescription : NSObject <NSCopying, NSSecureCoding> {
    bool  _isNonnull;
    NSString * _key;
    SEL  _readSelector;
    id /* block */  _valueForKeyTransform;
    SEL  _writeSelector;
}

@property (nonatomic, readonly) NSArray *equivalentLabelSets;
@property (nonatomic, readonly) bool isMultiValue;
@property (nonatomic, readonly) bool isNonnull;
@property (nonatomic, readonly) bool isSingleValue;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) id nilValue;
@property (nonatomic, readonly) SEL readSelector;
@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, readonly, copy) id /* block */ valueForKeyTransform;
@property (nonatomic, readonly) SEL writeSelector;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)ABValueForABPerson:(void*)arg1;
- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNMutableValueForABMultivalue;
- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)abPropertyID:(int*)arg1;
- (bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;
- (void)assertValueType:(id)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)copyFromABPerson:(void*)arg1 toContact:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalentLabelSets;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3;
- (bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (bool)isMultiValue;
- (bool)isNonnull;
- (bool)isSingleValue;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (bool)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2;
- (bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;
- (bool)isWritable;
- (id)key;
- (id)nilValue;
- (SEL)readSelector;
- (bool)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(struct __CFError {}**)arg3;
- (bool)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)stringForIndexingForContact:(id)arg1;
- (bool)supportsABLazyLoading;
- (id)unifiableLabelsForLabel:(id)arg1;
- (Class)valueClass;
- (id /* block */)valueForKeyTransform;
- (id)valueWithResetIdentifiers:(id)arg1;
- (SEL)writeSelector;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (const void*)ABSValueFromCNValue:(id)arg1;
- (id)CNValueFromABSValue:(void*)arg1;
- (bool)absPropertyID:(int*)arg1;
- (unsigned int)absPropertyType;
- (bool)isValidABSValue:(void*)arg1 error:(struct __CFError {}**)arg2;

@end
