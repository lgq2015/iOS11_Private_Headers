/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSimpleSliderControlView : UIView <HUControlView> {
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    UISlider * _slider;
}

@property (nonatomic) bool canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (nonatomic, readonly) UISlider *slider;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;

+ (Class)valueClass;

- (void).cxx_destruct;
- (void)_sliderTouchDown:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabled;
- (float)maxValue;
- (float)minValue;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)slider;
- (id)value;

@end
