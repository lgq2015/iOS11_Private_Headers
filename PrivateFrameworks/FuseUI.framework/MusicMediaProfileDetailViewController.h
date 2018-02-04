/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProfileDetailViewController : MusicMediaDetailViewController <MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSProfileNativeViewControllerDelegate, MusicMediaProfileHeaderContentViewControllerDelegate, SKUIModalSourceViewProvider, UIViewControllerRestoration> {
    MPMediaItemCollection * _artistMediaItemCollection;
    MPArtworkCatalog * _artworkCatalog;
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    bool  _didDispatchLoadEvent;
    NSString * _followerCountText;
    NSString * _followersText;
    bool  _hasDetailTintInformation;
    bool  _isAdminEnabled;
    bool  _isAlbumArtist;
    bool  _isExpectingRelatedContentDocument;
    bool  _isUsingHeaderLockupProfileImage;
    bool  _isUsingUberArtistHeroImage;
    bool  _isWaitingToPushMoreRelatedContentView;
    NSArray * _jsVisibleSegments;
    bool  _needsArtworkCatalogUpdate;
    bool  _needsColorAnalysisUpdate;
    long long  _numberOfFollowers;
    NSMutableArray * _pendingTintInformationDispatchEvents;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousMaximumHeaderSize;
    unsigned long long  _profileType;
    UIViewController * _relatedContentViewController;
    NSString * _segmentIdentifierNeedingContent;
    bool  _sharingHidden;
    bool  _socialHidden;
    NSNumber * _storeAdamID;
}

@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicMediaProfileHeaderContentViewController *headerContentViewController;
@property (nonatomic, retain) MusicMediaDetailHeaderViewController *headerViewController;
@property (nonatomic) bool shouldAutomaticallySelectMyMusicSegment;
@property (nonatomic, readonly) MusicMediaProfileSplitDetailViewController *splitDetailViewController;
@property (nonatomic, retain) MusicMediaProfileSplitMainViewController *splitMainViewController;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_accessMoreRelatedContentDocumentUsingBlock:(id /* block */)arg1;
- (id)_activeDocumentContainerViewController;
- (void)_checkAdminPermission;
- (void)_checkAdminPermissionForCurrentProfile;
- (void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_dispatchNeedsContentForDocumentIdentifier:(id)arg1;
- (void)_dispatchNeedsContentForSegmentWithIdentifier:(id)arg1;
- (void)_pushMoreRelatedContentDocument:(id)arg1 options:(id)arg2;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_sendPendingTintInformationDispatchEvents;
- (bool)_shouldUseAvailableContent;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(bool)arg1;
- (void)_updateFollowText;
- (void)_updateHeaderProperties;
- (void)_updateProfileTitle;
- (void)_updateStoreCapabilities;
- (bool)allowsHairline;
- (bool)allowsShowingSplitDetailViewController;
- (id)clientContext;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 existingJSProfileNativeViewController:(id)arg3 profileType:(unsigned long long)arg4;
- (void)jsProfileNativeViewController:(id)arg1 presentBiographyEditorDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setAvailableContentFlags:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setDocument:(id)arg2 options:(id)arg3 forSegmentIdentifier:(id)arg4;
- (void)jsProfileNativeViewController:(id)arg1 setFollowerCountText:(id)arg2 followersText:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setMoreRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setNumberOfFollowers:(long long)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setProfileEntityValueProviderData:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSelectedSegmentIdentifier:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSocialHidden:(bool)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setVisibleSegments:(id)arg2;
- (bool)jsProfileNativeViewControllerSupportsRelatedContentDocument:(id)arg1;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectEditButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didUpdateFollowingState:(bool)arg2 forStoreID:(long long)arg3;
- (void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(id)arg1;
- (void)mediaProfileSplitMainViewController:(id)arg1 needsContentForSegmentWithIdentifier:(id)arg2;
- (void)mediaProfileSplitMainViewControllerSegmentedControlVisibleDidChange:(id)arg1;
- (bool)music_allowsMetricsEvents;
- (void)setClientContext:(id)arg1;
- (void)setShouldAutomaticallySelectMyMusicSegment:(bool)arg1;
- (bool)shouldAutomaticallySelectMyMusicSegment;
- (void)showingSplitDetailViewControllerDidChange;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)visuallyInsetDidChange;

@end
