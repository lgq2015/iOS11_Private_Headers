/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate> {
    NSString * _placeholderText;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *placeholderText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholderText;
- (void)setPlaceholderText:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)text;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updatePlaceholderText:(bool)arg1;

@end
