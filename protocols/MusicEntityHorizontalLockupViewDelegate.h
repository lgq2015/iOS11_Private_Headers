/* made by EzioChiu.
 */

@protocol MusicEntityHorizontalLockupViewDelegate <NSObject>

@optional

- (void)horizontalLockupViewDidLayoutSubviews:(MusicEntityHorizontalLockupView *)arg1;
- (void)horizontalLockupViewDidSelectAddButton:(MusicEntityHorizontalLockupView *)arg1 events:(unsigned long long)arg2;
- (bool)horizontalLockupViewShouldLayoutAsEditing:(MusicEntityHorizontalLockupView *)arg1;

@end
