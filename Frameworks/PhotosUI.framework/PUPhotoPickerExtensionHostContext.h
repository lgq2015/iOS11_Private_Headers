/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService> {
    <PUPhotoPickerActionHandler> * _actionDisplayHandler;
    NSNumber * _actionType;
    NSString * _actionTypeDescription;
    bool  _cachedDidDisplayPhotoPickerPreview;
    NSNumber * _cachedDidDisplayPhotoPickerSourceType;
    <PUPhotoPickerHostService> * _delegate;
    PUPhotoPickerAppearance * _photoPickerAppearance;
    NSNumber * _photoPickerNavigationBarHidden;
    NSString * _photoPickerViewControllerPrompt;
    NSString * _photoPickerViewControllerTitle;
    NSUUID * _requestIdentifier;
    NSNumber * _secondaryActionType;
}

@property (nonatomic) <PUPhotoPickerActionHandler> *actionDisplayHandler;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, retain) NSString *actionTypeDescription;
@property (nonatomic) bool cachedDidDisplayPhotoPickerPreview;
@property (nonatomic, retain) NSNumber *cachedDidDisplayPhotoPickerSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerHostService> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUPhotoPickerAppearance *photoPickerAppearance;
@property (nonatomic, retain) NSNumber *photoPickerNavigationBarHidden;
@property (nonatomic, copy) NSString *photoPickerViewControllerPrompt;
@property (nonatomic, copy) NSString *photoPickerViewControllerTitle;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (nonatomic, retain) NSNumber *secondaryActionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_JPEGDataFromImageData:(id)arg1;
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1;
- (bool)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2;
- (id)_pathExtensionFromData:(id)arg1 url:(id)arg2;
- (id)_remote;
- (id)actionDisplayHandler;
- (id)actionType;
- (id)actionTypeDescription;
- (bool)cachedDidDisplayPhotoPickerPreview;
- (id)cachedDidDisplayPhotoPickerSourceType;
- (void)cancelPhotoPicker;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)displayActionTypeDescription:(id)arg1;
- (void)displayActionWithType:(id)arg1;
- (void)displaySecondaryActionWithType:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)performAppearanceUpdateUsingPhotoPickerAppearanceDictionary:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (id)photoPickerAppearance;
- (id)photoPickerNavigationBarHidden;
- (id)photoPickerViewControllerPrompt;
- (id)photoPickerViewControllerTitle;
- (id)requestIdentifier;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (id)secondaryActionType;
- (void)setActionDisplayHandler:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setActionTypeDescription:(id)arg1;
- (void)setCachedDidDisplayPhotoPickerPreview:(bool)arg1;
- (void)setCachedDidDisplayPhotoPickerSourceType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoPickerAppearance:(id)arg1;
- (void)setPhotoPickerNavigationBarHidden:(id)arg1;
- (void)setPhotoPickerViewControllerPrompt:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSecondaryActionType:(id)arg1;

@end
