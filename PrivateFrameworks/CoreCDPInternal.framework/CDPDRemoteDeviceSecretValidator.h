/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    bool  _isWaitingForRemoteApproval;
    id /* block */  _requestToJoinCompletion;
}

- (void).cxx_destruct;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)setValidSecretHandler:(id /* block */)arg1;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;

@end
