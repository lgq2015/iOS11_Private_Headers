/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAuthenticationRequest : NSObject {
    id /* block */  _handler;
    NSString * _passcode;
    long long  _source;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *passcode;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 source:(long long)arg2 passcode:(id)arg3 handler:(id /* block */)arg4;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id /* block */)handler;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1 handler:(id /* block */)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(id /* block */)arg3;
- (id)passcode;
- (id)publicDescription;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)type;

@end
