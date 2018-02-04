/* made by EzioChiu.
 */

@protocol _SFPBFlight <NSObject>

@required

- (void)addLegs:(_SFPBFlightLeg *)arg1;
- (NSString *)carrierCode;
- (NSString *)carrierName;
- (NSString *)carrierPhoneNumber;
- (void)clearLegs;
- (NSString *)flightID;
- (NSString *)flightNumber;
- (bool)hasCarrierCode;
- (bool)hasCarrierName;
- (bool)hasCarrierPhoneNumber;
- (bool)hasFlightID;
- (bool)hasFlightNumber;
- (bool)hasOperatorCarrierCode;
- (bool)hasOperatorFlightNumber;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)legs;
- (_SFPBFlightLeg *)legsAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (NSString *)operatorCarrierCode;
- (NSString *)operatorFlightNumber;
- (void)setCarrierCode:(NSString *)arg1;
- (void)setCarrierName:(NSString *)arg1;
- (void)setCarrierPhoneNumber:(NSString *)arg1;
- (void)setFlightID:(NSString *)arg1;
- (void)setFlightNumber:(NSString *)arg1;
- (void)setLegs:(NSArray *)arg1;
- (void)setOperatorCarrierCode:(NSString *)arg1;
- (void)setOperatorFlightNumber:(NSString *)arg1;

@end
