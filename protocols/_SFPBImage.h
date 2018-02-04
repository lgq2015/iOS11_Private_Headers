/* made by EzioChiu.
 */

@protocol _SFPBImage <NSObject>

@required

- (_SFPBAppIconImage *)appIconImage;
- (_SFPBContactImage *)contactImage;
- (NSString *)contentType;
- (_SFPBGraphicalFloat *)cornerRadius;
- (bool)hasAppIconImage;
- (bool)hasContactImage;
- (bool)hasContentType;
- (bool)hasCornerRadius;
- (bool)hasIdentifier;
- (bool)hasImageData;
- (bool)hasIsTemplate;
- (bool)hasKeyColor;
- (bool)hasLocalImage;
- (bool)hasMonogramImage;
- (bool)hasScale;
- (bool)hasShouldCropToCircle;
- (bool)hasSize;
- (bool)hasSource;
- (bool)hasType;
- (bool)hasUrlImage;
- (NSString *)identifier;
- (NSData *)imageData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isTemplate;
- (NSData *)jsonData;
- (NSString *)keyColor;
- (_SFPBLocalImage *)localImage;
- (_SFPBMonogramImage *)monogramImage;
- (_SFPBGraphicalFloat *)scale;
- (void)setAppIconImage:(_SFPBAppIconImage *)arg1;
- (void)setContactImage:(_SFPBContactImage *)arg1;
- (void)setContentType:(NSString *)arg1;
- (void)setCornerRadius:(_SFPBGraphicalFloat *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setImageData:(NSData *)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(NSString *)arg1;
- (void)setLocalImage:(_SFPBLocalImage *)arg1;
- (void)setMonogramImage:(_SFPBMonogramImage *)arg1;
- (void)setScale:(_SFPBGraphicalFloat *)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(_SFPBPointSize *)arg1;
- (void)setSource:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUrlImage:(_SFPBURLImage *)arg1;
- (bool)shouldCropToCircle;
- (_SFPBPointSize *)size;
- (int)source;
- (int)type;
- (_SFPBURLImage *)urlImage;

@end
