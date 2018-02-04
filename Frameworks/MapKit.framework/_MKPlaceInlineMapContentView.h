/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {
    MKViewWithHairline * _hairlineView;
    UIImageView * _mapView;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleToBottomConstraint;
    NSLayoutConstraint * _topToTitleConstraint;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (nonatomic, retain) UIImage *map;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (bool)hasTitle;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isBottomHairlineHidden;
- (id)map;
- (double)mapViewHeight;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMap:(id)arg1;
- (double)titleHeight;

@end
