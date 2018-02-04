/* made by EzioChiu.
 */

@protocol _SFPBAppLink <NSObject>

@required

- (_SFPBPunchout *)appPunchout;
- (bool)hasAppPunchout;
- (bool)hasImage;
- (bool)hasImageAlign;
- (bool)hasTitle;
- (_SFPBImage *)image;
- (int)imageAlign;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAppPunchout:(_SFPBPunchout *)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
