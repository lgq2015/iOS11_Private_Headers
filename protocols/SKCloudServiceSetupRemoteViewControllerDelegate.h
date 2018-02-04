/* made by EzioChiu.
 */

@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>

@required

- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 didFinishLoadingWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)cloudServiceSetupRemoteViewController:(void *)arg1 requestsDismissalWithAnimation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SKCloudServiceSetupRemoteViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudServiceSetupRemoteViewController:(void *)arg1 requestsDismissingSafariViewControllerAnimated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SKCloudServiceSetupRemoteViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudServiceSetupRemoteViewController:(void *)arg1 requestsPresentingSafariViewControllerWithURL:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SKCloudServiceSetupRemoteViewController *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)overrideCreditCardPresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCreditCardReaderOutput *, void*

@end
