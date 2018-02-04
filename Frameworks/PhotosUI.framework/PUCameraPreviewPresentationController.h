/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraPreviewPresentationController : PUPhotosPreviewPresentationController {
    UIImageView * __customDotImageView;
    UIView * __customSourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __previewSourceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __revealFinalRect;
    UIImage * __revealImage;
    bool  __shouldHideScrubber;
    UIView * _customBackgroundView;
    PUScrubberView * _presentationScrubberView;
    UIView * _scrubberContainerView;
}

@property (setter=_setCustomDotImageView:, nonatomic, retain) UIImageView *_customDotImageView;
@property (setter=_setCustomSourceView:, nonatomic, retain) UIView *_customSourceView;
@property (setter=_setPreviewSourceRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previewSourceRect;
@property (setter=_setRevealFinalRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _revealFinalRect;
@property (setter=_setRevealImage:, nonatomic, retain) UIImage *_revealImage;
@property (setter=_setShouldHideScrubber:, nonatomic) bool _shouldHideScrubber;
@property (nonatomic, retain) UIView *customBackgroundView;
@property (nonatomic, retain) PUScrubberView *presentationScrubberView;
@property (nonatomic, retain) UIView *scrubberContainerView;

+ (bool)_shouldApplyVisualEffectsToPresentingView;

- (void).cxx_destruct;
- (id)_customDotImageView;
- (id)_customSourceView;
- (void)_dismissTransitionDidComplete:(bool)arg1;
- (bool)_isPreviewingInPortrait;
- (void)_layoutForDismissTransition;
- (void)_layoutForPreviewTransition;
- (void)_layoutForRevealTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previewSourceRect;
- (void)_previewTransitionDidComplete:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_revealFinalRect;
- (id)_revealImage;
- (void)_revealTransitionDidComplete:(bool)arg1;
- (void)_setCustomDotImageView:(id)arg1;
- (void)_setCustomSourceView:(id)arg1;
- (void)_setPreviewSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRevealFinalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRevealImage:(id)arg1;
- (void)_setShouldHideScrubber:(bool)arg1;
- (bool)_shouldHideScrubber;
- (bool)_wantsScrubber;
- (id)customBackgroundView;
- (id)presentationScrubberView;
- (void)presentationTransitionWillBegin;
- (id)scrubberContainerView;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setPresentationScrubberView:(id)arg1;
- (void)setScrubberContainerView:(id)arg1;

@end
