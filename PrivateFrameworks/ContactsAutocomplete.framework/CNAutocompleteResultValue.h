/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteResultValue : NSObject {
    NSString * _address;
    long long  _addressType;
    NSString * _identifier;
    NSString * _instantMessageAddressService;
    NSString * _label;
    NSString * _stringForHashingMemo;
}

@property (copy) NSString *address;
@property long long addressType;
@property (copy) NSString *identifier;
@property (copy) NSString *instantMessageAddressService;
@property (copy) NSString *label;
@property (nonatomic, copy) NSString *stringForHashingMemo;

+ (id)normalizedAddressForValue:(id)arg1;
+ (id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2;
+ (id)stringForHashingValue:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (bool)addressExactlyMatchesSearchTerm:(id)arg1;
- (long long)addressType;
- (id)addressTypeDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)instantMessageAddressService;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setAddress:(id)arg1;
- (void)setAddressType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstantMessageAddressService:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setStringForHashingMemo:(id)arg1;
- (id)stringForHashing;
- (id)stringForHashingMemo;
- (id)stringForSorting;

@end
