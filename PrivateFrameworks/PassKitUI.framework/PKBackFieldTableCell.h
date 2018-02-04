/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKBackFieldTableCell : PKTableViewCell {
    PKPassField * _field;
    bool  _showLinks;
    UITextView * _valueTextView;
}

@property (nonatomic, retain) PKPassField *field;
@property (nonatomic) bool showLinks;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (id)reuseIdentifier;
+ (id)titleFont;
+ (id)valueFont;

- (void).cxx_destruct;
- (void)_detectLinks;
- (void)_setupTextAttributes;
- (struct CGSize { double x1; double x2; })_sizeForValueTextWithWidth:(double)arg1;
- (void)dealloc;
- (id)field;
- (id)initWithField:(id)arg1 showLinks:(bool)arg2;
- (void)layoutSubviews;
- (void)setField:(id)arg1;
- (void)setShowLinks:(bool)arg1;
- (bool)showLinks;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
