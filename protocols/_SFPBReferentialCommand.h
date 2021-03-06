/* made by EzioChiu.
 */

@protocol _SFPBReferentialCommand <NSObject>

@required

- (bool)hasReferenceIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)referenceIdentifier;
- (void)setReferenceIdentifier:(NSString *)arg1;

@end
