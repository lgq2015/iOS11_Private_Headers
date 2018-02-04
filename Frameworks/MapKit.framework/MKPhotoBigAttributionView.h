/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPhotoBigAttributionView : UIView {
    UIView * _backgroundView;
    _MKUILabel * _firstLineLabel;
    UIImageView * _imageView;
    UIView * _labelsView;
    MKMapItem * _mapItem;
    _MKUILabel * _secondLineLabel;
    long long  _type;
}

@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)setMapItem:(id)arg1 andType:(long long)arg2;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)updateBackground;
- (void)updateInfoAttributionString;

@end