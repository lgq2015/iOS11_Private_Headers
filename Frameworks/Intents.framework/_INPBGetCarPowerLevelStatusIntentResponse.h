/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <NSCopying> {
    _INPBDouble * _chargePercentRemaining;
    _INPBDistance * _distanceRemaining;
    _INPBDouble * _fuelPercentRemaining;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDouble *chargePercentRemaining;
@property (nonatomic, retain) _INPBDistance *distanceRemaining;
@property (nonatomic, retain) _INPBDouble *fuelPercentRemaining;
@property (nonatomic, readonly) bool hasChargePercentRemaining;
@property (nonatomic, readonly) bool hasDistanceRemaining;
@property (nonatomic, readonly) bool hasFuelPercentRemaining;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)chargePercentRemaining;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceRemaining;
- (id)fuelPercentRemaining;
- (bool)hasChargePercentRemaining;
- (bool)hasDistanceRemaining;
- (bool)hasFuelPercentRemaining;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargePercentRemaining:(id)arg1;
- (void)setDistanceRemaining:(id)arg1;
- (void)setFuelPercentRemaining:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
