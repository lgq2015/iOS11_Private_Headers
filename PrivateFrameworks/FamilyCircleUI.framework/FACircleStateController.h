/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACircleStateController : NSObject {
    UIViewController * _presenter;
    FARequestConfigurator * _requestConfigurator;
}

@property (nonatomic) UIViewController *presenter;

- (void).cxx_destruct;
- (bool)_contextRequiresRemoteService:(id)arg1;
- (void)_ensurePresenterWithCompletion:(id /* block */)arg1;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentViewServiceWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithPresenter:(id)arg1;
- (void)performOperationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)setPresenter:(id)arg1;

@end
