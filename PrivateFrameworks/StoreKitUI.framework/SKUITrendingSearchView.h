/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrendingSearchView : UIScrollView {
    UIStackView * _titleStackView;
    NSArray * _trendingSearchViews;
    UIStackView * _trendingSearchesStackView;
    UIView * _trendingTitleView;
    NSArray * _verticalMarginRelatedConstraints;
}

@property (nonatomic) UIStackView *titleStackView;
@property (nonatomic, copy) NSArray *trendingSearchViews;
@property (nonatomic) UIStackView *trendingSearchesStackView;
@property (nonatomic, copy) UIView *trendingTitleView;
@property (nonatomic, retain) NSArray *verticalMarginRelatedConstraints;

- (void).cxx_destruct;
- (void)commonInitWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setTitleStackView:(id)arg1;
- (void)setTrendingSearchViews:(id)arg1;
- (void)setTrendingSearchesStackView:(id)arg1;
- (void)setTrendingTitleView:(id)arg1;
- (void)setVerticalMarginRelatedConstraints:(id)arg1;
- (id)titleStackView;
- (id)trendingSearchViews;
- (id)trendingSearchesStackView;
- (id)trendingTitleView;
- (void)updateConstraints;
- (id)verticalMarginRelatedConstraints;

@end
