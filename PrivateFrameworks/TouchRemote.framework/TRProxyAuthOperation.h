/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRProxyAuthOperation : TROperation {
    ACAccount * _account;
    UIViewController * _presentingViewController;
    NSSet * _targetedServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (void)_handleProxyAuthenticationResponse:(id)arg1;
- (void)_handleProxyDeviceResponse:(id)arg1;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)arg1;
- (void)_sendProxyDeviceRequest;
- (id)account;
- (void)execute;
- (id)presentingViewController;
- (void)setAccount:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTargetedServices:(id)arg1;
- (id)targetedServices;

@end
