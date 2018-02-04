/* made by EzioChiu.
 */

@protocol _SFPBMetaInfoCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (_SFPBImage *)badge;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (_SFPBURL *)contentURL;
- (bool)hasBackgroundColor;
- (bool)hasBadge;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasContentURL;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasHostPageURL;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (bool)hasTrending;
- (bool)hasType;
- (_SFPBURL *)hostPageURL;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setBadge:(_SFPBImage *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentURL:(_SFPBURL *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHostPageURL:(_SFPBURL *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (bool)trending;
- (NSString *)type;

@end
