/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest {
    PKPeerPaymentPreferences * _peerPaymentPreferences;
}

@property (nonatomic, retain) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)initWithPeerPaymentPreferences:(id)arg1;
- (id)peerPaymentPreferences;
- (void)setPeerPaymentPreferences:(id)arg1;

@end
