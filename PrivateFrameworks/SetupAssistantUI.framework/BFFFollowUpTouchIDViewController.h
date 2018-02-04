/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFollowUpTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {
    UIBarButtonItem * _cancelLeftNavigationItem;
    id /* block */  _completion;
    bool  _enrollComplete;
    BiometricKitUIEnrollViewController * _enrollController;
    BiometricKitIdentity * _identity;
    NSString * _passcode;
    UIBarButtonItem * _previousLeftNavigationItem;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *passcode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cancelLeftNavigationItem;
- (void)_didCompleteMesaControllerWithResult:(unsigned long long)arg1;
- (void)_userDidTapCancelButton:(id)arg1;
- (void)beginEnrollment;
- (id /* block */)completion;
- (void)dealloc;
- (void)deleteIdentity;
- (void)didBecomeActive:(id)arg1;
- (void)didResignActive:(id)arg1;
- (void)endEnrollment;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEnrollmentController;
- (id)init;
- (void)loadView;
- (id)passcode;
- (void)resetLeftNavigationItem;
- (void)restartEnrollment;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPasscode:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
