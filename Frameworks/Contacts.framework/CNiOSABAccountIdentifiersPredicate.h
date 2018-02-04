/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABAccountIdentifiersPredicate : CNPredicate <CNiOSAccountPredicate> {
    NSArray * _identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyAccountsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
