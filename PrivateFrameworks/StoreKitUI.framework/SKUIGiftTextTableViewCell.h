/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {
    UIView * _bottomBorderView;
    UILabel * _label;
    long long  _maximumCharacterCount;
    UILabel * _placeholderLabel;
    UITextView * _textView;
    UIView * _topBorderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long maximumCharacterCount;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

+ (id)newTextView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (long long)maximumCharacterCount;
- (id)placeholder;
- (void)setLabel:(id)arg1;
- (void)setMaximumCharacterCount:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
