/* made by EzioChiu.
 */

@protocol CMKExpandableMenuButtonDelegate

@required

- (void)collapseMenuButton:(CMKExpandableMenuButton *)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(CMKExpandableMenuButton *)arg1;
- (void)expandMenuButton:(CMKExpandableMenuButton *)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(CMKExpandableMenuButton *)arg1;

@end
