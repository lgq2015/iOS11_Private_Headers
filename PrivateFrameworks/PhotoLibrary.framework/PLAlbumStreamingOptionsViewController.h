/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString * __lastMultiContributorsSectionFooterTitle;
    NSString * __lastPublicURLSectionFooterTitle;
    PLCloudSharedAlbumInvitationRecord * __selectedSubscriberInvitationRecord;
    bool  __shouldScrollToTopOnNextViewLayout;
    unsigned long long  _addSubscribersRow;
    bool  _adjustedInsetsForKeyboard;
    PLCloudSharedAlbum * _album;
    bool  _albumIsFamilyStream;
    NSString * _albumName;
    UIBarButtonItem * _cancelButton;
    PLComposeRecipientViewController * _composeRecipientController;
    <PLAlbumStreamingOptionsViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    ACAccountStore * _familyAccountStore;
    AAUIProfilePictureStore * _familyMemberPictureStore;
    NSArray * _familyMembers;
    NSMutableDictionary * _familyProfilePictures;
    NSOperationQueue * _familyRequestQueue;
    bool  _isPresentedModally;
    UITableView * _optionsTableView;
    bool  _showShareLink;
    bool  _streamOwner;
    NSArray * _visibleInvitationRecords;
    NSString * _visiblePublicURL;
    UISwitch * _wantsAcceptCloudNotificationSwitch;
    UISwitch * _wantsMultipleContributorsSwitch;
    UISwitch * _wantsPublicWebsiteSwitch;
}

@property (setter=_setLastMultiContributorsSectionFooterTitle:, nonatomic, copy) NSString *_lastMultiContributorsSectionFooterTitle;
@property (setter=_setLastPublicURLSectionFooterTitle:, nonatomic, copy) NSString *_lastPublicURLSectionFooterTitle;
@property (setter=_setSelectedSubscriberInvitationRecord:, nonatomic, retain) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord;
@property (setter=_setShouldScrollToTopOnNextViewLayout:, nonatomic) bool _shouldScrollToTopOnNextViewLayout;
@property (nonatomic, retain) PLCloudSharedAlbum *album;
@property (nonatomic) bool albumIsFamilyStream;
@property (nonatomic, copy) NSString *albumName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLAlbumStreamingOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresentedModally;
@property (nonatomic) bool streamOwner;
@property (readonly) Class superclass;

- (bool)_appAllowsSupressionOfAlerts;
- (void)_cancelAction:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_deletePhotoStream;
- (void)_displayActivitySheet;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_lastMultiContributorsSectionFooterTitle;
- (id)_lastPublicURLSectionFooterTitle;
- (bool)_multipleContributorsEnabled;
- (id)_personMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 outMatchingKey:(id*)arg5 outMatchingIdentifier:(id*)arg6 keysToFetch:(id)arg7;
- (id)_personViewControllerWithEmail:(id)arg1 phone:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 canResendInvitation:(bool)arg5 canRemoveSubscriber:(bool)arg6;
- (bool)_publicURLEnabled;
- (void)_removeSelectedSubscriber;
- (void)_resendInvitationToSelectedSubscriber;
- (id)_selectedSubscriberInvitationRecord;
- (void)_setLastMultiContributorsSectionFooterTitle:(id)arg1;
- (void)_setLastPublicURLSectionFooterTitle:(id)arg1;
- (void)_setSelectedSubscriberInvitationRecord:(id)arg1;
- (void)_setShouldScrollToTopOnNextViewLayout:(bool)arg1;
- (void)_setShowingMultipleContributorSpinner:(bool)arg1;
- (void)_setShowingPublicURLActivitySpinner:(bool)arg1;
- (bool)_shouldScrollToTopOnNextViewLayout;
- (bool)_shouldShowPublicURLActivitySpinner;
- (id)_suppresionContexts;
- (void)_updateAllControls;
- (void)_updateMultipleContributorsState;
- (void)_updatePublicURLStateIfNecessaryAnimated:(bool)arg1;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsMultipleContributorsField;
- (void)_updateWantsPublicWebsiteField;
- (id)_visibleInvitationRecordsForStreamOwner:(bool)arg1;
- (id)album;
- (bool)albumIsFamilyStream;
- (id)albumName;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (id)initWithAlbum:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (bool)isPresentedModally;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setAlbumIsFamilyStream:(bool)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPresentedModally:(bool)arg1;
- (void)setStreamOwner:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)streamOwner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
