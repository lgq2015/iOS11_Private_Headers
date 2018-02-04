/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerController : CKAlertController <CKPhotoPickerCollectionViewDelegate> {
    UIAlertAction * _bottomAlertAction;
    NSString * _captureLabelText;
    <CKPhotoPickerControllerDelegate> * _delegate;
    CKPhotoPickerCollectionViewController * _photosCollectionView;
    UIAlertAction * _topAlertAction;
}

@property (nonatomic, retain) UIAlertAction *bottomAlertAction;
@property (nonatomic, retain) NSString *captureLabelText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKPhotoPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKPhotoPickerCollectionViewController *photosCollectionView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIAlertAction *topAlertAction;

- (void).cxx_destruct;
- (void)_bottomAlertActionHandler;
- (void)_cancelButtonPressed;
- (bool)_shouldAlignToKeyboard;
- (void)_topAlertActionHandler;
- (void)_updateAlertTitles;
- (bool)allowsRotation;
- (id)bottomAlertAction;
- (id)captureLabelText;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)photoPickerCollectionViewAssetSelectionDidChange:(id)arg1;
- (id)photosCollectionView;
- (void)setBottomAlertAction:(id)arg1;
- (void)setCaptureLabelText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotosCollectionView:(id)arg1;
- (void)setTopAlertAction:(id)arg1;
- (bool)shouldAutorotate;
- (id)topAlertAction;
- (void)viewDidLoad;

@end
