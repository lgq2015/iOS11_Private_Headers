/* made by EzioChiu.
 */

@protocol _UITextPasteProgressSupport <NSObject>

@required

- (double)_textPasteBlockingTimeout;
- (long long)_textPasteRangeBehavior;
- (UITextRange *)_textPasteSelectableRangeForResult:(NSAttributedString *)arg1 fromRange:(UITextRange *)arg2;
- (bool)_textPasteShouldBlockPasting;

@end
