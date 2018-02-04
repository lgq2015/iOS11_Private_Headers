/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentRecord : NSObject <INCacheableContainer, INPaymentRecordExport, NSCopying, NSSecureCoding> {
    INCurrencyAmount * _currencyAmount;
    INCurrencyAmount * _feeAmount;
    NSString * _note;
    INPerson * _payee;
    INPerson * _payer;
    INPaymentMethod * _paymentMethod;
    long long  _status;
}

@property (nonatomic, readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INCurrencyAmount *feeAmount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) INPerson *payee;
@property (nonatomic, readonly, copy) INPerson *payer;
@property (nonatomic, readonly, copy) INPaymentMethod *paymentMethod;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)feeAmount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)note;
- (id)payee;
- (id)payer;
- (id)paymentMethod;
- (long long)status;

@end
