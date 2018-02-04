/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKValueWithCaptionBubbleControl : GKBaseBubbleWithTextControl {
    GKLabel * _captionLabel;
    NSString * _captionText;
    GKTextStyle * _normalCaptionStyle;
    GKTextStyle * _normalValueStyle;
    GKTextStyle * _overrideCaptionStyle;
    GKTextStyle * _overrideValueStyle;
    GKTextStyle * _smallValueStyle;
    GKLabel * _valueLabel;
    NSString * _valueText;
}

@property (nonatomic, retain) GKLabel *captionLabel;
@property (nonatomic, retain) NSString *captionText;
@property (nonatomic, retain) GKTextStyle *normalCaptionStyle;
@property (nonatomic, retain) GKTextStyle *normalValueStyle;
@property (nonatomic) bool oneLineOnly;
@property (nonatomic, retain) GKTextStyle *overrideCaptionStyle;
@property (nonatomic, retain) GKTextStyle *overrideValueStyle;
@property (nonatomic, retain) GKTextStyle *smallValueStyle;
@property (nonatomic, retain) GKLabel *valueLabel;
@property (nonatomic, retain) NSString *valueText;

+ (void)initialize;

- (void)_updateCaptionTextLabel;
- (void)_updateValueTextLabel;
- (id)attributedCaptionText;
- (id)attributedValueText;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;
- (id)captionLabel;
- (id)captionText;
- (id)captionTextStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)normalCaptionStyle;
- (id)normalValueStyle;
- (bool)oneLineOnly;
- (id)overrideCaptionStyle;
- (id)overrideValueStyle;
- (void)setAttributedCaptionText:(id)arg1;
- (void)setAttributedValueText:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCaptionText:(id)arg1;
- (void)setNormalCaptionStyle:(id)arg1;
- (void)setNormalValueStyle:(id)arg1;
- (void)setOneLineOnly:(bool)arg1;
- (void)setOverrideCaptionStyle:(id)arg1;
- (void)setOverrideValueStyle:(id)arg1;
- (void)setSmallValueStyle:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueText:(id)arg1;
- (void)setValueTextForInteger:(long long)arg1;
- (id)smallValueStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextFieldsFor3DScaling;
- (id)valueLabel;
- (id)valueText;
- (id)valueTextStyle;

@end
