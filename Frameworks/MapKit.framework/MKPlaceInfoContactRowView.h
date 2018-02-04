/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {
    bool  _bottomHairlineFullWidth;
    MKPlaceSectionHeaderView * _headerView;
    NSArray * _iconConstraints;
    id /* block */  _iconSelectedBlock;
    MKPlatterView * _iconView;
    UIColor * _labelColor;
    CNLabeledValue * _labeledValue;
    UITapGestureRecognizer * _tapRecognizer;
    NSArray * _titleConstraints;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleToValueConstraint;
    NSLayoutConstraint * _topToIconConstraint;
    NSLayoutConstraint * _topToTitleConstraint;
    _MKUILabel * _valueLabel;
    NSLayoutConstraint * _valueToBottomConstraint;
    NSLayoutConstraint * _valueToTrailingViewConstraint;
}

@property (nonatomic, readonly) int analyticsTarget;
@property (getter=isBottomHairlineFullWidth, nonatomic) bool bottomHairlineFullWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIItemProviderWriting> *draggableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ iconSelectedBlock;
@property (nonatomic, readonly) MKPlatterView *iconView;
@property (getter=isIconVisible, nonatomic) bool iconVisible;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _MKUILabel *titleLabel;
@property (nonatomic, readonly) _MKUILabel *valueLabel;
@property (nonatomic, retain) NSLayoutConstraint *valueToBottomConstraint;

+ (id)icon;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_icon;
- (id)_iconAccessibilityLabel;
- (bool)_iconTapped:(id)arg1;
- (Class)_labeledValueExpectedValueType;
- (bool)_pointIsInIcon:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateGestureRecognizer;
- (id)_valueString;
- (int)analyticsTarget;
- (void)copy:(id)arg1;
- (id)draggableContent;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id /* block */)iconSelectedBlock;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBottomHairlineFullWidth;
- (bool)isIconVisible;
- (id)labelColor;
- (id)labeledValue;
- (void)setBottomHairlineFullWidth:(bool)arg1;
- (void)setIconSelectedBlock:(id /* block */)arg1;
- (void)setIconVisible:(bool)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setValueToBottomConstraint:(id)arg1;
- (id)titleLabel;
- (id)valueLabel;
- (id)valueToBottomConstraint;

@end
