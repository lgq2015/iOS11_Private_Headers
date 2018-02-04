/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToggleButton : UIButton {
    UIColor * _selectedColor;
    bool  _shouldTintNormalImage;
    bool  _showsBackgroundColor;
    UIImage * _templateImage;
}

@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool shouldTintNormalImage;
@property (nonatomic) bool showsBackgroundColor;
@property (nonatomic, retain) UIImage *templateImage;

+ (id)colorImage:(id)arg1 withColor:(id)arg2;

- (void).cxx_destruct;
- (void)_setDeselectedStateColorImage;
- (void)_setSelectedStateColorImage;
- (void)_touchCommitted:(id)arg1;
- (void)_updateSelectionColorsAnimated:(bool)arg1;
- (void)_updateStateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 templateImage:(id)arg2 autoUpdatesColor:(bool)arg3;
- (id)selectedColor;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShouldTintNormalImage:(bool)arg1;
- (void)setShowsBackgroundColor:(bool)arg1;
- (void)setTemplateImage:(id)arg1;
- (bool)shouldTintNormalImage;
- (bool)showsBackgroundColor;
- (id)templateImage;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
