/* made by EzioChiu.
 */

@protocol _SFPBTextColumnsCardSection <NSObject>

@required

- (void)addColumns:(_SFPBTextColumn *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearColumns;
- (void)clearPunchoutOptions;
- (NSArray *)columns;
- (_SFPBTextColumn *)columnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnsCount;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTitle;
- (bool)hasTitleWeight;
- (bool)hasTopPadding;
- (bool)hasType;
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
- (void)setCanBeHidden:(bool)arg1;
- (void)setColumns:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleWeight:(unsigned int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)title;
- (unsigned int)titleWeight;
- (NSString *)type;

@end
