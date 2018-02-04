/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate> {
    <SUTextViewCellDelegate> * _delegate;
    UIScrollView * _scrollView;
    SUTextContentView * _textContentView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUTextViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUTextContentView *textContentView;

- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (id)textContentView;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)textContentViewDidChange:(id)arg1;
- (bool)textContentViewShouldBeginEditing:(id)arg1;
- (bool)textContentViewShouldEndEditing:(id)arg1;

@end
