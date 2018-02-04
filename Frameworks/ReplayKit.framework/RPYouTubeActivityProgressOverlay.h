/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPYouTubeActivityProgressOverlay : UIView {
    UIActivityIndicatorView * _activityIndicator;
    bool  _isShowing;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) bool isShowing;

- (void).cxx_destruct;
- (id)activityIndicator;
- (bool)isShowing;
- (void)setActivityIndicator:(id)arg1;
- (void)setIsShowing:(bool)arg1;
- (void)setShowing:(bool)arg1 animated:(bool)arg2;
- (void)setupOverlayAnimated:(bool)arg1;
- (void)stopActivity;
- (void)tearDownOverlayAnimated:(bool)arg1;

@end
