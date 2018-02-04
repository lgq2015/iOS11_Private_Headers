/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideDriver : PBCodable <NSCopying> {
    _INPBContactValue * _person;
    NSString * _phoneNumber;
    NSString * _rating;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasRating;
@property (nonatomic, retain) _INPBContactValue *person;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *rating;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPerson;
- (bool)hasPhoneNumber;
- (bool)hasRating;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)person;
- (id)phoneNumber;
- (id)rating;
- (bool)readFrom:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRating:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
