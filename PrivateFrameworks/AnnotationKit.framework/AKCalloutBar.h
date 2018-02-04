/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCalloutBar : UIView {
    double  _arrowX;
    _UIBackdropView * _backgroundView;
    UIImageView * _blurMaskView;
    NSArray * _controls;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _highlightRect;
    _UIBackdropView * _separatorBackgroundView;
    UIImageView * _separatorMaskView;
    UIImageView * _tintMaskView;
    bool  _up;
}

@property (nonatomic) double arrowX;
@property (nonatomic, retain) NSArray *controls;
@property (nonatomic) bool up;

- (void).cxx_destruct;
- (double)arrowX;
- (id)controls;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dividerLineRectForControl:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newMaskView:(long long)arg1;
- (void)setArrowX:(double)arg1;
- (void)setBlurDisabled:(bool)arg1;
- (void)setControls:(id)arg1;
- (void)setHighlighted:(bool)arg1 forControl:(id)arg2;
- (void)setUp:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsControls:(id)arg1;
- (bool)up;

@end
