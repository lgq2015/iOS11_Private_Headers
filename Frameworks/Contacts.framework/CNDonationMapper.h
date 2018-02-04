/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNDonationMapper : NSObject <CNDataMapper> {
    CNDonationStore * _donationStore;
    CNContactsEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNDonationStore *donationStore;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)mapperIdentifier;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)donationStore;
- (id)environment;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;

@end
