/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    SKUIClientContext * _clientContext;
    UIView * _contentView;
    <SKUIProfileImagePickerDelegate> * _delegate;
    UILabel * _descriptionLabel;
    bool  _firstApperance;
    UIImagePickerController * _imagePicker;
    UIScrollView * _scrollView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProfileImagePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2;

- (void).cxx_destruct;
- (void)_didCancel;
- (void)_presentImagePickerWithSourceType:(long long)arg1;
- (void)_showImagePicker;
- (void)_showImageSourcePicker;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
