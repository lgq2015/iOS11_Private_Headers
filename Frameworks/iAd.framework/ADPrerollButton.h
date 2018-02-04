/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;

+ (id)buttonWithType:(long long)arg1;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
