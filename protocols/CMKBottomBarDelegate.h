/* made by EzioChiu.
 */

@protocol CMKBottomBarDelegate <NSObject>

@required

- (bool)bottomBarShouldHideElapsedTimeView:(CMKBottomBar *)arg1;
- (bool)bottomBarShouldHideFlashButton:(CMKBottomBar *)arg1;
- (bool)bottomBarShouldHideHDRButton:(CMKBottomBar *)arg1;
- (bool)bottomBarShouldHideTimerButton:(CMKBottomBar *)arg1;

@end
