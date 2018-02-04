/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject {
    bool  _hasTrailingLineSeperator;
}

@property (nonatomic) bool hasTrailingLineSeperator;

- (id)_feeLineItemsForFees:(id)arg1;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_unqualifiedTotalLineItemForTransaction:(id)arg1;
- (bool)hasTrailingLineSeperator;
- (id)lineItemsForTransaction:(id)arg1 pass:(id)arg2;
- (void)setHasTrailingLineSeperator:(bool)arg1;

@end
