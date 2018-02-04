/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationRatingView : UIView {
    double  _rating;
    NSArray * _starViews;
}

@property (nonatomic) double rating;
@property (nonatomic, retain) NSArray *starViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)rating;
- (void)setRating:(double)arg1;
- (void)setStarViews:(id)arg1;
- (void)setupConstraints;
- (id)starViews;
- (void)updateStarViews;

@end
