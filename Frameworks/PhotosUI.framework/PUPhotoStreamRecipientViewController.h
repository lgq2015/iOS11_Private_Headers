/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoStreamRecipientViewController : UIViewController <CNContactPickerDelegate, IDSBatchIDQueryControllerDelegate, MFComposeRecipientViewDelegate, MFContactsSearchConsumer, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    double  _bottomTableOffset;
    CNContactPickerViewController * _contactPickerPresentedController;
    CNContactStore * _contactStore;
    NSNumber * _currentSearchTaskID;
    id  _delegate;
    IDSBatchIDQueryController * _idsBatchIDQueryController;
    double  _lastHeight;
    NSArray * _properties;
    UIScrollView * _recipientContainerView;
    MFComposeRecipientView * _recipientView;
    struct CGSize { 
        double width; 
        double height; 
    }  _recipientViewSize;
    MFContactsSearchManager * _searchManager;
    NSArray * _searchResults;
    MFContactsSearchResultsModel * _searchResultsModel;
    UITableView * _searchResultsTable;
    bool  _showingContactPicker;
    NSMutableSet * _validPhoneNumbers;
    bool  _wasFirstResponder;
}

@property (nonatomic) double bottomTableOffset;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recipients;
@property (readonly) Class superclass;

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;

- (void).cxx_destruct;
- (void)_addRecipientFromSelectedContactProperty:(id)arg1;
- (void*)_addressBook;
- (void)_dismissContactPicker;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_searchManager;
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;
- (void)_setSearchResults:(id)arg1;
- (void)beganNetworkActivity;
- (double)bottomTableOffset;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (bool)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactStore;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)recipients;
- (void)setBottomTableOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
