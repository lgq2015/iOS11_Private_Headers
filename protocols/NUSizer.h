/* made by EzioChiu.
 */

@protocol NUSizer <NSObject>

@required

- (bool)flexible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cursor:(double)arg2 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg3 layoutContext:(id <NULayoutContext>)arg4;

@end
