/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <SLMicroBlogAccountsTableViewControllerDelegate, SLMicroBlogMentionsDelegate, SLSheetPlaceViewControllerDelegate, UITextViewDelegate> {
    SLComposeSheetConfigurationItem * _accountConfigurationItem;
    NSArray * _accountIdentifiers;
    NSArray * _accountUserRecords;
    SLMicroBlogAccountsTableViewController * _accountViewController;
    SLPlace * _currentPlace;
    bool  _isPresentingPlaces;
    SLComposeSheetConfigurationItem * _locationConfigurationItem;
    long long  _maxURLLength;
    bool  _mentionPendingStart;
    unsigned long long  _mentionStartLocation;
    SLMicroBlogMentionsViewController * _mentionsViewController;
    NSObject<SLMicroBlogSheetDelegate> * _microBlogSheetDelegate;
    SLSheetPlaceViewController * _placeViewController;
    bool  _rotatedDuringAccountsPopover;
    SLMicroBlogUserRecord * _selectedAccountUserRecord;
    NSString * _serviceAccountTypeIdentifier;
    long long  _shortenedURLCost;
    bool  _usingLocationOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSObject<SLMicroBlogSheetDelegate> *microBlogSheetDelegate;
@property (readonly) Class superclass;

+ (id)serviceBundle;

- (void).cxx_destruct;
- (id)_accountConfigurationItem;
- (void)_beginLoadingAccountProfileImages;
- (long long)_characterCountForText:(id)arg1;
- (int)_charactersRemainingWithText:(id)arg1;
- (bool)_countMediaAttachmentsTowardCharacterCount;
- (void)_dismissMentionsViewController;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (id)_locationConfigurationItem;
- (id)_mentionsSearchString;
- (void)_performLocationAction;
- (id)_placeViewController;
- (void)_presentAccountPickerController;
- (void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1;
- (void)_presentMentionsViewControllerWithSearchString:(id)arg1;
- (void)_presentNoAccountsAlertIfNecessaryAndReady;
- (void)_presentPlaceViewController;
- (void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2;
- (void)appWillEnterForeground:(id)arg1;
- (void)applyMention:(id)arg1;
- (int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2;
- (id)completeText:(id)arg1 withAttachments:(id)arg2;
- (id)configurationItems;
- (void)didSelectPost;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isContentValid;
- (void)loadView;
- (void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2;
- (id)microBlogSheetDelegate;
- (void)noteLocationInfoChanged:(id)arg1;
- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;
- (void)placeViewController:(id)arg1 willDisappear:(bool)arg2;
- (void)presentNoAccountsAlert;
- (void)presentationAnimationDidFinish;
- (void)setGeotagStatus:(int)arg1;
- (void)setMicroBlogSheetDelegate:(id)arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateGeotagStatus;
- (void)updateShortenedURLCost;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
