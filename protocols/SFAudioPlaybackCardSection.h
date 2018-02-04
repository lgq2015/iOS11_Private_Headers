/* made by EzioChiu.
 */

@protocol SFAudioPlaybackCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (SFImage *)bottomImage;
- (NSString *)bottomImageEmoji;
- (SFText *)bottomSubtitle;
- (SFText *)bottomText;
- (bool)canBeHidden;
- (SFRichText *)detailText;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSArray *)playCommands;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setBottomImage:(SFImage *)arg1;
- (void)setBottomImageEmoji:(NSString *)arg1;
- (void)setBottomSubtitle:(SFText *)arg1;
- (void)setBottomText:(SFText *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetailText:(SFRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPlayCommands:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setState:(int)arg1;
- (void)setStopCommands:(NSArray *)arg1;
- (void)setSubtitle:(SFRichText *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTopImage:(SFImage *)arg1;
- (void)setTopImageEmoji:(NSString *)arg1;
- (void)setTopSecondaryText:(NSString *)arg1;
- (void)setTopText:(SFText *)arg1;
- (void)setType:(NSString *)arg1;
- (int)state;
- (NSArray *)stopCommands;
- (SFRichText *)subtitle;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (SFImage *)topImage;
- (NSString *)topImageEmoji;
- (NSString *)topSecondaryText;
- (SFText *)topText;
- (NSString *)type;

@end
