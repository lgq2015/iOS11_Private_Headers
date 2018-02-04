/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSString * _emailAddress;
    bool  _returnsMultipleResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool returnsMultipleResults;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)returnsMultipleResults;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end
