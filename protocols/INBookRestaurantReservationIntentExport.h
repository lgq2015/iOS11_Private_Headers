/* made by EzioChiu.
 */

@protocol INBookRestaurantReservationIntentExport <NSObject, JSExport>

@required

- (NSDateComponents *)bookingDateComponents;
- (NSString *)bookingIdentifier;
- (INRestaurantGuest *)guest;
- (NSString *)guestProvidedSpecialRequestText;
- (id)init;
- (unsigned long long)partySize;
- (INRestaurant *)restaurant;
- (INRestaurantOffer *)selectedOffer;
- (void)setBookingDateComponents:(NSDateComponents *)arg1;
- (void)setBookingIdentifier:(NSString *)arg1;
- (void)setGuest:(INRestaurantGuest *)arg1;
- (void)setGuestProvidedSpecialRequestText:(NSString *)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setRestaurant:(INRestaurant *)arg1;
- (void)setSelectedOffer:(INRestaurantOffer *)arg1;

@end
