/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {
    UIView * _fromCanvasView;
    UIView * _toCanvasView;
}

- (void).cxx_destruct;
- (void)_animateCanvasViews;
- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)_prepareCanvasViews;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)animate;
- (void)cancel;
- (void)complete;
- (double)contentViewMaxY;
- (void)prepare;
- (int)transition;

@end
