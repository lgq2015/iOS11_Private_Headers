/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIValueAdjustmentButtonController : NSObject {
    id /* block */  _buttonStateUpdateHandler;
    UIButton * _decrementButton;
    bool  _didUserUpdatevalue;
    UIButton * _incrementButton;
    double  _maxValue;
    double  _minValue;
    double  _minumumStepValueIncrement;
    long long  _plusMinusActionRepeatCount;
    NSTimer * _plusMinusActionTimer;
    double  _value;
    double  _valueStepIncremement;
    id /* block */  _valueUpdateHandler;
}

@property (nonatomic, copy) id /* block */ buttonStateUpdateHandler;
@property (nonatomic, readonly) UIButton *decrementButton;
@property (nonatomic) bool didUserUpdatevalue;
@property (nonatomic, readonly) UIButton *incrementButton;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) double minumumStepValueIncrement;
@property (nonatomic) double value;
@property (nonatomic) double valueStepIncremement;
@property (nonatomic, copy) id /* block */ valueUpdateHandler;

- (void).cxx_destruct;
- (void)_incrementRepeatCount;
- (void)_notifyValueChanged;
- (void)_performPlusMinusActionWithButton:(id)arg1;
- (void)_plusMinusActionTimerDidFire:(id)arg1;
- (void)_plusMinusButtonTouchCancel:(id)arg1;
- (void)_plusMinusButtonTouchDown:(id)arg1;
- (void)_plusMinusButtonTouchUpInside:(id)arg1;
- (void)_updateButton:(id)arg1 forPressedState:(bool)arg2;
- (void)_updatePlusMinusButtonStates;
- (id /* block */)buttonStateUpdateHandler;
- (id)decrementButton;
- (bool)didUserUpdatevalue;
- (id)incrementButton;
- (double)maxValue;
- (double)minValue;
- (double)minumumStepValueIncrement;
- (void)setButtonStateUpdateHandler:(id /* block */)arg1;
- (void)setDidUserUpdatevalue:(bool)arg1;
- (void)setIncrementButton:(id)arg1 decrementButton:(id)arg2;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMinumumStepValueIncrement:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setValueStepIncremement:(double)arg1;
- (void)setValueUpdateHandler:(id /* block */)arg1;
- (double)value;
- (double)valueStepIncremement;
- (id /* block */)valueUpdateHandler;

@end
