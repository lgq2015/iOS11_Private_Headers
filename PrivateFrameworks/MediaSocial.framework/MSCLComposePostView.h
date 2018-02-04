/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLComposePostView : UIScrollView <NSLayoutManagerDelegate, UITextViewDelegate> {
    long long  _allowedCharacterCount;
    UIButton * _attachmentButton;
    NSMutableArray * _attachmentViews;
    UILabel * _characterCountLabel;
    <MSCLComposePostViewDataSource> * _dataSource;
    NSArray * _footerViews;
    NSArray * _headerViews;
    long long  _numberOfAttachments;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preCompletionContentOffset;
    NSArray * _scrollableHeaderViews;
    UITapGestureRecognizer * _tapRecognizer;
    UIViewController * _textCompletionViewController;
    MSCLTokenTextView * _textView;
}

@property (nonatomic) long long allowedCharacterCount;
@property (nonatomic, readonly) UIControl *attachmentButton;
@property (nonatomic, copy) NSArray *attachmentViews;
@property (nonatomic) <MSCLComposePostViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *footerViews;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *headerViews;
@property (nonatomic, copy) NSArray *scrollableHeaderViews;
@property (nonatomic) bool showsAttachmentButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tagForSelectedRange;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)_keyboardHideNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_reloadCharacterCountLabel;
- (void)_reloadUnderlineStyling;
- (void)_removeAttachmentButtonAction:(id)arg1;
- (void)_tapRecognizerAction:(id)arg1;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (long long)allowedCharacterCount;
- (id)attachmentButton;
- (id)attachmentViews;
- (bool)becomeFirstResponder;
- (id)dataSource;
- (void)dealloc;
- (id)footerViews;
- (id)headerViews;
- (void)hideTextCompletionViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertTag:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (id)scrollableHeaderViews;
- (void)setAllowedCharacterCount:(long long)arg1;
- (void)setAttachmentViews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFooterViews:(id)arg1;
- (void)setHeaderViews:(id)arg1;
- (void)setScrollableHeaderViews:(id)arg1;
- (void)setShowsAttachmentButton:(bool)arg1;
- (void)showTextCompletionViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)showsAttachmentButton;
- (id)tagForSelectedRange;
- (id)text;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;

@end
