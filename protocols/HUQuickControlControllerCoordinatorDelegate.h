/* made by EzioChiu.
 */

@protocol HUQuickControlControllerCoordinatorDelegate <NSObject>

@required

- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateIconDescriptor:(id <HFIconDescriptor>)arg2 showOffState:(bool)arg3;
- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateReachability:(bool)arg2;
- (void)controllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 didUpdateStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;

@end
