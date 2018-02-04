/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSwitch : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {
    SEL  _action;
    int  _alignment;
    double  _height;
    _UISettings * _settings;
    NSArray * _subviewConstraints;
    UISwitch * _switchControl;
    id  _target;
    UILabel * _titleLabel;
    NSString * _valueKeyPath;
}

@property (nonatomic) SEL action;
@property (nonatomic) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double height;
@property (nonatomic) _UISettings *settings;
@property (nonatomic, retain) NSArray *subviewConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwitch *switchControl;
@property (nonatomic) id target;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *valueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)switch;
+ (id)switchForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;

- (void).cxx_destruct;
- (SEL)action;
- (int)alignment;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)makeSwitch;
- (id)makeTitleLabel;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)pressed:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setSubviewConstraints:(id)arg1;
- (void)setSwitchControl:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)subviewConstraints;
- (id)switchControl;
- (id)target;
- (id)titleLabel;
- (id)valueKeyPath;

@end
