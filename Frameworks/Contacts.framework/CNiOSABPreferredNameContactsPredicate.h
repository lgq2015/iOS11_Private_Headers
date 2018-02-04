/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPreferredNameContactsPredicate : CNPredicate <CNiOSContactPredicate> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
