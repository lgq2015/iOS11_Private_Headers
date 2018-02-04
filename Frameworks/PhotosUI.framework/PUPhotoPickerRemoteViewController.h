/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerRemoteViewController : UIViewController <NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerRemoteNavigationControllerDelegate, PUPhotoPickerTestSupportHandler> {
    long long  _actionType;
    NSString * _actionTypeDescription;
    bool  _contentLoaded;
    PUPhotoPickerRemoteNavigationController * _contentNavigationController;
    UIViewController * _contentViewController;
    PUPhotoPickerExtensionContext * _extensionContext;
    bool  _observingNavigationItemPrompt;
    PUPhotoPickerRemoteViewControllerRequestOptions * _options;
    long long  _secondaryActionType;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *actionTypeDescription;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (getter=isContentLoaded, nonatomic) bool contentLoaded;
@property (nonatomic, retain) PUPhotoPickerRemoteNavigationController *contentNavigationController;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, readonly) bool convertAutoloopsToGIF;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PUPhotoPickerExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (getter=isObservingNavigationItemPrompt, nonatomic) bool observingNavigationItemPrompt;
@property (nonatomic, retain) PUPhotoPickerRemoteViewControllerRequestOptions *options;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic) long long secondaryActionType;
@property (nonatomic, readonly) bool showsPrompt;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleViewControllerCreationWithClassName:(id)arg1;
- (void)_handleViewControllerFetchWithRequestedIdentifier:(id)arg1;
- (void)_handleViewControllerRequestWithOptions:(id)arg1 error:(id)arg2;
- (void)_loadContentViewIfNeeded;
- (void)_logAssetSelectionIfNeeded:(id)arg1;
- (void)_setPhotoPickerInViewController:(id)arg1;
- (long long)actionType;
- (id)actionTypeDescription;
- (bool)allowsMultipleSelection;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)cancelPhotoPicker;
- (id)contentNavigationController;
- (id)contentViewController;
- (bool)convertAutoloopsToGIF;
- (void)dealloc;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(long long)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(id /* block */)arg2;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (id)extensionContext;
- (bool)isContentLoaded;
- (bool)isObservingNavigationItemPrompt;
- (void)loadView;
- (id)mediaTypes;
- (unsigned long long)multipleSelectionLimit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;
- (void)performAppearanceUpdateUsing:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performPhotosSelection;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)photoPickerRemoteNavigationController:(id)arg1 popViewController:(id)arg2 animated:(bool)arg3;
- (void)photoPickerRemoteNavigationController:(id)arg1 viewControllerToPush:(id)arg2;
- (void)presentViewController:(id)arg1;
- (id)properties;
- (unsigned long long)savingOptions;
- (long long)secondaryActionType;
- (void)setActionType:(long long)arg1;
- (void)setActionTypeDescription:(id)arg1;
- (void)setContentLoaded:(bool)arg1;
- (void)setContentNavigationController:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setExtensionContext:(id)arg1;
- (void)setObservingNavigationItemPrompt:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setSecondaryActionType:(long long)arg1;
- (bool)showsPrompt;
- (void)viewWillAppear:(bool)arg1;

@end
