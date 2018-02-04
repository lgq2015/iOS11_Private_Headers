/* made by EzioChiu.
 */

@protocol _SFPBText <NSObject>

@required

- (bool)hasMaxLines;
- (bool)hasText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned int)maxLines;
- (void)setMaxLines:(unsigned int)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@end
