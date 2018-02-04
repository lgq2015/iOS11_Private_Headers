/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {
    _SKUIItemBrowseCellContentView * _cellContentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageBoundingSize;
    bool  _largeSpacing;
    long long  _numberOfUserRatings;
    UIColor * _primaryTextColor;
    UIColor * _secondaryTextColor;
    double  _userRating;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) struct CGSize { double x1; double x2; } imageBoundingSize;
@property (nonatomic, copy) NSString *indexNumberString;
@property (getter=isLargeSpacing, nonatomic) bool largeSpacing;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double userRating;

- (void).cxx_destruct;
- (id)_decimalNumberFormatter;
- (void)_initSKUIItemBrowseCellLayout;
- (void)_reloadUserRatingViews;
- (id)category;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (id)indexNumberString;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (bool)isLargeSpacing;
- (void)layoutForItemOfferChange;
- (void)layoutSubviews;
- (long long)numberOfUserRatings;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIndexNumberString:(id)arg1;
- (void)setLargeSpacing:(bool)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(double)arg1;
- (id)subtitle;
- (id)title;
- (double)userRating;

@end
