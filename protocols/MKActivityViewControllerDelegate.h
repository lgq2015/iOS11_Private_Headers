/* made by EzioChiu.
 */

@protocol MKActivityViewControllerDelegate <NSObject>

@required

- (void)mapkitActivityViewController:(MKActivityViewController *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(MKActivityViewController *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;

@end
