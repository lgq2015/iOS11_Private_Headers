/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFlatVideoOverlayButton : UIButton <SXVideoOverlayButton> {
    SEL  _action;
    int  _state;
    long long  _style;
    id  _target;
}

@property (nonatomic) int state;

- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 glyphMaskImageName:(id)arg4;
- (void)_handleTap:(id)arg1;
- (id)_highlightedButtonImage;
- (id)_highlightedFailedButtonImage;
- (id)_normalButtonImage;
- (id)_normalFailedButtonImage;
- (id)initWithStyle:(long long)arg1;
- (void)recalculateBackdropView;
- (void)setState:(int)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (int)state;
- (long long)style;

@end
