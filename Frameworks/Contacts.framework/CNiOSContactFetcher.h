/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSContactFetcher : NSObject {
    void * _addressBook;
    CNContactsEnvironment * _environment;
    CNContactFetchRequest * _fetchRequest;
    id /* block */  _personToContact;
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 error:(id*)arg5;
+ (id /* block */)linkedPeopleComparator;

- (void).cxx_destruct;
- (id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1;
- (void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2;
- (id)_peopleToContactsArray:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3;
- (id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 outCNMatchInfos:(id*)arg4;

@end
