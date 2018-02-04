/* made by EzioChiu.
 */

@protocol SFKeyValueDataCardSection <SFCardSection>

@required

- (SFImage *)accessoryImage;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSArray *)data;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAccessoryImage:(SFImage *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
