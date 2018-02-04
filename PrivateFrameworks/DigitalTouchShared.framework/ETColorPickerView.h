/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedFrame;
    ETPaletteCircleView * _collapsedSelectedCircle;
    ETColorWheelView * _colorWheelView;
    UIView * _contentView;
    bool  _dismissingColorPicker;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _expandedFrame;
    bool  _isExpanded;
    UITapGestureRecognizer * _presentTapGestureRecognizer;
    <ETColorPickerViewDelegate> * _presentationDelegate;
    double  _selectedCircleRotationAngle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpanded;
@property (nonatomic) <ETColorPickerViewDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2;
- (void)_dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_isCenterCircle:(unsigned long long)arg1;
- (void)animateOffscreen;
- (void)animateOnscreen;
- (void)animateToGray;
- (void)animateToSelectedColor;
- (void)colorWheel:(id)arg1 didPickColor:(id)arg2;
- (void)colorWheel:(id)arg1 willPickColor:(id)arg2;
- (void)dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeinPaletterCirclesInPairs;
- (void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeoutPaletterCirclesInPairs;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isExpanded;
- (void)layoutPaletteCircles;
- (void)movePalettCircleToOriginalLayoutPosition:(id)arg1;
- (void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(double)arg2;
- (id)paletteCircleAnimationPairs;
- (void)paletteCircleTapped:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)presentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentTapReceived:(id)arg1;
- (id)presentationDelegate;
- (void)setDimmed:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)showColorWheel;
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(id /* block */)arg1;
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(id /* block */)arg1;

@end
