/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTokenTextView : UITextView {
    <MSCLTokenTextViewDelegate> * _changeDelegate;
    long long  _maximumTagLength;
    NSString * _tagDelimeter;
    NSString * _tagSuffix;
    NSMutableArray * _tokenViews;
}

@property (nonatomic) <MSCLTokenTextViewDelegate> *changeDelegate;
@property (nonatomic) long long maximumTagLength;
@property (nonatomic, readonly, copy) NSString *pendingTagForSelectedRange;
@property (nonatomic, copy) NSString *tagDelimeter;
@property (nonatomic, copy) NSString *tagSuffix;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textRectForSelectedRange;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_tagRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)becomeFirstResponder;
- (id)changeDelegate;
- (void)enumerateTokenAttachmentsUsingBlock:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)insertTokenWithAttachment:(id)arg1;
- (long long)maximumTagLength;
- (id)pendingTagForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)pendingTagForSelectedRange;
- (void)reloadTokenSelection;
- (void)reloadTokenViews;
- (void)replaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTokenAttachment:(id)arg2 suffix:(id)arg3;
- (bool)resignFirstResponder;
- (bool)selectTokenAtIndex:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setMaximumTagLength:(long long)arg1;
- (void)setTagDelimeter:(id)arg1;
- (void)setTagSuffix:(id)arg1;
- (id)tagDelimeter;
- (id)tagSuffix;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForSelectedRange;
- (id)textWithResolvedTokenStrings;

@end
