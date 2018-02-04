/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewsHistogramViewController : UIViewController {
    SKUIClientContext * _clientContext;
    SKUIReviewsHistogramView * _histogramView;
    SKUIReviewList * _reviewList;
}

@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) long long personalStarRating;
@property (nonatomic, retain) SKUIReviewList *reviewList;
@property (nonatomic, readonly) UIControl *segmentedControl;
@property (nonatomic, copy) NSArray *segmentedControlTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, readonly) UIControl *starRatingControl;
@property (nonatomic, copy) NSString *versionString;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void).cxx_destruct;
- (id)_histogramView;
- (void)_reloadHistogram;
- (id)appSupportButton;
- (id)clientContext;
- (void)loadView;
- (long long)personalStarRating;
- (id)reviewList;
- (id)segmentedControl;
- (id)segmentedControlTitles;
- (long long)selectedSegmentIndex;
- (void)setClientContext:(id)arg1;
- (void)setPersonalStarRating:(long long)arg1;
- (void)setReviewList:(id)arg1;
- (void)setSegmentedControlTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setVersionString:(id)arg1;
- (id)starRatingControl;
- (id)versionString;
- (id)writeAReviewButton;

@end
