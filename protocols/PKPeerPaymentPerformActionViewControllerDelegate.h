/* made by EzioChiu.
 */

@protocol PKPeerPaymentPerformActionViewControllerDelegate <NSObject>

@required

- (void)peerPaymentPerformActionViewControllerDidCancel:(PKPeerPaymentPerformActionViewController *)arg1;
- (void)peerPaymentPerformActionViewControllerDidPerformAction:(PKPeerPaymentPerformActionViewController *)arg1;

@end
