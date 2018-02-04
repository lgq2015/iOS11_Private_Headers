/* made by EzioChiu.
 */

@protocol NULayout <NSObject>

@required

- (void)layoutComponentsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originOffset:(struct CGPoint { double x1; double x2; })arg2 layoutContext:(id <NULayoutContext>)arg3;
- (struct CGPoint { double x1; double x2; })originOffset;

@end
