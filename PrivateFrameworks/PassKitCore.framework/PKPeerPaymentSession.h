/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentSession : PKPaymentSession

- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3;
- (bool)deleteApplet;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end
