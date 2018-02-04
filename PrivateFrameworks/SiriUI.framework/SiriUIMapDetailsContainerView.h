/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIMapDetailsContainerView : UIView {
    bool  _autoCenteringDisabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _backgroundInsets;
    double  _centerMargin;
    UIView * _detailsView;
    UIView * _mapView;
}

@property (nonatomic) bool autoCenteringDisabled;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic) double centerMargin;
@property (nonatomic, retain) UIView *detailsView;
@property (nonatomic, retain) UIView *mapView;

- (void).cxx_destruct;
- (bool)autoCenteringDisabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (double)centerMargin;
- (id)detailsView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mapView;
- (void)setAutoCenteringDisabled:(bool)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCenterMargin:(double)arg1;
- (void)setDetailsView:(id)arg1;
- (void)setMapView:(id)arg1;

@end
