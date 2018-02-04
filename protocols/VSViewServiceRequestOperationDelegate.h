/* made by EzioChiu.
 */

@protocol VSViewServiceRequestOperationDelegate <NSObject>

@required

- (void)viewServiceRequestOperation:(VSViewServiceRequestOperation *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)viewServiceRequestOperation:(VSViewServiceRequestOperation *)arg1 presentViewController:(UIViewController *)arg2;
- (bool)viewServiceRequestOperation:(VSViewServiceRequestOperation *)arg1 shouldAuthenticateAccountProviderWithIdentifier:(NSString *)arg2;

@end