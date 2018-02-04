/* made by EzioChiu.
 */

@protocol _CPError <NSObject>

@required

- (double)code;
- (NSString *)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (bool)hasReason;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)reason;
- (void)setCode:(double)arg1;
- (void)setDomain:(NSString *)arg1;
- (void)setReason:(NSString *)arg1;

@end
