/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTableViewEditableCell : UITableViewCell <UITextFieldDelegate, UITextViewDelegate> {
    int  _cellStyle;
    id  _delegate;
    bool  _forceFirstResponder;
    UILabel * _sizeTextLabel;
    UITextField * _textField;
    PLTextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int style;
@property (readonly) Class superclass;

+ (id)posterCellIdentifier;

- (void)_textFieldChanged;
- (bool)becomeFirstResponder;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)forceFirstResponder:(bool)arg1;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cellStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 multiLine:(bool)arg2;
- (bool)isEditing;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setValue:(id)arg1;
- (id)sizeTextLabel;
- (int)style;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (bool)textViewShouldEndEditing:(id)arg1;
- (id)value;

@end
