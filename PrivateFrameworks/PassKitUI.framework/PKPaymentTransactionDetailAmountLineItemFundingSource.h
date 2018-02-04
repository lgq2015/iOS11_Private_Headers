/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailAmountLineItemFundingSource : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    bool  _hasTrailingLineSeperator;
    NSString * _label;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTrailingLineSeperator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmphasized;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineItemType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (bool)hasTrailingLineSeperator;
- (id)initWithAmount:(id)arg1 credentialType:(long long)arg2 dpanSuffix:(id)arg3 cardDescription:(id)arg4;
- (id)initWithAmount:(id)arg1 paymentPass:(id)arg2;
- (bool)isEmphasized;
- (id)label;
- (unsigned long long)lineItemType;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (id)value;

@end
