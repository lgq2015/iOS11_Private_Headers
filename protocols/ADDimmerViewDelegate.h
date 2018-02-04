/* made by EzioChiu.
 */

@protocol ADDimmerViewDelegate <NSObject>

@required

- (void)dimmerView:(ADDimmerView *)arg1 didReceiveTouchUpAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)enableDimmerView:(ADDimmerView *)arg1;

@end
