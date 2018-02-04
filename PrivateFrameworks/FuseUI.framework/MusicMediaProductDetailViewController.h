/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductDetailViewController : MusicMediaDetailViewController <MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSProductNativeViewControllerDelegate, MusicMediaProductHeaderContentViewControllerDelegate, UIViewControllerRestoration> {
    bool  _allowsProductHairline;
    MPArtworkCatalog * _artworkCatalog;
    UIBarButtonItem * _cancelButtonItem;
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    MusicMediaProductDetailHeaderConfiguration * _detailHeaderConfiguration;
    UIImage * _editedContentArtworkImage;
    bool  _editingWasCancelled;
    bool  _forContentCreation;
    bool  _hasDetailTintInformation;
    bool  _hasPresentedExplicitByDefaultAlert;
    bool  _hasReceivedViewWillAppearAtLeastOnce;
    bool  _isObservingClientContextTransferAggregatorDidChangeNotification;
    bool  _isViewFullyVisible;
    MusicMediaDetailHeaderViewController * _mediaDetailHeaderViewController;
    MusicMediaProductHeaderContentViewController * _mediaProductHeaderContentViewController;
    bool  _needsArtworkCatalogUpdate;
    bool  _needsColorAnalysisUpdate;
    bool  _needsEffectiveNavigationItemUpdateForEditingStateChangeUponViewWillAppear;
    NSArray * _nonEditingLeftBarButtonItems;
    NSArray * _nonEditingRightBarButtonItems;
    NSMutableArray * _pendingTintInformationDispatchEvents;
    long long  _presentationSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousMaximumHeaderSize;
    UIViewController * _relatedContentViewController;
    <MusicEntityProviding> * _tracklistEntityProvider;
}

@property (nonatomic, readonly) MusicEntityValueContext *_containerEntityValueContext;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (nonatomic, readonly) <MusicEntityProviding> *containerEntityProvider;
@property (nonatomic, readonly) UIScrollView *containerScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *editedContentArtworkImage;
@property (getter=isForContentCreation, nonatomic, readonly) bool forContentCreation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicMediaProductHeaderContentViewController *headerContentViewController;
@property (nonatomic, retain) MusicMediaDetailHeaderViewController *headerViewController;
@property (nonatomic, readonly) long long presentationSource;
@property (nonatomic, readonly) MusicMediaProductSplitDetailViewController *splitDetailViewController;
@property (nonatomic, retain) MusicMediaProductSplitMainViewController *splitMainViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MusicEntityProviding> *tracklistEntityProvider;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (bool)_calculateHeaderContentViewControllerEditing;
- (void)_cancelEditing;
- (void)_commitEditing;
- (id)_containerEntityValueContext;
- (id)_containerMetadataContextWithContainerJSDictionary:(id)arg1 tracklistItemJSDictionaries:(id)arg2;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(id /* block */)arg4;
- (bool)_editingWasCancelled;
- (id)_effectiveNavigationItem;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_handleContainerEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_loadDetailHeaderConfiguration;
- (id)_loadProductHeaderContentViewController;
- (id)_loadProductSplitDetailViewController;
- (id)_loadProductSplitMainViewController;
- (id)_mediaDetailHeaderViewController;
- (id)_mediaProductHeaderContentViewController;
- (void)_presentExplicitByDefaultAlertIfNeeded;
- (long long)_productDescriptionTextStyle;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_sendPendingTintInformationDispatchEvents;
- (void)_setNeedsDetailHeaderConfigurationUpdate;
- (bool)_shouldAutomaticallyPopForMissingContainerEntityValueProvider;
- (void)_unregisterForClientContextTransferAggregatorDidChangeNotification;
- (void)_updateAllowsProductHairline;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(bool)arg1;
- (void)_updateDetailHeaderConfiguration;
- (void)_updateEffectiveNavigationItemForEditingStateChangeAnimated:(bool)arg1;
- (void)_updateRelatedContentViewControllerPlacement;
- (bool)allowsHairline;
- (bool)allowsShowingSplitDetailViewController;
- (id)clientContext;
- (id)containerEntityProvider;
- (id)containerScrollView;
- (void)dealloc;
- (void)detailTintInformationDidChange;
- (id)editedContentArtworkImage;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(bool)arg5;
- (bool)isForContentCreation;
- (void)jsProductNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setProductEntityValueProviderData:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setProminentTrackStoreID:(long long)arg2;
- (void)jsProductNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setTracklistItems:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)mediaProductHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProductHeaderContentViewControllerDidTapEdit:(id)arg1;
- (void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(id)arg1;
- (bool)music_allowsMetricsEvents;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (long long)presentationSource;
- (id)previewMenuItems;
- (void)setClientContext:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)showingSplitDetailViewControllerDidChange;
- (id)tracklistEntityProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
