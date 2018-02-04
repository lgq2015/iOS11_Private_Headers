/* made by EzioChiu.
 */

@protocol MFComposeHeaderViewDelegate <NSObject>

@optional

- (void)composeHeaderView:(MFComposeHeaderView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeHeaderViewClicked:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidChangeValue:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidConfirmValue:(MFComposeHeaderView *)arg1;

@end
