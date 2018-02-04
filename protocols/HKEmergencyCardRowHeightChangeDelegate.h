/* made by EzioChiu.
 */

@protocol HKEmergencyCardRowHeightChangeDelegate

@required

- (void)tableItem:(HKEmergencyCardTableItem *)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(UIView *)arg4;
- (void)tableItemDidBeginEditing:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(UIView *)arg3;
- (void)tableItemDidChangeSelection:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(UIView *)arg3;

@end
