/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUItemOfferButton : SKUIItemOfferButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
