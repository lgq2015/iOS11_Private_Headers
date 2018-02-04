/* made by EzioChiu.
 */

@protocol INRestaurantReservationUserBookingExport <NSObject, JSExport>

@required

- (NSString *)advisementText;
- (NSDate *)dateStatusModified;
- (INRestaurantGuest *)guest;
- (NSString *)guestProvidedSpecialRequestText;
- (id)init;
- (INRestaurantOffer *)selectedOffer;
- (void)setAdvisementText:(NSString *)arg1;
- (void)setDateStatusModified:(NSDate *)arg1;
- (void)setGuest:(INRestaurantGuest *)arg1;
- (void)setGuestProvidedSpecialRequestText:(NSString *)arg1;
- (void)setSelectedOffer:(INRestaurantOffer *)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
