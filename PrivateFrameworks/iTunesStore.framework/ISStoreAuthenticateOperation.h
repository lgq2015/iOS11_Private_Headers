/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
    SSAuthenticateResponse * _authenticateResponse;
    SSMutableAuthenticationContext * _authenticationContext;
    id  parentViewController;
}

@property (readonly) SSAuthenticateResponse *authenticateResponse;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) id parentViewController;
@property (readonly) Class superclass;

- (void)_handleAuthenticateResponse:(id)arg1;
- (id)authenticateResponse;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)parentViewController;
- (void)run;
- (void)setParentViewController:(id)arg1;
- (id)uniqueKey;

@end
