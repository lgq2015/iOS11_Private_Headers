/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavbarCanvasViewController : UIViewController <CKAvatarPickerViewControllerDelegate> {
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKCanvasBackButtonView * _backButtonView;
    bool  _canShowBackButtonView;
    CKNavigationBarCanvasView * _canvasView;
    UIButton * _clearAllButtonView;
    CKConversation * _conversation;
    CKLabel * _defaultLabel;
    <CKNavbarCanvasViewControllerDelegate> * _delegate;
    UIButton * _detailsButton;
    UIButton * _editCancelButtonView;
    bool  _editing;
    NSString * _navbarTitle;
    UINavigationController * _proxyNavigationController;
    CNContactStore * _suggestionsEnabledContactStore;
}

@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKCanvasBackButtonView *backButtonView;
@property (nonatomic) bool canShowBackButtonView;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) UIButton *clearAllButtonView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CKLabel *defaultLabel;
@property (nonatomic) <CKNavbarCanvasViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *detailsButton;
@property (nonatomic, retain) UIButton *editCancelButtonView;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *navbarTitle;
@property (nonatomic) UINavigationController *proxyNavigationController;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (bool)_canShowAvatarView;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_configureForDefaultMode;
- (void)_configureForEditMode;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (void)_notifyDelegateThatViewControllerWantsResize;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (void)_showContactCardForEntity:(id)arg1;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (long long)_unreadCount;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (id)_windowTraitCollection;
- (void)accessibilitySizeCategoryDidChange:(id)arg1;
- (id)avatarPickerViewController;
- (void)avatarPickerViewControllerDidSelectEntity:(id)arg1;
- (id)backButtonView;
- (bool)canShowBackButtonView;
- (id)canvasView;
- (id)clearAllButtonView;
- (void)configureForEditing:(bool)arg1;
- (id)conversation;
- (void)dealloc;
- (id)defaultLabel;
- (id)delegate;
- (id)detailsButton;
- (void)dismissModal;
- (id)editCancelButtonView;
- (bool)editing;
- (id)initWithConversation:(id)arg1;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (void)loadView;
- (id)navbarTitle;
- (id)navigationItem;
- (id)proxyNavigationController;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setBackButtonView:(id)arg1;
- (void)setCanShowBackButtonView:(bool)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setClearAllButtonView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDefaultLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setEditCancelButtonView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setNavbarTitle:(id)arg1;
- (void)setProxyNavigationController:(id)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setUnreadCountTitleColor;
- (void)showMapkitBusinessData;
- (id)suggestionsEnabledContactStore;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
