/* made by EzioChiu.
 */

@protocol SFUserActivityInfo <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setKey:(NSString *)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setUrlValue:(NSURL *)arg1;
- (void)setValueType:(int)arg1;
- (NSString *)stringValue;
- (NSURL *)urlValue;
- (int)valueType;

@end
