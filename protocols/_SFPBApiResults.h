/* made by EzioChiu.
 */

@protocol _SFPBApiResults <NSObject>

@required

- (void)addFlights:(_SFPBFlight *)arg1;
- (void)clearFlights;
- (NSArray *)flights;
- (_SFPBFlight *)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (bool)hasResultType;
- (bool)hasStatus;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)resultType;
- (void)setFlights:(NSArray *)arg1;
- (void)setResultType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
