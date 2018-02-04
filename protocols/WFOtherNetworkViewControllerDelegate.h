/* made by EzioChiu.
 */

@protocol WFOtherNetworkViewControllerDelegate <NSObject>

@required

- (bool)otherNetworkViewController:(WFOtherNetworkViewController *)arg1 isValidPassword:(NSString *)arg2;
- (void)otherNetworkViewControllerUserDidTapCancel:(WFOtherNetworkViewController *)arg1;
- (void)otherNetworkViewControllerUserDidTapJoin:(WFOtherNetworkViewController *)arg1;

@optional

- (void)otherNetworkViewControllerDidAppear:(WFOtherNetworkViewController *)arg1;
- (void)otherNetworkViewControllerWillDisappear:(WFOtherNetworkViewController *)arg1;

@end
