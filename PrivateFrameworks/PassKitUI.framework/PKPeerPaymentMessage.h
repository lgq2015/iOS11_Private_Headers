/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentMessage : NSObject {
    PKProtobufPeerPaymentMessage * _protoMessage;
    MSMessage * _underlyingMessage;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) PKCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) bool hasBeenSent;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *memo;
@property (nonatomic, copy) NSString *paymentIdentifier;
@property (nonatomic, copy) NSString *recipientAddress;
@property (nonatomic, copy) PKPeerPaymentRequestToken *requestToken;
@property (nonatomic, copy) NSString *senderAddress;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) MSMessage *underlyingMessage;

- (void).cxx_destruct;
- (id)_requestDeviceScoreIdentifier;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (void)_updateSummaryText;
- (id)amount;
- (id)currency;
- (id)currencyAmount;
- (id)description;
- (bool)hasBeenSent;
- (id)identifier;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 session:(id)arg2;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)memo;
- (id)paymentIdentifier;
- (id)recipientAddress;
- (id)requestToken;
- (id)senderAddress;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setMemo:(id)arg1;
- (void)setPaymentIdentifier:(id)arg1;
- (void)setRecipientAddress:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)transactionIdentifier;
- (unsigned long long)type;
- (id)underlyingMessage;
- (void)updateWithPeerPaymentPerformResponse:(id)arg1;

@end
