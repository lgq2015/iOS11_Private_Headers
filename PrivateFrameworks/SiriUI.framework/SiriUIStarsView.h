/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIStarsView : UIView {
    long long  _maxNumberOfStars;
    double  _maxRating;
    double  _rating;
    bool  _snapsToHalfStar;
    UIImage * _starsImage;
    long long  _style;
}

@property (nonatomic) long long maxNumberOfStars;
@property (nonatomic) bool snapsToHalfStar;
@property (nonatomic) long long style;

+ (id)_starsImageCache;

- (void).cxx_destruct;
- (id)_cacheKeyForStyle:(long long)arg1 numberOfStars:(long long)arg2;
- (struct CGSize { double x1; double x2; })_sizeForStar:(id)arg1 spacing:(double)arg2;
- (id)_starMaskForStyle:(long long)arg1;
- (id)_starMaskLarge;
- (id)_starMaskMedium;
- (id)_starMaskSmall;
- (double)_starSpacingForStyle:(long long)arg1;
- (void)_updateStarsForStyleAndTotalNumber;
- (double)_xForFractionalPartOfStars:(double)arg1 inWidth:(double)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)maxNumberOfStars;
- (void)setMaxNumberOfStars:(long long)arg1;
- (void)setRating:(double)arg1 maxRating:(double)arg2;
- (void)setSnapsToHalfStar:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)snapsToHalfStar;
- (long long)style;

@end
