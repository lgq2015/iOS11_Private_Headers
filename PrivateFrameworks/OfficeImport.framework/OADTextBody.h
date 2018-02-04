/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextBody : NSObject {
    NSMutableArray * mParagraphs;
    OADTextBodyProperties * mProperties;
    OADTextListStyle * mTextListStyle;
}

- (id)addParagraph;
- (void)addParagraphsFromTextBody:(id)arg1;
- (void)applyTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (id)firstParagraphEffects;
- (void)flattenProperties;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToTextBody:(id)arg1;
- (unsigned long long)newLineCount;
- (unsigned long long)nonEmptyParagraphCount;
- (id)overrideTextListStyle;
- (id)paragraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphCount;
- (id)plainText;
- (bool)propagateActualTextStyleToTextListStyle;
- (id)properties;
- (void)removeAllParagraphs;
- (void)removeLastParagraphIfEmpty;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)textListStyle;

@end
