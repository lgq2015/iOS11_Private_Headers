/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitAreaAdjustments;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitAreaAdjustments;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitAreaAdjustments;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitAreaAdjustments:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
