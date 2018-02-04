/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView * _actionableHeaderView;
    bool  _alignsHairlineWithTitle;
    double  _bottomContentInset;
    <MusicEntityVerticalSectionHeaderViewDelegate> * _delegate;
    UIView * _hairlineView;
    double  _topContentInset;
}

@property (nonatomic, readonly) MusicActionableHeaderView *actionableHeaderView;
@property (nonatomic) bool alignsHairlineWithTitle;
@property (nonatomic) double bottomContentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityVerticalSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topContentInset;

+ (struct { double x1; double x2; long long x3; long long x4; })_actionableHeaderMetricsForDisplayScale:(double)arg1;
+ (double)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)actionableHeaderView;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (bool)alignsHairlineWithTitle;
- (double)bottomContentInset;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setAlignsHairlineWithTitle:(bool)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTopContentInset:(double)arg1;
- (double)topContentInset;
- (void)traitCollectionDidChange:(id)arg1;

@end
