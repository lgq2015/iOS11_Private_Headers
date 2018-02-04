/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCardLinkedCardsGroup : CNCardGroup {
    NSArray * _linkedContacts;
}

@property (nonatomic, retain) NSArray *linkedContacts;

- (void).cxx_destruct;
- (id)displayItems;
- (id)editingItems;
- (id)linkedContacts;
- (void)setLinkedContacts:(id)arg1;
- (id)title;

@end
