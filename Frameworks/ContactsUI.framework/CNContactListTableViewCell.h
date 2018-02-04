/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListTableViewCell : UITableViewCell {
    CNContact * _contact;
    CNContactFormatter * _contactFormatter;
    CNContactMatchInfo * _contactMatchInfo;
    bool  _enabled;
    bool  _isMeCard;
    id /* block */  _selectedBackgroundViewConfiguration;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactMatchInfo *contactMatchInfo;
@property (nonatomic) bool enabled;
@property (nonatomic) bool isMeCard;
@property (nonatomic, copy) id /* block */ selectedBackgroundViewConfiguration;
@property (nonatomic, readonly) <ABStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)contact;
- (id)contactFormatter;
- (id)contactMatchInfo;
- (bool)enabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isMeCard;
- (id /* block */)selectedBackgroundViewConfiguration;
- (void)setContact:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContactMatchInfo:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIsMeCard:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedBackgroundViewConfiguration:(id /* block */)arg1;
- (id)styleProvider;

@end
