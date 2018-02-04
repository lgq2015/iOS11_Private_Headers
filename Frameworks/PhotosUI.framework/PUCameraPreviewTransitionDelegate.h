/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraPreviewTransitionDelegate : PUPhotosPreviewTransitionDelegate {
    PUScrubberView * _previewScrubber;
    UIImage * _previewSourceImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewSourceRect;
    bool  _shouldHideScrubber;
}

@property (nonatomic, retain) PUScrubberView *previewScrubber;
@property (nonatomic, retain) UIImage *previewSourceImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewSourceRect;
@property (nonatomic) bool shouldHideScrubber;

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)previewScrubber;
- (id)previewSourceImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewSourceRect;
- (void)setPreviewScrubber:(id)arg1;
- (void)setPreviewSourceImage:(id)arg1;
- (void)setPreviewSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldHideScrubber:(bool)arg1;
- (bool)shouldHideScrubber;

@end
