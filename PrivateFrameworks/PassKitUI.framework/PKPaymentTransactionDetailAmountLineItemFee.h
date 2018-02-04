/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailAmountLineItemFee : NSObject <PKPaymentTransactionDetailAmountLineItem> {
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
- (id)initWithFeeItem:(id)arg1;
- (bool)isEmphasized;
- (id)label;
- (unsigned long long)lineItemType;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (id)value;

@end
