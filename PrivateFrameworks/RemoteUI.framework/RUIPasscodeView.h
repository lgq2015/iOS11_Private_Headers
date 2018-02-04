/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPasscodeView : RUIElement <CAAnimationDelegate, PSPasscodeFieldDelegate, RUITableFooterDelegate, RUITopLevelPageElement> {
    RUIHTMLHeaderElement * _HTMLHeader;
    RUIHTMLHeaderView * _HTMLHeaderView;
    bool  _appeared;
    UITextField * _complexPasscodeField;
    UIScrollView * _containerView;
    RUIElement * _footer;
    UIView<RemoteUITableFooter> * _footerView;
    UIColor * _foregroundColor;
    RUIHeaderElement * _header;
    NSString * _headerTitle;
    UIView<RUIHeader> * _headerView;
    long long  _keyboardAppearance;
    unsigned long long  _numberOfEntryFields;
    RUIObjectModel * _objectModel;
    RUIPage * _page;
    PSPasscodeField * _passcodeField;
    unsigned long long  _passcodeValidationAttempts;
    NSString * _pendingAutoFillToken;
    NSString * _submittedPIN;
}

@property (nonatomic, retain) RUIHTMLHeaderElement *HTMLHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RUIElement *footer;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIHeaderElement *header;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic) RUIPage *page;
@property (nonatomic, readonly) PSPasscodeField *passcodeField;
@property (nonatomic, copy) NSString *submittedPIN;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HTMLHeader;
- (id)HTMLHeaderView;
- (void)_clearPasscode;
- (void)_complexPasscodeFieldDidChange:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_jiggleView:(id)arg1;
- (bool)_requiresLocalPasscodeValidation;
- (void)_updateFieldSpacer;
- (void)autofillWithToken:(id)arg1;
- (id)footer;
- (id)footerView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)foregroundColor;
- (id)header;
- (id)headerTitle;
- (id)headerView;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (long long)keyboardAppearance;
- (unsigned long long)numberOfEntryFields;
- (id)objectModel;
- (id)page;
- (id)passcodeField;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeView;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(id /* block */)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHTMLHeader:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setNumberOfEntryFields:(unsigned long long)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setSubmittedPIN:(id)arg1;
- (id)sourceURL;
- (id)subElementWithID:(id)arg1;
- (void)submitPIN;
- (id)submittedPIN;
- (id)titleLabel;
- (id)view;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
