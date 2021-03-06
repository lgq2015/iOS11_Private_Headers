/* made by EzioChiu.
 */

@protocol SXMediaSelectionControllerDataSource <NSObject>

@required

- (AVMediaSelectionGroup *)mediaSelectionController:(SXMediaSelectionController *)arg1 mediaSelectionGroupWithCharacteristic:(NSString *)arg2;
- (AVMediaSelectionOption *)mediaSelectionController:(SXMediaSelectionController *)arg1 preferredMediaSelectionOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)arg2;
- (AVMediaSelectionOption *)mediaSelectionController:(SXMediaSelectionController *)arg1 selectedMediaSelectionOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)arg2;

@end
