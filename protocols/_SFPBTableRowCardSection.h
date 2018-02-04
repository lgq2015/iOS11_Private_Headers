/* made by EzioChiu.
 */

@protocol _SFPBTableRowCardSection <NSObject>

@required

- (void)addData:(_SFPBFormattedText *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (bool)alignRowsToHeader;
- (_SFPBTableAlignmentSchema *)alignmentSchema;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearData;
- (void)clearPunchoutOptions;
- (_SFPBFormattedText *)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (NSArray *)datas;
- (bool)hasAlignRowsToHeader;
- (bool)hasAlignmentSchema;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsSubHeader;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasReducedRowHeight;
- (bool)hasSeparatorStyle;
- (bool)hasTabGroupIdentifier;
- (bool)hasTableIdentifier;
- (bool)hasTopPadding;
- (bool)hasType;
- (bool)hasVerticalAlign;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isSubHeader;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (bool)reducedRowHeight;
- (int)separatorStyle;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(_SFPBTableAlignmentSchema *)arg1;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDatas:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTabGroupIdentifier:(NSString *)arg1;
- (void)setTableIdentifier:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerticalAlign:(int)arg1;
- (NSString *)tabGroupIdentifier;
- (NSString *)tableIdentifier;
- (NSString *)type;
- (int)verticalAlign;

@end
