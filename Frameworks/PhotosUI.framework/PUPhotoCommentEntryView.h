/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate> {
    <PUPhotoCommentEntryViewDelegate> * _delegate;
    UILabel * _placeholderLabel;
    UIButton * _postButton;
    UITextView * _textView;
    UILabel * placeholderLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoCommentEntryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) UILabel *placeholderLabel;
@property (nonatomic, readonly, retain) UIButton *postButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)clearText;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)postButton;
- (double)preferredHeight;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (bool)textViewShouldEndEditing:(id)arg1;
- (id)trimmedText;

@end
