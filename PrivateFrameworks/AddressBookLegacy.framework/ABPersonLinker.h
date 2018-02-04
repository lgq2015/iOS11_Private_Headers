/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABPersonLinker : NSObject {
    void * _addressBook;
    NSMutableDictionary * _peopleByFirstName;
    NSMutableDictionary * _peopleByLastName;
    NSMutableDictionary * _peopleByOrganization;
}

+ (bool)isAutoLinkingEnabled;
+ (bool)isLinkDataValidForAddressBook:(void*)arg1;
+ (void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(bool)arg2;

- (void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (void)linkNewlyAddedPerson:(void*)arg1;
- (void)linkRecentlyAddedPeople;
- (bool)linkRecentlyAddedPeopleWithLimit:(long long)arg1;
- (void)makeInitialLinks;
- (void)makeInitialLinksCountingOuterIterations:(unsigned long long*)arg1;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(bool)arg2 countingOuterIterations:(unsigned long long*)arg3 detectedLinkCount:(unsigned long long*)arg4;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2;
- (id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2;
- (void)presortPeople:(id)arg1;
- (void)removeAllLinks;
- (bool)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(bool)arg4;
- (id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(bool)arg2;

@end
