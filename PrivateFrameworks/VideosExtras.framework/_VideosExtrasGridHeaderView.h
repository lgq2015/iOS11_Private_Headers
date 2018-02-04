/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface _VideosExtrasGridHeaderView : UIView {
    NSArray * _artworkSizeConstraints;
    MPUArtworkView * _artworkView;
    NSLayoutConstraint * _bottomLabelConstraint;
    UIView * _bottomLabelSpacer;
    MPUContentSizeLayoutConstraint * _bottomLabelSpacerHeight;
    MPUContentSizeLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    NSArray * _textLeadingConstraints;
    UILabel * _titleLabel;
    MPUContentSizeLayoutConstraint * _topLabelConstraint;
}

@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleLabel;

@end
