/* made by EzioChiu.
 */

@protocol _SFPBLocalImage <NSObject>

@required

- (bool)hasLocalImageType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)localImageType;
- (void)setLocalImageType:(int)arg1;

@end
