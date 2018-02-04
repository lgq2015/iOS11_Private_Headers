/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABGroupsInGroupPredicate : CNPredicate <CNiOSGroupPredicate> {
    NSString * _parentGroupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *parentGroupIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyGroupsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)initWithParentGroupIdentifier:(id)arg1;
- (id)parentGroupIdentifier;

@end
