/* made by EzioChiu.
 */

@protocol SFCardSection <NSSecureCoding, NSObject>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSString *)cardSectionId;
- (NSArray *)commands;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)hideDivider;
- (SFCard *)nextCard;
- (NSArray *)parameterKeyPaths;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSString *)resultIdentifier;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setCommands:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideDivider:(bool)arg1;
- (void)setNextCard:(SFCard *)arg1;
- (void)setParameterKeyPaths:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
