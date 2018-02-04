/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideOption : PBCodable <NSCopying> {
    NSMutableArray * _availablePartySizeOptions;
    NSString * _availablePartySizeOptionsSelectionPrompt;
    NSString * _disclaimerMessage;
    _INPBTimestamp * _estimatedPickupDate;
    NSMutableArray * _fareLineItems;
    struct { 
        unsigned int usesMeteredFare : 1; 
    }  _has;
    NSString * _name;
    _INPBPriceRangeValue * _priceRange;
    NSString * _specialPricing;
    _INPBImageValue * _specialPricingBadgeImage;
    NSString * _subtitle;
    PBUnknownFields * _unknownFields;
    _INPBUserActivity * _userActivityForBookingInApplication;
    bool  _usesMeteredFare;
}

@property (nonatomic, retain) NSMutableArray *availablePartySizeOptions;
@property (nonatomic, retain) NSString *availablePartySizeOptionsSelectionPrompt;
@property (nonatomic, retain) NSString *disclaimerMessage;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, retain) NSMutableArray *fareLineItems;
@property (nonatomic, readonly) bool hasAvailablePartySizeOptionsSelectionPrompt;
@property (nonatomic, readonly) bool hasDisclaimerMessage;
@property (nonatomic, readonly) bool hasEstimatedPickupDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPriceRange;
@property (nonatomic, readonly) bool hasSpecialPricing;
@property (nonatomic, readonly) bool hasSpecialPricingBadgeImage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasUserActivityForBookingInApplication;
@property (nonatomic) bool hasUsesMeteredFare;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) _INPBPriceRangeValue *priceRange;
@property (nonatomic, retain) NSString *specialPricing;
@property (nonatomic, retain) _INPBImageValue *specialPricingBadgeImage;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBUserActivity *userActivityForBookingInApplication;
@property (nonatomic) bool usesMeteredFare;

+ (Class)availablePartySizeOptionsType;
+ (Class)fareLineItemsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addAvailablePartySizeOptions:(id)arg1;
- (void)addFareLineItems:(id)arg1;
- (id)availablePartySizeOptions;
- (id)availablePartySizeOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availablePartySizeOptionsCount;
- (id)availablePartySizeOptionsSelectionPrompt;
- (void)clearAvailablePartySizeOptions;
- (void)clearFareLineItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disclaimerMessage;
- (id)estimatedPickupDate;
- (id)fareLineItems;
- (id)fareLineItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fareLineItemsCount;
- (bool)hasAvailablePartySizeOptionsSelectionPrompt;
- (bool)hasDisclaimerMessage;
- (bool)hasEstimatedPickupDate;
- (bool)hasName;
- (bool)hasPriceRange;
- (bool)hasSpecialPricing;
- (bool)hasSpecialPricingBadgeImage;
- (bool)hasSubtitle;
- (bool)hasUserActivityForBookingInApplication;
- (bool)hasUsesMeteredFare;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)priceRange;
- (bool)readFrom:(id)arg1;
- (void)setAvailablePartySizeOptions:(id)arg1;
- (void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
- (void)setDisclaimerMessage:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setFareLineItems:(id)arg1;
- (void)setHasUsesMeteredFare:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSpecialPricing:(id)arg1;
- (void)setSpecialPricingBadgeImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setUserActivityForBookingInApplication:(id)arg1;
- (void)setUsesMeteredFare:(bool)arg1;
- (id)specialPricing;
- (id)specialPricingBadgeImage;
- (id)subtitle;
- (id)unknownFields;
- (id)userActivityForBookingInApplication;
- (bool)usesMeteredFare;
- (void)writeTo:(id)arg1;

@end
