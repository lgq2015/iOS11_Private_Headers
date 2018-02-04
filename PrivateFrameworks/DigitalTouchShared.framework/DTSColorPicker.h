/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface DTSColorPicker : UIView {
    unsigned long long  _colorCircleSize;
    <DTSColorPickerDelegate> * _delegate;
    bool  _dimmed;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSArray * _paletteCircles;
    ETPaletteCircleView * _selectedCircle;
}

@property (nonatomic, readonly) double colorCircleDiameter;
@property (nonatomic, readonly) double colorCircleHorizontalSpacing;
@property (nonatomic) unsigned long long colorCircleSize;
@property (nonatomic) <DTSColorPickerDelegate> *delegate;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) NSArray *paletteCircles;
@property (nonatomic, retain) ETPaletteCircleView *selectedCircle;
@property (nonatomic, readonly) UIColor *selectedColor;

- (void).cxx_destruct;
- (double)colorCircleDiameter;
- (double)colorCircleHorizontalSpacing;
- (unsigned long long)colorCircleSize;
- (void)createPaletteCirclesWithParentView:(id)arg1;
- (id)delegate;
- (void)didReceiveLongPress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDimmed;
- (id)longPressRecognizer;
- (void)paletteCircleTapped:(id)arg1;
- (id)paletteCircles;
- (void)selectCircle:(id)arg1 completion:(id /* block */)arg2;
- (id)selectedCircle;
- (id)selectedColor;
- (void)setColorCircleSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setLongPressRecognizer:(id)arg1;
- (void)setPaletteCircles:(id)arg1;
- (void)setSelectedCircle:(id)arg1;
- (void)showColorWheel;

@end
