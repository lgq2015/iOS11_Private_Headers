/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDObjectAuthorizationPromptSession : NSObject {
    NSString * _bundleIdentifier;
    NSMutableArray * _completions;
    bool  _didStartTransaction;
    HDProfile * _profile;
    NSMutableArray * _requests;
    id /* block */  _sessionCompletion;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (nonatomic, copy) id /* block */ sessionCompletion;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;

- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)arg1;
- (void)addRequest:(id)arg1;
- (void)beginPromptSessionWithCompletion:(id /* block */)arg1;
- (void)beginPromptTransactionWithCompletion:(id /* block */)arg1;
- (id)bundleIdentifier;
- (void)endPromptTransactionWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2;
- (unsigned long long)requestCount;
- (id /* block */)sessionCompletion;
- (id)sessionDescriptor;
- (id)sessionIdentifier;
- (void)setSessionCompletion:(id /* block */)arg1;
- (void)timeoutExpired;

@end
