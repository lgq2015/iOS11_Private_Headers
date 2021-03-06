/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFelicaAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _amount;
    NSNumber * _amountType;
    NSNumber * _balance;
    NSData * _endStation;
    NSNumber * _historySequenceNumber;
    NSNumber * _sectorCombination;
    NSData * _startStation;
    NSString * _transactionID;
    NSNumber * _transactionType;
}

@property (nonatomic, copy) NSNumber *amount;
@property (nonatomic, copy) NSNumber *amountType;
@property (nonatomic, copy) NSNumber *balance;
@property (nonatomic, copy) NSData *endStation;
@property (nonatomic, copy) NSNumber *historySequenceNumber;
@property (nonatomic, copy) NSNumber *sectorCombination;
@property (nonatomic, copy) NSData *startStation;
@property (nonatomic, copy) NSString *transactionID;
@property (nonatomic, copy) NSNumber *transactionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)amountType;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endStation;
- (id)historySequenceNumber;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)sectorCombination;
- (void)setAmount:(id)arg1;
- (void)setAmountType:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setEndStation:(id)arg1;
- (void)setHistorySequenceNumber:(id)arg1;
- (void)setSectorCombination:(id)arg1;
- (void)setStartStation:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransactionType:(id)arg1;
- (id)startStation;
- (id)transactionID;
- (id)transactionType;

@end
