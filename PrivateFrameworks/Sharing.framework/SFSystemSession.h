/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSystemSession : NSObject {
    bool  _allowUnencrypted;
    SFSessionRequestInfo * _currentRequest;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _pairVerifyDone;
    SFDevice * _peerDevice;
    struct NSMutableArray { Class x1; } * _requests;
    SFSession * _sfSession;
    int  _state;
    bool  _stateDone;
    NSError * _stateError;
}

@property (nonatomic) bool allowUnencrypted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFDevice *peerDevice;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_processRequests;
- (void)_processRequestsWithError:(id)arg1;
- (void)_run;
- (void)_runPairVerifyStart;
- (void)_runSFSessionStart;
- (void)activate;
- (bool)allowUnencrypted;
- (id)dispatchQueue;
- (void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)getProfilesWithCompletion:(id /* block */)arg1;
- (void)getSystemInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)installProfileWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)installProfileWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (id)peerDevice;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setAllowUnencrypted:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;

@end
