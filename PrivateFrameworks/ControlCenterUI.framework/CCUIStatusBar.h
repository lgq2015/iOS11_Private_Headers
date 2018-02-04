/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIStatusBar : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _compactEdgeInsets;
    UIStatusBar * _compactTrailingStatusBar;
    <CCUIStatusBarDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expandedEdgeInsets;
    UIStatusBar * _extendedLeadingStatusBar;
    UIStatusBar * _extendedTrailingStatusBar;
    unsigned long long  _leadingState;
    unsigned long long  _trailingState;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } compactEdgeInsets;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *compactStyleRequest;
@property (nonatomic) double compactTrailingAlpha;
@property (nonatomic) <CCUIStatusBarDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expandedEdgeInsets;
@property (nonatomic) double expandedTrailingAlpha;
@property (nonatomic) double leadingAlpha;
@property (nonatomic) unsigned long long leadingState;
@property (nonatomic) unsigned long long trailingState;

- (void).cxx_destruct;
- (void)_updateCompactTrailingStatusBarStyleRequest;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })compactEdgeInsets;
- (id)compactStyleRequest;
- (double)compactTrailingAlpha;
- (void)controlCenterApplyPrimaryContentShadow;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedTrailingAlpha;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)leadingAlpha;
- (unsigned long long)leadingState;
- (void)setCompactEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCompactTrailingAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExpandedTrailingAlpha:(double)arg1;
- (void)setLeadingAlpha:(double)arg1;
- (void)setLeadingState:(unsigned long long)arg1;
- (void)setTrailingState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)trailingState;

@end
