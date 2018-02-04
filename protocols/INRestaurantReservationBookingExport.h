/* made by EzioChiu.
 */

@protocol INRestaurantReservationBookingExport <NSObject, JSExport>

@required

- (NSDate *)bookingDate;
- (NSString *)bookingDescription;
- (NSString *)bookingIdentifier;
- (id)init;
- (bool)isBookingAvailable;
- (NSArray *)offers;
- (unsigned long long)partySize;
- (bool)requiresEmailAddress;
- (bool)requiresManualRequest;
- (bool)requiresName;
- (bool)requiresPhoneNumber;
- (INRestaurant *)restaurant;
- (void)setBookingAvailable:(bool)arg1;
- (void)setBookingDate:(NSDate *)arg1;
- (void)setBookingDescription:(NSString *)arg1;
- (void)setBookingIdentifier:(NSString *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setRequiresEmailAddress:(bool)arg1;
- (void)setRequiresManualRequest:(bool)arg1;
- (void)setRequiresName:(bool)arg1;
- (void)setRequiresPhoneNumber:(bool)arg1;
- (void)setRestaurant:(INRestaurant *)arg1;

@end
