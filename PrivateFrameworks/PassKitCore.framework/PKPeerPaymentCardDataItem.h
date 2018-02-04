/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass * _pass;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (void).cxx_destruct;
- (bool)isValidWithError:(id*)arg1;
- (id)pass;
- (id)quote;

@end
