/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding> {
    bool  _activated;
    SBFUserAuthenticationController * _controller;
    NSString * _identifier;
    bool  _invalidated;
    long long  _type;
}

@property (nonatomic, readonly) SBFUserAuthenticationController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)activate;
- (id)controller;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)publicDescription;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
