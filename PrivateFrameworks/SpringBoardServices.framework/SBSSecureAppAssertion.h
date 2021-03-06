/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSecureAppAssertion : NSObject {
    SBSSecureAppAction * _actualAssertion;
    id /* block */  _errorHandler;
}

@property (nonatomic, retain) SBSSecureAppAction *actualAssertion;
@property (getter=_errorHandler, setter=_setErrorHandler:, nonatomic, copy) id /* block */ errorHandler;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_acquireAssertionWithSecureAppType:(unsigned long long)arg1;
- (id /* block */)_errorHandler;
- (void)_setErrorHandler:(id /* block */)arg1;
- (id)actualAssertion;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;
- (void)invalidate;
- (void)setActualAssertion:(id)arg1;

@end
