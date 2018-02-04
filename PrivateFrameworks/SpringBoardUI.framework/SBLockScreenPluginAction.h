/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginAction : NSObject {
    BSAction * _action;
    long long  _authenticationPolicy;
    id /* block */  _completion;
    NSString * _label;
}

@property (nonatomic) long long authenticationPolicy;
@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, copy) NSString *label;

+ (id)action;
+ (id)actionWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (long long)authenticationPolicy;
- (id /* block */)completion;
- (id)init;
- (id)initWithCompletion:(id /* block */)arg1;
- (bool)isApplicationAction;
- (bool)isCallAction;
- (bool)isEmergencyDialerAction;
- (bool)isInCallAction;
- (id)label;
- (void)sendResponseWithSuccess:(bool)arg1;
- (void)setAuthenticationPolicy:(long long)arg1;
- (void)setLabel:(id)arg1;

@end
