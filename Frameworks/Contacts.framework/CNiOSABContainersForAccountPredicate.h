/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContainersForAccountPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _accountIdentifier;
    bool  _includesDisabledContainers;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesDisabledContainers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)initWithAccountIdentifier:(id)arg1 includingDisabledContainers:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end