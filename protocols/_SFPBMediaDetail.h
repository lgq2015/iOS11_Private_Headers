/* made by EzioChiu.
 */

@protocol _SFPBMediaDetail <NSObject>

@required

- (_SFPBText *)content;
- (bool)hasContent;
- (bool)hasTitle;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContent:(_SFPBText *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
