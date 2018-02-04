/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport> {
    NSDate * _defaultBookingDate;
    unsigned long long  _defaultPartySize;
    NSNumber * _maximumPartySize;
    NSNumber * _minimumPartySize;
    INImage * _providerImage;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDate *defaultBookingDate;
@property (nonatomic, readonly) unsigned long long defaultPartySize;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maximumPartySize;
@property (nonatomic, retain) NSNumber *minimumPartySize;
@property (nonatomic, copy) INImage *providerImage;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (long long)code;
- (id)defaultBookingDate;
- (unsigned long long)defaultPartySize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)maximumPartySize;
- (id)minimumPartySize;
- (id)providerImage;
- (void)setMaximumPartySize:(id)arg1;
- (void)setMinimumPartySize:(id)arg1;
- (void)setProviderImage:(id)arg1;

@end
