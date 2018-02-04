/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCreditCardReaderOutput : SUScriptObject <NSSecureCoding, SSXPCCoding> {
    bool  _cancelled;
    NSString * _cardCardholderName;
    NSNumber * _cardExpirationDay;
    NSNumber * _cardExpirationMonth;
    NSString * _cardExpirationStringValue;
    NSNumber * _cardExpirationYear;
    NSString * _cardNumber;
    NSError * _error;
    bool  _manualEntrySelected;
}

@property (nonatomic) bool cancelled;
@property (nonatomic, copy) NSString *cardCardholderName;
@property (nonatomic, copy) NSNumber *cardExpirationDay;
@property (nonatomic, copy) NSNumber *cardExpirationMonth;
@property (nonatomic, copy) NSString *cardExpirationStringValue;
@property (nonatomic, copy) NSNumber *cardExpirationYear;
@property (nonatomic, copy) NSString *cardNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool manualEntrySelected;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void).cxx_destruct;
- (id)attributeKeys;
- (bool)cancelled;
- (id)cardCardholderName;
- (id)cardExpirationDay;
- (id)cardExpirationMonth;
- (id)cardExpirationStringValue;
- (id)cardExpirationYear;
- (id)cardNumber;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)manualEntrySelected;
- (id)scriptAttributeKeys;
- (void)setCancelled:(bool)arg1;
- (void)setCardCardholderName:(id)arg1;
- (void)setCardExpirationDay:(id)arg1;
- (void)setCardExpirationMonth:(id)arg1;
- (void)setCardExpirationStringValue:(id)arg1;
- (void)setCardExpirationYear:(id)arg1;
- (void)setCardNumber:(id)arg1;
- (void)setError:(id)arg1;
- (void)setManualEntrySelected:(bool)arg1;

@end
