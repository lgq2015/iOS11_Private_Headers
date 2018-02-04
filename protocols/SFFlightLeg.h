/* made by EzioChiu.
 */

@protocol SFFlightLeg <NSObject>

@required

- (NSDate *)arrivalActualTime;
- (SFAirport *)arrivalAirport;
- (NSString *)arrivalGate;
- (NSDate *)arrivalPublishedTime;
- (NSString *)arrivalTerminal;
- (NSString *)baggageClaim;
- (NSDate *)departureActualTime;
- (SFAirport *)departureAirport;
- (NSString *)departureGate;
- (NSDate *)departurePublishedTime;
- (NSString *)departureTerminal;
- (NSDictionary *)dictionaryRepresentation;
- (SFAirport *)divertedAirport;
- (NSData *)jsonData;
- (void)setArrivalActualTime:(NSDate *)arg1;
- (void)setArrivalAirport:(SFAirport *)arg1;
- (void)setArrivalGate:(NSString *)arg1;
- (void)setArrivalPublishedTime:(NSDate *)arg1;
- (void)setArrivalTerminal:(NSString *)arg1;
- (void)setBaggageClaim:(NSString *)arg1;
- (void)setDepartureActualTime:(NSDate *)arg1;
- (void)setDepartureAirport:(SFAirport *)arg1;
- (void)setDepartureGate:(NSString *)arg1;
- (void)setDeparturePublishedTime:(NSDate *)arg1;
- (void)setDepartureTerminal:(NSString *)arg1;
- (void)setDivertedAirport:(SFAirport *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (int)status;
- (NSString *)title;

@end
