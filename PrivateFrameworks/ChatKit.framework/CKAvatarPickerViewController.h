/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarPickerViewController : UIViewController <CKAvatarPickerLayoutDelegate, CNAvatarViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UIViewController * _avatarOrbPresentingViewController;
    UICollectionView * _collectionView;
    CKConversation * _conversation;
    <CKAvatarPickerViewControllerDelegate> * _delegate;
    CKAvatarPickerLayout * _layout;
    long long  _style;
    CNContactStore * _suggestionsEnabledContactStore;
    UITapGestureRecognizer * _tapGestureRecognizer;
    CKAvatarTitleCollectionReusableView * _titleView;
    NSMapTable * _visibleTitleViews;
}

@property (nonatomic) UIViewController *avatarOrbPresentingViewController;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAvatarPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKAvatarPickerLayout *layout;
@property (nonatomic) long long style;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) CKAvatarTitleCollectionReusableView *titleView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleViewFrame;
@property (nonatomic, retain) NSMapTable *visibleTitleViews;

- (void).cxx_destruct;
- (void)_animateInTitleView;
- (void)_animateOutTitleView;
- (void)_animateToLayout:(unsigned long long)arg1;
- (bool)_canCollapseToPancakeView;
- (void)_chatPropertiesChanged:(id)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (id)_cutoutSupplementaryViewAtIndexPath:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleConversationIsFilteredChange:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleGroupNameChange:(id)arg1;
- (void)_handleTapOnCollectionView:(id)arg1;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (id)_titleSupplementaryViewAtIndexPath:(id)arg1;
- (id)avatarDisplayName;
- (id)avatarOrbPresentingViewController;
- (bool)avatarPickerLayoutShouldShowTitle:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (bool)chatIsReportedAsSpam;
- (int)chatWasDetectedAsSMSSpam;
- (void)collapseToPancakeView;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (void)expandToExpandedView;
- (bool)hasTitle;
- (id)initWithConversation:(id)arg1;
- (id)layout;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarOrbPresentingViewController:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setVisibleTitleViews:(id)arg1;
- (long long)style;
- (id)suggestionsEnabledContactStore;
- (id)tapGestureRecognizer;
- (id)titleView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleViewFrame;
- (void)viewWillLayoutSubviews;
- (id)visibleTitleViews;

@end
