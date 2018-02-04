/* made by EzioChiu.
 */

@protocol SFDescriptionCardSection <SFTitleCardSection>

@required

- (SFImage *)attributionGlyph;
- (NSString *)attributionText;
- (NSURL *)attributionURL;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (bool)descriptionExpand;
- (NSNumber *)descriptionSize;
- (SFText *)descriptionText;
- (NSNumber *)descriptionWeight;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)expandText;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (SFImage *)image;
- (int)imageAlign;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAttributionGlyph:(SFImage *)arg1;
- (void)setAttributionText:(NSString *)arg1;
- (void)setAttributionURL:(NSURL *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(NSNumber *)arg1;
- (void)setDescriptionText:(SFText *)arg1;
- (void)setDescriptionWeight:(NSNumber *)arg1;
- (void)setExpandText:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(NSNumber *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (int)textAlign;
- (NSString *)title;
- (bool)titleNoWrap;
- (NSNumber *)titleWeight;
- (NSString *)type;

@end
