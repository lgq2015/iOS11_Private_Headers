/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLabeledCell : CNContactCell {
    UIImageView * _chevron;
    NSDictionary * _labelTextAttributes;
    bool  _labelViewNeedsHuggingContent;
    NSDictionary * _valueTextAttributes;
    bool  _valueViewNeedsHuggingContent;
}

@property (nonatomic, readonly) UIImageView *chevron;
@property (nonatomic, readonly) double chevronWidth;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic, readonly) UIView<ABText> *labelView;
@property (nonatomic) bool labelViewNeedsHuggingContent;
@property (nonatomic, readonly) UIView *rightMostView;
@property (nonatomic, readonly) UILabel *standardLabelView;
@property (nonatomic, readonly) UILabel *standardValueView;
@property (nonatomic, readonly) NSString *valueString;
@property (nonatomic, copy) NSDictionary *valueTextAttributes;
@property (nonatomic, readonly) UIView<ABText> *valueView;
@property (nonatomic) bool valueViewNeedsHuggingContent;

+ (bool)wantsChevron;
+ (bool)wantsHorizontalLayout;
+ (bool)wantsStandardConstraints;

- (void).cxx_destruct;
- (id)chevron;
- (double)chevronWidth;
- (id)constantConstraints;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelString;
- (id)labelTextAttributes;
- (id)labelView;
- (bool)labelViewNeedsHuggingContent;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setLabelViewNeedsHuggingContent:(bool)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)setValueViewNeedsHuggingContent:(bool)arg1;
- (id)standardLabelView;
- (id)standardValueView;
- (void)tintColorDidChange;
- (id)valueString;
- (id)valueTextAttributes;
- (id)valueView;
- (bool)valueViewNeedsHuggingContent;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)variableConstraintsForVerticalLayout;

@end
