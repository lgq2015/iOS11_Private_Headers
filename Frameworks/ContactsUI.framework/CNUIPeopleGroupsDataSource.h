/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleGroupsDataSource : NSObject {
    CNContactStore * _contactStore;
    <CNUIPeopleGroupsDataSourceDelegate> * _delegate;
    CNUIContactsEnvironment * _environment;
    NSArray * _groups;
    NSArray * _multipleGroupsPeopleSources;
    NSArray * _singleGroupPeopleSources;
    NSDictionary * _sourcesByKind;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) <CNUIPeopleGroupsDataSourceDelegate> *delegate;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic, retain) NSArray *multipleGroupsPeopleSources;
@property (nonatomic, retain) NSArray *singleGroupPeopleSources;
@property (nonatomic, retain) NSDictionary *sourcesByKind;

- (void).cxx_destruct;
- (id)buildGroupList;
- (id)contactStore;
- (void)createSources;
- (void)dealloc;
- (id)delegate;
- (id)environment;
- (id)groupAtIndexPath:(id)arg1;
- (id)groups;
- (id)init;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (bool)isSyntheticGroup:(id)arg1;
- (id)multipleGroupsPeopleSources;
- (unsigned long long)numberOfGroupsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)peopleInGroup:(id)arg1 withKeysToFetch:(id)arg2;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setMultipleGroupsPeopleSources:(id)arg1;
- (void)setSingleGroupPeopleSources:(id)arg1;
- (void)setSourcesByKind:(id)arg1;
- (id)singleGroupPeopleSources;
- (void)sourceDidChange:(id)arg1;
- (id)sourcesByKind;

@end
