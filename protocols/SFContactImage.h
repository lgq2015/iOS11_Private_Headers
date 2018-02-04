/* made by EzioChiu.
 */

@protocol SFContactImage <SFImage>

@required

- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;

@end
