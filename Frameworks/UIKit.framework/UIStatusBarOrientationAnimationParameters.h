/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters {
    int  _orientationAnimation;
}

@property (nonatomic) int orientationAnimation;

- (id)initWithDefaultParameters;
- (int)orientationAnimation;
- (void)setOrientationAnimation:(int)arg1;
- (bool)shouldAnimate;

@end
