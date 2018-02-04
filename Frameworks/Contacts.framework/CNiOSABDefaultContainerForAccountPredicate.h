/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABDefaultContainerForAccountPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (bool)includesDisabledContainers;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
