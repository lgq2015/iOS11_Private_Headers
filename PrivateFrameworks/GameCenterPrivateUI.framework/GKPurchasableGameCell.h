/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKPurchasableGameCell : GKBaseGameCell {
    float  _capturedRating;
    UILabel * _developerLabel;
    UILabel * _numberRatings;
    UILabel * _priceLabel;
    GKRatingView * _ratingStarsView;
    GKStoreItemInternal * _storeItem;
}

@property (nonatomic) float capturedRating;
@property (nonatomic, retain) UILabel *developerLabel;
@property (nonatomic, retain) UILabel *numberRatings;
@property (nonatomic, retain) UILabel *priceLabel;
@property (nonatomic, retain) GKRatingView *ratingStarsView;
@property (nonatomic, retain) GKStoreItemInternal *storeItem;

- (bool)canRemoveItem;
- (float)capturedRating;
- (void)dealloc;
- (id)developerLabel;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)numberRatings;
- (void)prepareForReuse;
- (id)priceLabel;
- (id)ratingStarsView;
- (void)setCapturedRating:(float)arg1;
- (void)setDeveloperLabel:(id)arg1;
- (void)setNumberRatings:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setRatingStarsView:(id)arg1;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;

@end
