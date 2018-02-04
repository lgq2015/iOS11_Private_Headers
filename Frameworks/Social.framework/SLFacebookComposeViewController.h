/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLFacebookAlbumChooserViewControllerDelegate, SLFacebookAudienceViewControllerDelegate, SLFacebookVideoOptionsDelegate, SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate> {
    ACAccountStore * _accountStore;
    struct { 
        unsigned int showAlbumAction : 1; 
        unsigned int showPrivacyAction : 1; 
        unsigned int showPlaceAction : 1; 
        unsigned int showVideoDetailAction : 1; 
    }  _actionFlags;
    SLFacebookAlbumChooserViewController * _albumChooserViewController;
    SLComposeSheetConfigurationItem * _albumConfigurationItem;
    SLFacebookAlbumManager * _albumManager;
    ALAssetsLibrary * _assetsLibrary;
    UIViewController<SLFacebookAudienceViewController> * _audienceViewController;
    id /* block */  _completionHandler;
    bool  _didFetchPrivilegedAccount;
    bool  _hasAccessToAccount;
    bool  _hasCheckedAccess;
    bool  _hasShowedLocationDeniedAlert;
    CLInUseAssertion * _locationInUseAssertion;
    SLComposeSheetConfigurationItem * _placeConfigurationItem;
    SLFacebookPlaceManager * _placeManager;
    SLSheetPlaceViewController * _placeViewController;
    SLFacebookPost * _post;
    SLFacebookPostPrivacyManager * _postPrivacyManager;
    SLComposeSheetConfigurationItem * _privacyConfigurationItem;
    ACAccount * _privilegedAccount;
    SLVideoQualityOption * _selectedVideoQualityOption;
    SLFacebookSession * _session;
    SLComposeSheetConfigurationItem * _videoOptionsConfigurationItem;
    SLFacebookVideoOptionsViewController * _videoOptionsViewController;
}

@property (retain) ACAccountStore *accountStore;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) ACAccount *privilegedAccount;
@property (readonly) Class superclass;

+ (id)serviceBundle;

- (void).cxx_destruct;
- (id)_albumConfigurationItem;
- (void)_handlePostPrivacyResultWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (bool)_isLocationAuthorizationDenied;
- (id)_placeConfigurationItem;
- (id)_postPrivacyManager;
- (void)_presentAlbumViewController;
- (void)_presentAudienceViewController;
- (void)_presentFacebookDisabledAlert;
- (void)_presentNoAccountsAlert;
- (void)_presentPlaceViewController;
- (void)_presentVideoOptionsViewController;
- (id)_privacyConfigurationItem;
- (void)_setPlace:(id)arg1;
- (void)_setVideoSizeOptionIdentifier:(id)arg1;
- (void)_updateAlbumConfigurationItemWithDefaultAlbum;
- (void)_updatePrivacyConfigurationItemWithDefaultPrivacySetting;
- (id)_videoOptionIdentifer;
- (id)_videoOptionsConfigurationItem;
- (id)_videoQualityOption;
- (id)accountStore;
- (void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2;
- (id)albumManager;
- (void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2;
- (void)callCompletionHandlerWithResult:(long long)arg1;
- (id /* block */)completionHandler;
- (id)configurationItems;
- (void)didReceiveMemoryWarning;
- (void)didSelectPost;
- (void)handleImagePostWithURL;
- (bool)hasAccountAccess;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isContentValid;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;
- (void)presentationAnimationDidFinish;
- (id)privilegedAccount;
- (void)setAccountStore:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setupCommonUI;
- (void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
