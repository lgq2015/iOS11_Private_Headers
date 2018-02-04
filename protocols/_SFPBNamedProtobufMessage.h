/* made by EzioChiu.
 */

@protocol _SFPBNamedProtobufMessage <NSObject>

@required

- (bool)hasProtobufMessageData;
- (bool)hasProtobufMessageName;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)protobufMessageData;
- (NSString *)protobufMessageName;
- (void)setProtobufMessageData:(NSData *)arg1;
- (void)setProtobufMessageName:(NSString *)arg1;

@end
