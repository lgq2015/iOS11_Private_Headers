/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate> {
    id /* block */  _actionBlock;
    double  _duration;
    _SKUIStatusBarAlertViewController * _rootViewController;
    _SKUIClickThroughWindow * _window;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) _SKUIStatusBarAlertViewController *rootViewController;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic, readonly) _SKUIClickThroughWindow *window;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (void)dismiss;
- (double)duration;
- (id)init;
- (bool)isVisible;
- (id)message;
- (id)rootViewController;
- (void)scheduleDismiss;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setVisible:(bool)arg1;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(id /* block */)arg4;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;
- (void)unscheduleDismiss;
- (id)window;

@end
