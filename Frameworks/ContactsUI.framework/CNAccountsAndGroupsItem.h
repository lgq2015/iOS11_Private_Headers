/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsItem : NSObject {
    bool  _bypassIfUnique;
    NSArray * _childItems;
    long long  _containerType;
    NSString * _identifier;
    NSString * _name;
    id /* block */  _nameProvider;
    CNAccountsAndGroupsItem * _parentItem;
    bool  _selected;
    bool  _soloSelect;
    long long  _type;
}

@property (nonatomic) bool bypassIfUnique;
@property (nonatomic, retain) NSArray *childItems;
@property (nonatomic) long long containerType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly, copy) id /* block */ nameProvider;
@property (nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool soloSelect;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_setSelected:(bool)arg1;
- (id)arrayForDisplay:(bool)arg1;
- (bool)bypassIfUnique;
- (id)childItems;
- (long long)containerType;
- (id)identifier;
- (id)initWithType:(long long)arg1 nameProvider:(id /* block */)arg2;
- (bool)isSelected;
- (long long)localizedCompare:(id)arg1;
- (id)name;
- (id /* block */)nameProvider;
- (id)parentItem;
- (void)setBypassIfUnique:(bool)arg1;
- (void)setChildItems:(id)arg1;
- (void)setContainerType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentItem:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSoloSelect:(bool)arg1;
- (bool)soloSelect;
- (long long)type;

@end
