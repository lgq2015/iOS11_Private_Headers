/* made by EzioChiu.
 */

@protocol _CPStartLocalSearchFeedback <NSObject>

@required

- (bool)hasIndexType;
- (bool)hasInput;
- (bool)hasQueryId;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (bool)hasUuid;
- (int)indexType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (unsigned long long)queryId;
- (void)setIndexType:(int)arg1;
- (void)setInput:(NSString *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (NSString *)uuid;

@end
