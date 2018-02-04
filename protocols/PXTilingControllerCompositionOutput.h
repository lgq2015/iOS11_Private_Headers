/* made by EzioChiu.
 */

@protocol PXTilingControllerCompositionOutput <NSObject>

@required

- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scrollBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollInfo:(PXTilingScrollInfo *)arg3;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 forTilingController:(PXTilingController *)arg2;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 forTilingController:(PXTilingController *)arg3;

@end
