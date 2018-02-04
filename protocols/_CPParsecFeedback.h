/* made by EzioChiu.
 */

@protocol _CPParsecFeedback <NSObject>

@required

- (bool)hasParsecDeveloperID;
- (bool)hasPayload;
- (bool)hasQueryId;
- (bool)hasRelTimestamp;
- (bool)hasUserAgent;
- (bool)hasUserGuid;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)parsecDeveloperID;
- (_CPFeedbackPayload *)payload;
- (unsigned long long)queryId;
- (unsigned long long)relTimestamp;
- (void)setParsecDeveloperID:(NSString *)arg1;
- (void)setPayload:(_CPFeedbackPayload *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRelTimestamp:(unsigned long long)arg1;
- (void)setUserAgent:(NSString *)arg1;
- (void)setUserGuid:(NSString *)arg1;
- (NSString *)userAgent;
- (NSString *)userGuid;

@end
