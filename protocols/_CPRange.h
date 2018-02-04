/* made by EzioChiu.
 */

@protocol _CPRange <NSObject>

@required

- (bool)hasLength;
- (bool)hasLocation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)length;
- (unsigned long long)location;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;

@end
