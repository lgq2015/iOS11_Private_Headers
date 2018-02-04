/* made by EzioChiu.
 */

@protocol _CPSkipSearchFeedback <NSObject>

@required

- (bool)hasInput;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (void)setInput:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;

@end
