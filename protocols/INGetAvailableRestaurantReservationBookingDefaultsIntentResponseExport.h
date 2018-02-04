/* made by EzioChiu.
 */

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject, JSExport>

@required

- (NSDate *)defaultBookingDate;
- (unsigned long long)defaultPartySize;
- (id)init;
- (NSNumber *)maximumPartySize;
- (NSNumber *)minimumPartySize;
- (INImage *)providerImage;
- (void)setMaximumPartySize:(NSNumber *)arg1;
- (void)setMinimumPartySize:(NSNumber *)arg1;
- (void)setProviderImage:(INImage *)arg1;

@end
