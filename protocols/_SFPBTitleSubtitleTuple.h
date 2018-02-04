/* made by EzioChiu.
 */

@protocol _SFPBTitleSubtitleTuple <NSObject>

@required

- (bool)hasSubtitle;
- (bool)hasTitle;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
