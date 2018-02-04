/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate> {
    bool  _includesDisabledContainers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesDisabledContainers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisabledContainersIncluded:(bool)arg1;
- (id)initWithPredicate:(id)arg1;

@end
