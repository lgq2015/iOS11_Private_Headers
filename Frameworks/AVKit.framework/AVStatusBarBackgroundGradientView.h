/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStatusBarBackgroundGradientView : UIView {
    double  _gradientOpacity;
    bool  _showsGradientWhenStatusBarVisible;
}

@property (nonatomic) double gradientOpacity;
@property (nonatomic) bool showsGradientWhenStatusBarVisible;

+ (Class)layerClass;

- (void)_updateGradientOpacity;
- (void)dealloc;
- (double)gradientOpacity;
- (id)init;
- (void)layoutSubviews;
- (void)setGradientOpacity:(double)arg1;
- (void)setShowsGradientWhenStatusBarVisible:(bool)arg1;
- (bool)showsGradientWhenStatusBarVisible;

@end
