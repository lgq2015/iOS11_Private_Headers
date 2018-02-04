/* made by EzioChiu.
 */

@protocol SFTextColumnsCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSArray *)columns;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setColumns:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleWeight:(unsigned long long)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)title;
- (unsigned long long)titleWeight;
- (NSString *)type;

@end