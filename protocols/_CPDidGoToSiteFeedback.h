/* made by EzioChiu.
 */

@protocol _CPDidGoToSiteFeedback <NSObject>

@required

- (bool)hasInput;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (void)setInput:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
