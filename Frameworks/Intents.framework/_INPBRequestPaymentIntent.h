/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRequestPaymentIntent : PBCodable <NSCopying> {
    _INPBCurrencyAmount * _currencyAmount;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _note;
    _INPBContact * _payer;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasPayer;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBString *note;
@property (nonatomic, retain) _INPBContact *payer;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyAmount;
- (bool)hasIntentMetadata;
- (bool)hasNote;
- (bool)hasPayer;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)note;
- (id)payer;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setPayer:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
