/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewsHistogramView : UIView {
    UIButton * _appSupportButton;
    UIView * _bottomSeparatorView;
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    UILabel * _countLabel;
    UIImageView * _histogramImageView;
    NSArray * _histogramValues;
    long long  _numberOfUserRatings;
    NSMutableDictionary * _ratings;
    UISegmentedControl * _segmentedControl;
    SKUIStarRatingControl * _starRatingControl;
    UILabel * _starRatingControlLabel;
    UILabel * _titleLabel;
    double  _userRating;
    UIImageView * _userRatingStarsView;
    NSString * _versionString;
    UIButton * _writeAReviewButton;
}

@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic, retain) NSArray *histogramValues;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) long long personalStarRating;
@property (nonatomic, readonly) UIControl *segmentedControl;
@property (nonatomic, copy) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, readonly) UIControl *starRatingControl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double userRating;
@property (nonatomic, copy) NSString *versionString;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void).cxx_destruct;
- (id)_countLabelString;
- (id)_histogramImageForValues:(id)arg1;
- (id)appSupportButton;
- (id)colorScheme;
- (id)histogramValues;
- (id)initWithClientContext:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfUserRatings;
- (long long)personalStarRating;
- (id)segmentedControl;
- (id)segmentedControlTitles;
- (long long)selectedSegmentIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setHistogramValues:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setPersonalStarRating:(long long)arg1;
- (void)setSegmentedControlTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(double)arg1;
- (void)setVersionString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)starRatingControl;
- (id)title;
- (double)userRating;
- (id)versionString;
- (id)writeAReviewButton;

@end
