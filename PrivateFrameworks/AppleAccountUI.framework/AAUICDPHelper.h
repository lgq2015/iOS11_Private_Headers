/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICDPHelper : NSObject {
    bool  _forceInline;
    UIViewController * _presentingViewController;
}

@property (nonatomic) bool forceInline;
@property (nonatomic, readonly) UIViewController *presentingViewController;

+ (id)cdpContextForAccount:(id)arg1;
+ (id)cdpContextForPrimaryAccount;
+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
+ (id)helperWithPresenter:(id)arg1;

- (void).cxx_destruct;
- (id)cdpStateControllerForPrimaryAccount;
- (id)cdpStateControllerWithContext:(id)arg1;
- (bool)forceInline;
- (id)presentingViewController;
- (void)setForceInline:(bool)arg1;

@end
