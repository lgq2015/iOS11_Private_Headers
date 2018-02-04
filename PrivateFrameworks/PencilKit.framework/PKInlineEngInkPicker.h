/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInlineEngInkPicker : UIControl {
    <PKInlineEngInkPickerDelegate> * _delegate;
    NSArray * _inkIdentifiers;
    unsigned long long  _lastSelectedInkIndex;
    UIButton * _lineWidthButton;
    NSArray * _markerColorButtons;
    NSArray * _markerColors;
    NSArray * _penColorButtons;
    NSArray * _penColors;
    unsigned long long  _selectedColorIndex;
    unsigned long long  _selectedInkIndex;
    UIStackView * _stackView;
    NSArray * _toolButtons;
}

@property (nonatomic) <PKInlineEngInkPickerDelegate> *delegate;
@property (nonatomic, retain) NSArray *inkIdentifiers;
@property (nonatomic) unsigned long long lastSelectedInkIndex;
@property (nonatomic, retain) UIButton *lineWidthButton;
@property (nonatomic) bool lineWidthButtonHidden;
@property (nonatomic, retain) NSArray *markerColorButtons;
@property (nonatomic, retain) NSArray *markerColors;
@property (nonatomic, retain) NSArray *penColorButtons;
@property (nonatomic, retain) NSArray *penColors;
@property (nonatomic, copy) UIColor *selectedColor;
@property (nonatomic) unsigned long long selectedColorIndex;
@property (nonatomic, copy) PKInk *selectedInk;
@property (nonatomic, copy) NSString *selectedInkIdentifier;
@property (nonatomic) unsigned long long selectedInkIndex;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSArray *toolButtons;

+ (void)_setDefaultButtonState:(id)arg1;
+ (void)_setPressedButtonState:(id)arg1;
+ (id)imageForColor:(id)arg1 selected:(bool)arg2;
+ (id)imageForLineWidthButton;
+ (id)imageForToolWithIdentifier:(id)arg1 selected:(bool)arg2;
+ (id)imageNameForInkIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)colorChanged:(id)arg1;
- (unsigned long long)colorIndexClosestToColor:(id)arg1;
- (void)colorPressed:(id)arg1;
- (void)colorUnpressed:(id)arg1;
- (id)createColorButtonWithColor:(id)arg1;
- (id)createLineWidthButton;
- (id)createToolButtonWithInkIdentifier:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inkIdentifiers;
- (unsigned long long)lastSelectedInkIndex;
- (id)lineWidthButton;
- (bool)lineWidthButtonHidden;
- (void)lineWidthButtonTapped:(id)arg1;
- (id)markerColorButtons;
- (id)markerColors;
- (id)penColorButtons;
- (id)penColors;
- (id)selectedColor;
- (id)selectedColorButtons;
- (unsigned long long)selectedColorIndex;
- (id)selectedInk;
- (id)selectedInkIdentifier;
- (unsigned long long)selectedInkIndex;
- (void)setDelegate:(id)arg1;
- (void)setInkIdentifiers:(id)arg1;
- (void)setLastSelectedInkIndex:(unsigned long long)arg1;
- (void)setLineWidthButton:(id)arg1;
- (void)setLineWidthButtonHidden:(bool)arg1;
- (void)setMarkerColorButtons:(id)arg1;
- (void)setMarkerColors:(id)arg1;
- (void)setPaletteColorsForToolIdentifier:(id)arg1;
- (void)setPenColorButtons:(id)arg1;
- (void)setPenColors:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorIndex:(unsigned long long)arg1;
- (void)setSelectedColorIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setSelectedInk:(id)arg1;
- (void)setSelectedInkIdentifier:(id)arg1;
- (void)setSelectedInkIndex:(unsigned long long)arg1;
- (void)setSelectedInkIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setStackView:(id)arg1;
- (void)setToolButtons:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (id)toolButtons;
- (void)toolChanged:(id)arg1;
- (void)toolPressed:(id)arg1;
- (void)toolUnpressed:(id)arg1;

@end
