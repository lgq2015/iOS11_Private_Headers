/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController {
    <PULivePhotoKeyFrameSelectionViewControllerDelegate> * _delegate;
    UIButton * _makeKeyPhotoBtn;
}

@property (nonatomic) <PULivePhotoKeyFrameSelectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIButton *makeKeyPhotoBtn;

- (void).cxx_destruct;
- (id)delegate;
- (void)loadView;
- (id)makeKeyPhotoBtn;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setMakeKeyPhotoBtn:(id)arg1;
- (void)tapMakeKeyPhoto:(id)arg1;

@end
