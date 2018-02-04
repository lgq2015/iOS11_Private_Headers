/* made by EzioChiu.
 */

@protocol WGWidgetHostingViewControllerDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })maxSizeForWidget:(WGWidgetHostingViewController *)arg1 forDisplayMode:(long long)arg2;

@optional

- (long long)activeLayoutModeForWidget:(WGWidgetHostingViewController *)arg1;
- (void)brokenViewDidAppearForWidget:(WGWidgetHostingViewController *)arg1;
- (void)contentAvailabilityDidChangeForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)managingContainerIsVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsetsForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerDidConnectForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(WGWidgetHostingViewController *)arg1;
- (bool)shouldRequestWidgetRemoteViewControllers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (id /* block */)widget:(void *)arg1 didUpdatePreferredHeight:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 12: id /* block */, void*, id, SEL, WGWidgetHostingViewController *, double, id /* block */, void*, void, id /* block */, bool, void*

@end
