/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton> {
    SEL  _action;
    long long  _style;
    id  _target;
}

- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
- (void)_handleTap:(id)arg1;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end
