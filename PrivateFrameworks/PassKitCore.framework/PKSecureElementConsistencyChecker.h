/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementConsistencyChecker : NSObject {
    <PKSecureElementConsistencyCheckerDelegate> * _delegate;
    PKPaymentWebService * _paymentWebService;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic) <PKSecureElementConsistencyCheckerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;

+ (bool)isCheckingConsistencyForSecureElementID:(id)arg1;

- (void).cxx_destruct;
- (bool)_downloadPasses;
- (void)_rescheduleWithBackoff;
- (void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2;
- (id)paymentWebService;
- (void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 registeredRegions:(id)arg3 completion:(id /* block */)arg4;
- (void)queue_startWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
