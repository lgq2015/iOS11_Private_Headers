/* made by EzioChiu.
 */

@protocol _SFPBContactImage <NSObject>

@required

- (NSString *)contactIdentifier;
- (bool)hasContactIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;

@end
