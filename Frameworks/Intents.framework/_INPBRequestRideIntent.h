/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRequestRideIntent : PBCodable <NSCopying> {
    _INPBLocation * _dropOffLocation;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _partySize;
    _INPBPaymentMethod * _paymentMethod;
    _INPBLocation * _pickupLocation;
    _INPBDataString * _rideOptionName;
    _INPBDateTimeRange * _scheduledPickupTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPartySize;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, readonly) bool hasRideOptionName;
@property (nonatomic, readonly) bool hasScheduledPickupTime;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *partySize;
@property (nonatomic, retain) _INPBPaymentMethod *paymentMethod;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (nonatomic, retain) _INPBDataString *rideOptionName;
@property (nonatomic, retain) _INPBDateTimeRange *scheduledPickupTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPartySize;
- (bool)hasPaymentMethod;
- (bool)hasPickupLocation;
- (bool)hasRideOptionName;
- (bool)hasScheduledPickupTime;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partySize;
- (id)paymentMethod;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (id)rideOptionName;
- (id)scheduledPickupTime;
- (void)setDropOffLocation:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
