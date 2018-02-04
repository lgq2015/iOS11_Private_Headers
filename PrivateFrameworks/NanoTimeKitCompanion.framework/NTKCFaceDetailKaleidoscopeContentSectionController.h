/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> {
    NTKCompanionKaleidoscopeEditor * _editor;
    bool  _externalAssetSet;
    UIViewController * _parentViewController;
    UIImagePickerController * _presentedPicker;
    <NTKCFaceDetailEditOptionSectionDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

+ (bool)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2;
+ (bool)supressesSectionForExternalAssets:(id)arg1;

- (void).cxx_destruct;
- (bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (void)_finalizeEditor;
- (bool)_handleDidSelectActionRowForOption:(id)arg1;
- (void)_presentPhotoPicker;
- (void)_setPhotoFromAsset:(id)arg1;
- (void)_setPhotoFromDictionary:(id)arg1;
- (void)_setRawPhoto:(id)arg1;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (id)delegate;
- (Class)editCellClass;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg1;
- (id)parentViewController;
- (void)setDelegate:(id)arg1;
- (void)setExternalAsset:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSelectedOptions:(id)arg1;

@end
