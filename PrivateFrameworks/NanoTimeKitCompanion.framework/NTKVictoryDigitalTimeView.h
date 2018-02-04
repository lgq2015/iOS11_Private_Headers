/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {
    unsigned long long  _color;
    NTKVictoryDigitsView * _flipDigitsView;
    bool  _flipViewIsLower;
    bool  _frozen;
    NTKVictoryDigitsView * _lowerDigitsView;
    unsigned long long  _style;
    CLKTimeFormatter * _timeFormatter;
    NTKVictoryDigitsView * _upperDigitsView;
}

@property (nonatomic) unsigned long long color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)transitionTimingFunction;

- (void).cxx_destruct;
- (long long)_lowerDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_resetDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_setFlipViewIsLower:(bool)arg1;
- (long long)_upperDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)clearEditingTransitions;
- (unsigned long long)color;
- (id)init;
- (bool)isFrozen;
- (void)layoutSubviews;
- (void)setColor:(unsigned long long)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTimeOffset:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)willBeginEditing;

@end