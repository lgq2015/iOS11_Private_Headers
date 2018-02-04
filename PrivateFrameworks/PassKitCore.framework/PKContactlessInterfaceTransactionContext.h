/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceTransactionContext : NSObject {
    NSDate * _date;
    PKFelicaAppletHistory * _felicaHistory;
    PKPaymentApplication * _paymentApplication;
    PKPaymentPass * _paymentPass;
    bool  _success;
    PKPaymentTransaction * _transaction;
    NSArray * _valueAddedServicePasses;
    NSArray * _valueAddedServiceTransactions;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) PKFelicaAppletHistory *felicaHistory;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic) bool success;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic, retain) NSArray *valueAddedServicePasses;
@property (nonatomic, retain) NSArray *valueAddedServiceTransactions;

- (void).cxx_destruct;
- (id)date;
- (id)felicaHistory;
- (id)paymentApplication;
- (id)paymentPass;
- (void)setDate:(id)arg1;
- (void)setFelicaHistory:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setValueAddedServicePasses:(id)arg1;
- (void)setValueAddedServiceTransactions:(id)arg1;
- (bool)success;
- (id)transaction;
- (id)valueAddedServicePasses;
- (id)valueAddedServiceTransactions;

@end
