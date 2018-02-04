/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFCapabilities : NSObject {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _regionSupportsPaymentRegistration;
    bool  _regionSupportsPaymentRegistrationInitialized;
}

+ (id)sharedCapabilities;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getRegionSupportsPaymentRegistrationWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isAppleTV;
- (void)localeChanged:(id)arg1;
- (bool)supportsApplePay;

@end
