/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBListRideOptionsIntent : PBCodable <NSCopying> {
    _INPBLocation * _dropOffLocation;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _pickupLocation;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPickupLocation;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
