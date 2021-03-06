/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (id)_bridgeContextDefaultLocalCredential;
+ (bool)_bridgeNeedsToRun:(unsigned long long*)arg1;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_handlePreflightFinishedWithSuccess:(bool)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(id /* block */)arg4;
+ (bool)_macNeedsToRun:(unsigned long long*)arg1;
+ (void)_macPreflight:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1;
+ (bool)_phoneNeedsToRun:(unsigned long long*)arg1;
+ (void)_phonePreflight:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
+ (bool)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long*)arg2;

@end
