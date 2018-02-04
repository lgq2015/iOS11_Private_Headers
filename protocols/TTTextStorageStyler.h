/* made by EzioChiu.
 */

@protocol TTTextStorageStyler <NSObject>

@required

- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(bool)arg2;
- (void)resetGuessedFontSizes;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;

@optional

- (void)convertNSTablesToICTables:(NSMutableAttributedString *)arg1 pasteboardTypes:(NSArray *)arg2 filterPastedAttributes:(bool)arg3 isReadingSelectionFromPasteboard:(bool)arg4;

@end
