/* made by EzioChiu.
 */

@protocol SXTextSourceDataSource <NSObject>

@required

- (NSArray *)additionsForTextSource:(SXTextSource *)arg1;
- (NSString *)contentSizeCategoryForTextSource:(SXTextSource *)arg1;
- (SXDocumentController *)documentControllerForTextSource:(SXTextSource *)arg1;
- (NSArray *)inlineTextStylesForTextSource:(SXTextSource *)arg1;
- (SXTextResizer *)textResizerForTextSource:(SXTextSource *)arg1;
- (SXComponentTextRules *)textRulesForTextSource:(SXTextSource *)arg1;
- (SXComponentTextStyle *)textStyleForTextSource:(SXTextSource *)arg1;

@end
