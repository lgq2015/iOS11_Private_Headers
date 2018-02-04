/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQueryPredicate : NSObject {
    id /* block */  _bindBlock;
    NSString * _query;
}

@property (nonatomic, copy) id /* block */ bindBlock;
@property (nonatomic, retain) NSString *query;

+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sortOrder:(int)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void*)arg2;
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(bool)arg2;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;

- (id /* block */)bindBlock;
- (void)dealloc;
- (id)query;
- (void)setBindBlock:(id /* block */)arg1;
- (void)setQuery:(id)arg1;

@end
