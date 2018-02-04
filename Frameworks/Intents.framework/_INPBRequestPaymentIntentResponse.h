/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRequestPaymentIntentResponse : PBCodable <NSCopying> {
    _INPBPaymentRecord * _paymentRecord;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPaymentRecord;
@property (nonatomic, retain) _INPBPaymentRecord *paymentRecord;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentRecord;
- (bool)readFrom:(id)arg1;
- (void)setPaymentRecord:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
