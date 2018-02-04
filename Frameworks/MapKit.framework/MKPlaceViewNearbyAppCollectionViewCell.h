/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell {
    UILabel * _categoryLabel;
    UIImageView * _icon;
    UILabel * _priceLabel;
    NSDictionary * _storeData;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSDictionary *storeData;

+ (double)heightWithIconSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setStoreData:(id)arg1;
- (id)storeData;
- (void)tintColorDidChange;

@end
