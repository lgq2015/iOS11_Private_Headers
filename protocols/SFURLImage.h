/* made by EzioChiu.
 */

@protocol SFURLImage <SFImage>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setUrlValue:(NSURL *)arg1;
- (NSURL *)urlValue;

@end
