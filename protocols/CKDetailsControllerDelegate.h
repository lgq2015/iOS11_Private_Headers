/* made by EzioChiu.
 */

@protocol CKDetailsControllerDelegate <NSObject>

@required

- (void)detailsControllerDidDismiss:(CKDetailsController *)arg1;
- (void)detailsControllerWillDismiss:(CKDetailsController *)arg1;

@end
