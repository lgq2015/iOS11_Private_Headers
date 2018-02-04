/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayBillIntent : PBCodable <NSCopying> {
    _INPBBillPayeeValue * _billPayee;
    int  _billType;
    _INPBDateTimeRange * _dueDate;
    _INPBFinancialAccountValue * _fromAccount;
    struct { 
        unsigned int billType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBPaymentAmountValue * _transactionAmount;
    _INPBString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBBillPayeeValue *billPayee;
@property (nonatomic) int billType;
@property (nonatomic, retain) _INPBDateTimeRange *dueDate;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasBillPayee;
@property (nonatomic) bool hasBillType;
@property (nonatomic, readonly) bool hasDueDate;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, retain) _INPBString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (id)billPayee;
- (int)billType;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (id)fromAccount;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDate;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDate:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
