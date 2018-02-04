/* made by EzioChiu.
 */

@protocol _CPSessionEndFeedback <NSObject>

@required

- (bool)hasReason;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)reason;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
