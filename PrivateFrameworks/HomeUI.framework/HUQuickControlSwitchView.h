/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView> {
    UIView * _knobView;
    HUQuickControlSwitchViewProfile * _profile;
    double  _switchValue;
    UIView * _wellView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *knobView;
@property (nonatomic, copy) HUQuickControlSwitchViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic) long long sizeSubclass;
@property (readonly) Class superclass;
@property (nonatomic) double switchValue;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) UIView *wellView;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)knobView;
- (void)layoutSubviews;
- (id)profile;
- (void)setKnobView:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSwitchValue:(double)arg1;
- (void)setValue:(id)arg1;
- (void)setWellView:(id)arg1;
- (double)switchValue;
- (id)value;
- (id)wellView;

@end
