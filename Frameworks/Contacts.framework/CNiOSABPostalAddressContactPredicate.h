/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPostalAddressContactPredicate : CNPredicate <CNiOSContactPredicate> {
    CNPostalAddress * _postalAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CNPostalAddress *postalAddress;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (id)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 nserror:(id*)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)postalAddress;
- (void)setPostalAddress:(id)arg1;

@end
