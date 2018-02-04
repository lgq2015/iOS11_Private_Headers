/* made by EzioChiu.
 */

@protocol _CPConnectionInvalidatedFeedback <NSObject>

@required

- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
