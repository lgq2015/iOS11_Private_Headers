/* made by EzioChiu.
 */

@protocol AVRoutePickerViewDelegate <NSObject>

@optional

- (void)routePickerViewDidEndPresentingRoutes:(AVRoutePickerView *)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(AVRoutePickerView *)arg1;

@end
