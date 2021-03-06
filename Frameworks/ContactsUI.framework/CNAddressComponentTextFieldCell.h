/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAddressComponentTextFieldCell : UITableViewCell {
    UIImageView * _chevron;
    NSArray * _componentConstraints;
    UITextField * _textField;
    UITextField * _textFieldForChevron;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic, retain) NSArray *componentConstraints;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic) UITextField *textFieldForChevron;
@property (nonatomic, readonly) NSArray *textFields;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)addTextField;
- (id)chevron;
- (id)componentConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)currentConstraintsForMetrics:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setChevron:(id)arg1;
- (void)setComponentConstraints:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldForChevron:(id)arg1;
- (void)setupTextFields;
- (id)textAttributes;
- (id)textField;
- (id)textFieldForChevron;
- (id)textFields;
- (void)updateConstraints;

@end
