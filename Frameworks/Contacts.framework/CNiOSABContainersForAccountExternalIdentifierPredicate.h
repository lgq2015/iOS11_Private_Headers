/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _accountExternalIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accountExternalIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountExternalIdentifier;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)initWithAccountExternalIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
