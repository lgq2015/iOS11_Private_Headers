/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIReviewsHeaderView : SiriUIReusableSubtitledHeaderView {
    UIView * _providerView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _providerViewOffset;
    UIView * _ratingView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _ratingViewOffset;
    double  _verticalSpaceNeededForRatingsView;
}

@property (nonatomic, retain) UIView *providerView;
@property (nonatomic) struct UIOffset { double x1; double x2; } providerViewOffset;
@property (nonatomic, retain) UIView *ratingView;
@property (nonatomic) struct UIOffset { double x1; double x2; } ratingViewOffset;
@property (nonatomic) double verticalSpaceNeededForRatingsView;

- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)providerView;
- (struct UIOffset { double x1; double x2; })providerViewOffset;
- (id)ratingView;
- (struct UIOffset { double x1; double x2; })ratingViewOffset;
- (void)setProviderView:(id)arg1;
- (void)setProviderViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setRatingView:(id)arg1;
- (void)setRatingViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalSpaceNeededForRatingsView:(double)arg1;
- (double)verticalSpaceNeededForRatingsView;

@end
