/* made by EzioChiu.
 */

@protocol _SFPBButton <NSObject>

@required

- (bool)hasImage;
- (bool)hasIsSelected;
- (bool)hasSelectedImage;
- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isSelected;
- (NSData *)jsonData;
- (_SFPBImage *)selectedImage;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelectedImage:(_SFPBImage *)arg1;

@end
