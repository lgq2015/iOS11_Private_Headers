/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFindMyFriendsPeopleSource : NSObject <CNUIPeopleSource> {
    NSArray * _cachedPeople;
    CNContactStore * _contactStore;
    bool  _fetching;
    CNUIFMFFacade * _fmfFacade;
    NSArray * _fmfHandles;
}

@property (nonatomic, retain) NSArray *cachedPeople;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetching;
@property (nonatomic, retain) CNUIFMFFacade *fmfFacade;
@property (nonatomic, retain) NSArray *fmfHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)cachedPeople;
- (id)contactStore;
- (void)fetchFriends;
- (bool)fetching;
- (id)fmfFacade;
- (id)fmfHandles;
- (id /* block */)friendContactFromFriendHandleTransformWithKeysToFetch:(id)arg1;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (void)setCachedPeople:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setFetching:(bool)arg1;
- (void)setFmfFacade:(id)arg1;
- (void)setFmfHandles:(id)arg1;

@end
