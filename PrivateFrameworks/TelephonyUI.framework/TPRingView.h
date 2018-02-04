/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPRingView : UIView {
    CALayer * _dodgeRingLayer;
    CALayer * _highlightDodgeLayer;
    CALayer * _highlightLuminanceLayer;
    CALayer * _luminanceRingLayer;
    CALayer * _selectionLayer;
}

@property (retain) CALayer *dodgeRingLayer;
@property (retain) CALayer *highlightDodgeLayer;
@property (retain) CALayer *highlightLuminanceLayer;
@property (retain) CALayer *luminanceRingLayer;
@property (retain) CALayer *selectionLayer;

+ (id)colorForDodge;
+ (id)colorForLuminance;
+ (id)createRingImageWithSize:(struct CGSize { double x1; double x2; })arg1 strokeWidth:(double)arg2 color:(id)arg3;
+ (double)ringCornerRadius;
+ (id)ringImageForDodge;
+ (id)ringImageForLuminance;
+ (struct CGSize { double x1; double x2; })ringSize;
+ (double)ringStroke;

- (void).cxx_destruct;
- (id)dodgeRingLayer;
- (id)highlightDodgeLayer;
- (id)highlightLuminanceLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)luminanceRingLayer;
- (id)selectionLayer;
- (void)setDodgeRingLayer:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlightDodgeLayer:(id)arg1;
- (void)setHighlightLuminanceLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLuminanceRingLayer:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;

@end
