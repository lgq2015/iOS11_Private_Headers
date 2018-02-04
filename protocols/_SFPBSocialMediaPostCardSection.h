/* made by EzioChiu.
 */

@protocol _SFPBSocialMediaPostCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (NSString *)footnote;
- (NSString *)handle;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasFootnote;
- (bool)hasHandle;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasName;
- (bool)hasNameMaxLines;
- (bool)hasNameNoWrap;
- (bool)hasPicture;
- (bool)hasPost;
- (bool)hasProfilePicture;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTimestamp;
- (bool)hasTopPadding;
- (bool)hasType;
- (bool)hasVerifiedGlyph;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)name;
- (int)nameMaxLines;
- (bool)nameNoWrap;
- (_SFPBImage *)picture;
- (_SFPBRichText *)post;
- (_SFPBImage *)profilePicture;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setNameMaxLines:(int)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(_SFPBImage *)arg1;
- (void)setPost:(_SFPBRichText *)arg1;
- (void)setProfilePicture:(_SFPBImage *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTimestamp:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerifiedGlyph:(_SFPBImage *)arg1;
- (NSString *)timestamp;
- (NSString *)type;
- (_SFPBImage *)verifiedGlyph;

@end
