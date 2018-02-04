/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPendingPaymentTransaction : NSObject {
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3;
- (id)pass;
- (id)paymentApplication;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
