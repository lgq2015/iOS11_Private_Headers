/* made by EzioChiu.
 */

@protocol CMKTopBarDelegate <NSObject>

@required

- (bool)topBarShouldHideElapsedTimeView:(CMKTopBar *)arg1;
- (bool)topBarShouldHideFlashButton:(CMKTopBar *)arg1;
- (bool)topBarShouldHideFlipButton:(CMKTopBar *)arg1;
- (bool)topBarShouldHideHDRButton:(CMKTopBar *)arg1;
- (bool)topBarShouldHideTimerButton:(CMKTopBar *)arg1;

@end
