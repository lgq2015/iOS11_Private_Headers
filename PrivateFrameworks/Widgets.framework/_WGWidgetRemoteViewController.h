/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC> {
    WGWidgetHostingViewController * _managingHost;
    NSObject<OS_dispatch_queue> * _managingHostQueue;
    bool  _valid;
}

@property (nonatomic) WGWidgetHostingViewController *managingHost;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *managingHostQueue;
@property (getter=_isValid, setter=_setValid:, nonatomic) bool valid;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__setLargestAvailableDisplayMode:(long long)arg1;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (bool)_isValid;
- (void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)_performUpdateWithReplyHandler:(id /* block */)arg1;
- (void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (bool)_serviceHasScrollToTopView;
- (void)_setActiveDisplayMode:(long long)arg1;
- (void)_setMaximumSize:(struct CGSize { double x1; double x2; })arg1 forDisplayMode:(long long)arg2;
- (void)_setValid:(bool)arg1;
- (void)_updateVisibilityState:(long long)arg1;
- (void)_updateVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withReplyHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)disconnect;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)managingHost;
- (id)managingHostQueue;
- (void)setManagingHost:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
