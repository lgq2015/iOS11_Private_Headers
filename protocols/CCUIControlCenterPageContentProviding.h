/* made by EzioChiu.
 */

@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>

@required

- (<CCUIControlCenterPageContentViewControllerDelegate> *)delegate;
- (void)setDelegate:(id <CCUIControlCenterPageContentViewControllerDelegate>)arg1;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)controlCenterDidScrollToThisPage:(bool)arg1;
- (bool)dismissModalFullScreenIfNeeded;
- (bool)wantsVisible;

@end
