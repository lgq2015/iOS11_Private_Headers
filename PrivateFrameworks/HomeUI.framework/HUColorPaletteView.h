/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorPaletteView : UIView <HUQuickControlInteractiveView, UIGestureRecognizerDelegate> {
    HFColorPalette * _calibratedColorPalette;
    UILongPressGestureRecognizer * _changePresetRecognizer;
    double  _circleRadius;
    HFColorPalette * _colorPalette;
    bool  _colorPaletteHasChanged;
    NSArray * _colorSwatchViews;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <HUQuickControlColorPaletteViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlColorViewProfile * _profile;
    HFColorPaletteColor * _selectedColor;
    NSNumber * _selectedColorBiasIndex;
    NSNumber * _trackingColorIndex;
    bool  _userInteractionActive;
}

@property (nonatomic, retain) HFColorPalette *calibratedColorPalette;
@property (nonatomic, retain) UILongPressGestureRecognizer *changePresetRecognizer;
@property (nonatomic) double circleRadius;
@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic) bool colorPaletteHasChanged;
@property (nonatomic, copy) NSArray *colorSwatchViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlColorPaletteViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, copy) HUQuickControlColorViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) HFColorPaletteColor *selectedColor;
@property (nonatomic, retain) NSNumber *selectedColorBiasIndex;
@property (nonatomic) long long sizeSubclass;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *trackingColorIndex;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_buildColorSwatchViews;
- (void)_handleGesture:(id)arg1;
- (void)_handleGestureForVeryLongPress:(id)arg1;
- (unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(bool)arg2;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(bool)arg2;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(bool)arg2 updateSelectionState:(bool)arg3;
- (id)_swatchIndexForGestureRecognizer:(id)arg1;
- (void)_updateCalibratedColorPalette;
- (void)_updateColorSelectionAnimated:(bool)arg1;
- (void)_updateColorSwatchViewsWithAnimations:(bool)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)calibratedColorPalette;
- (id)changePresetRecognizer;
- (double)circleRadius;
- (id)colorPalette;
- (bool)colorPaletteHasChanged;
- (id)colorSwatchViews;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)interactionDelegate;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (id)profile;
- (double)radiusFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)selectedColor;
- (id)selectedColorBiasIndex;
- (void)setCalibratedColorPalette:(id)arg1;
- (void)setChangePresetRecognizer:(id)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setColorPaletteHasChanged:(bool)arg1;
- (void)setColorSwatchViews:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorBiasIndex:(id)arg1;
- (void)setTrackingColorIndex:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)trackingColorIndex;
- (id)value;

@end
