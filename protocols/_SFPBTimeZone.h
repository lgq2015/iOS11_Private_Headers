/* made by EzioChiu.
 */

@protocol _SFPBTimeZone <NSObject>

@required

- (bool)hasIdentifier;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setIdentifier:(NSString *)arg1;

@end
