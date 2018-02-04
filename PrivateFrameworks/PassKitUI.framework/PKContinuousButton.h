/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKContinuousButton : UIButton {
    UIActivityIndicatorView * _activityIndicatorView;
    UIColor * _appliedInputColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    struct { 
        double cornerRadius; 
        long long shape; 
        long long style; 
        long long highlightEffect; 
        long long disabledEffect; 
    }  _configuration;
    UIColor * _disabledInputColor;
    bool  _enabled;
    CAFilter * _highlightFilter;
    UIColor * _highlightInputColor;
    bool  _highlighted;
    CAShapeLayer * _layer;
    CAShapeLayer * _maskLayer;
    PKShapeView * _maskView;
    UIColor * _normalInputColor;
    bool  _selected;
    UIColor * _selectedInputColor;
    UIColor * _tintColor;
    bool  _titleColorShouldBeTintColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchMargins;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchMargins;

+ (id)_filterInputColorForEffect:(long long)arg1;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_createHighlightFilterIfNecessary;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateFilter;
- (void)_updateTintColorWithColor:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(struct { double x1; long long x2; long long x3; long long x4; long long x5; })arg1;
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTouchMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)showSpinner:(bool)arg1;
- (void)tintColorDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchMargins;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end
