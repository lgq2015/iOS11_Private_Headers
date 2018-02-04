/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExtraLargeTimeView : UIView <NTKTimeView> {
    bool  _frozen;
    bool  _statusBarVisible;
    NTKDigitalTimeLabel * _timeHourView;
    NTKDigitalTimeLabel * _timeMinuteView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeHourView;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeMinuteView;

- (void).cxx_destruct;
- (void)cancelWristRaiseAnimation;
- (void)cleanupAfterZoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFrozen;
- (void)layoutSubviews;
- (void)performWristRaiseAnimation;
- (void)prepareToZoom;
- (void)prepareWristRaiseAnimation;
- (void)setBottomColor:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStatusBarVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTimeHourView:(id)arg1;
- (void)setTimeMinuteView:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTopColor:(id)arg1;
- (id)timeHourView;
- (id)timeMinuteView;

@end
