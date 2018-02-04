/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentTransactionDetails : NSObject {
    NSArray * _availableActions;
    NSDate * _availableActionsFetchDate;
    unsigned long long  _paymentStatus;
    NSString * _serviceIdentifier;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) NSArray *availableActions;
@property (nonatomic, retain) NSDate *availableActionsFetchDate;
@property (nonatomic) unsigned long long paymentStatus;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)availableActions;
- (id)availableActionsFetchDate;
- (id)description;
- (unsigned long long)paymentStatus;
- (id)serviceIdentifier;
- (void)setAvailableActions:(id)arg1;
- (void)setAvailableActionsFetchDate:(id)arg1;
- (void)setPaymentStatus:(unsigned long long)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
