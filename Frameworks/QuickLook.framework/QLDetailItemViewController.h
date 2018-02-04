/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDetailItemViewController : QLItemViewController {
    UIButton * _actionButton;
    UIButton * _actionIconButton;
    UIView * _currentActionButtonView;
    QLFileIconImageView * _filePreviewImageView;
    NSArray * _information;
    UIStackView * _informationStackView;
    bool  _isSettingStateAnimated;
    NSString * _previewTitle;
    QLDetailItemViewControllerState * _state;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fileThumbnailFrame;
@property (nonatomic, retain) NSArray *information;
@property (nonatomic, retain) QLDetailItemViewControllerState *state;

- (void).cxx_destruct;
- (void)_setActionButtonView:(id)arg1 animated:(bool)arg2 actionButtonLabel:(id)arg3 informationVisible:(bool)arg4;
- (void)_updateInformation;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fileThumbnailFrame;
- (id)information;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setFileThumbnailFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInformation:(id)arg1;
- (void)setState:(id)arg1;
- (void)setState:(id)arg1 animated:(bool)arg2;
- (id)state;
- (void)viewDidLoad;

@end
