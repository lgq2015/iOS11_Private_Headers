/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABStringMatchContactPredicate : CNPredicate <CNiOSContactPredicate> {
    NSString * _accountIdentifier;
    NSString * _containerIdentifier;
    NSString * _groupIdentifier;
    NSString * _searchString;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
- (id)searchString;

@end
