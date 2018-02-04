/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForBillsIntent : PBCodable <NSCopying> {
    _INPBBillPayeeValue * _billPayee;
    int  _billType;
    _INPBDateTimeRange * _dueDateRange;
    struct { 
        unsigned int billType : 1; 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDateTimeRange * _paymentDateRange;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBBillPayeeValue *billPayee;
@property (nonatomic) int billType;
@property (nonatomic, retain) _INPBDateTimeRange *dueDateRange;
@property (nonatomic, readonly) bool hasBillPayee;
@property (nonatomic) bool hasBillType;
@property (nonatomic, readonly) bool hasDueDateRange;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPaymentDateRange;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDateTimeRange *paymentDateRange;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billPayee;
- (int)billType;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDateRange;
- (bool)hasBillPayee;
- (bool)hasBillType;
- (bool)hasDueDateRange;
- (bool)hasIntentMetadata;
- (bool)hasPaymentDateRange;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentDateRange;
- (bool)readFrom:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDueDateRange:(id)arg1;
- (void)setHasBillType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPaymentDateRange:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
