/* made by EzioChiu.
 */

@protocol PKPaymentVerificationControllerDelegate <NSObject>

@required

- (void)presentVerificationViewController:(UIViewController *)arg1 animated:(bool)arg2;

@optional

- (void)didChangeVerificationPresentation;

@end
