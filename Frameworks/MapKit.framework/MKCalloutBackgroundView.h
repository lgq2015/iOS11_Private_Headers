/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutBackgroundView : UIPopoverBackgroundView {
    unsigned long long  _arrowDirection;
    UIMotionEffect * _arrowMotionEffect;
    double  _arrowOffset;
    UIMotionEffect * _arrowShadowMotionEffect;
    UIView * _baseBorderView;
    UIView * _containerView;
    UIImageView * _currentArrowShadow;
    _MKCalloutBackgroundMaskView * _mainMaskView;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    NSMutableArray * _vendedMaskViews;
}

@property (nonatomic, readonly) UIColor *calloutBackgroundColor;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;

+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
+ (bool)wantsDefaultContentAppearance;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsets;
- (void)_extendLeftRightArrow;
- (void)_hideArrow;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(bool)arg2;
- (void)_retractUpDownArrow;
- (void)_setupViews;
- (id)_shadowPath;
- (void)_showArrow;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)calloutBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (id)newMaskLayer;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowMotionEffect:(id)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;

@end
