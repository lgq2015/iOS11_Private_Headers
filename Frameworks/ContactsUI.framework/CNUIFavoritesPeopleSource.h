/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFavoritesPeopleSource : NSObject <CNUIPeopleSource> {
    NSArray * _cachedPeople;
    CNContactStore * _contactStore;
    CNFavorites * _favorites;
}

@property (nonatomic, retain) NSArray *cachedPeople;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNFavorites *favorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)cachedPeople;
- (id)contactStore;
- (id)favorites;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (void)setCachedPeople:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setFavorites:(id)arg1;

@end