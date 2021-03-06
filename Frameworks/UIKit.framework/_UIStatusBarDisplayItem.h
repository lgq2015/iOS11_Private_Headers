/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized> {
    double  _alpha;
    double  _baselineOffset;
    UIView * _containerView;
    bool  _enabled;
    bool  _floating;
    NSString * _identifier;
    _UIStatusBarItem * _item;
    <UILayoutItem> * _layoutItem;
    bool  _needsAddingToLayout;
    _UIStatusBarStyleAttributes * _overriddenStyleAttributes;
    _UIStatusBarDisplayItemPlacement * _placement;
    _UIStatusBarRegion * _region;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    UIView<_UIStatusBarDisplayable> * _view;
    double  _viewAlpha;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _viewTransform;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteFrame;
@property (nonatomic) double alpha;
@property (nonatomic) double baselineOffset;
@property (nonatomic) UIView *containerView;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool floating;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) _UIStatusBarItem *item;
@property (nonatomic, readonly) <UILayoutItem> *layoutItem;
@property (nonatomic) bool needsAddingToLayout;
@property (nonatomic, copy) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic, readonly) long long priority;
@property (nonatomic) _UIStatusBarRegion *region;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) UIView<_UIStatusBarDisplayable> *view;
@property (nonatomic) double viewAlpha;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } viewTransform;
@property (nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (void)_updateComputedAlpha;
- (void)_updateComputedTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrame;
- (double)alpha;
- (void)applyStyleAttributes:(id)arg1;
- (double)baselineOffset;
- (id)containerView;
- (id)description;
- (bool)floating;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;
- (bool)isEnabled;
- (id)item;
- (id)layoutItem;
- (bool)needsAddingToLayout;
- (id)overriddenStyleAttributes;
- (id)placement;
- (long long)priority;
- (id)region;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlpha:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setContainerView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFloating:(bool)arg1;
- (void)setNeedsAddingToLayout:(bool)arg1;
- (void)setOverriddenStyleAttributes:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewAlpha:(double)arg1;
- (void)setViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)view;
- (double)viewAlpha;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })viewTransform;
- (bool)visible;

@end
