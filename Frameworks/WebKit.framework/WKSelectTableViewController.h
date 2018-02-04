/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectTableViewController : UITableViewController <UIKeyInput> {
    bool  _allowsMultipleSelection;
    WKContentView * _contentView;
    double  _fontSize;
    double  _maximumTextWidth;
    long long  _numberOfSections;
    WKSelectPopover * _popover;
    unsigned long long  _singleSelectionIndex;
    unsigned long long  _singleSelectionSection;
    long long  _textAlignment;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) WKSelectPopover *popover;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

- (void)deleteBackward;
- (struct OptionItem { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; bool x2; bool x3; bool x4; int x5; }*)findItemAt:(id)arg1;
- (long long)findItemIndexAt:(id)arg1;
- (bool)hasText;
- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (void)insertText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)popover;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; bool x2; bool x3; bool x4; int x5; }*)arg2;
- (void)setPopover:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
