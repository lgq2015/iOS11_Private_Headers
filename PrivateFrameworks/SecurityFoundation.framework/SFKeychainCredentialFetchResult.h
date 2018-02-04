/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFKeychainCredentialFetchResult : _SFKeychainFetchResult {
    id  _credentialFetchResult;
}

@property (readonly) SFCredential *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(id /* block */)arg2;

@end
