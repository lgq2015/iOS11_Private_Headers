/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollageView : UIView {
    NSPointerArray * __imageSizes;
    NSArray * __imageViews;
    long long  __numberOfImageViews;
    PXRoundedCornerOverlayView * __roundedCornerOverlayView;
    struct CGSize { 
        double width; 
        double height; 
    }  _collageSize;
    double  _cornerRadius;
    UIColor * _cornersBackgroundColor;
    bool  _hasRoundedCorners;
    long long  _numberOfItems;
    double  _spacing;
    double  _subitemCornerRadius;
}

@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (nonatomic, readonly) NSArray *_imageViews;
@property (nonatomic, readonly) long long _numberOfImageViews;
@property (setter=_setRoundedCornerOverlayView:, nonatomic, retain) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic) struct CGSize { double x1; double x2; } collageSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *cornersBackgroundColor;
@property (nonatomic) bool hasRoundedCorners;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double spacing;
@property (nonatomic) double subitemCornerRadius;

+ (long long)maximumNumberOfItems;

- (void).cxx_destruct;
- (id)_imageSizes;
- (id)_imageViews;
- (long long)_numberOfImageViews;
- (id)_roundedCornerOverlayView;
- (void)_setRoundedCornerOverlayView:(id)arg1;
- (void)_updateImageViews;
- (void)_updateRoundedCornerOverlayView;
- (struct CGSize { double x1; double x2; })collageSize;
- (double)cornerRadius;
- (id)cornersBackgroundColor;
- (bool)hasRoundedCorners;
- (struct CGSize { double x1; double x2; })imageSizeForItemAtIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfItems;
- (void)setCollageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornersBackgroundColor:(id)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setHasRoundedCorners:(bool)arg1 withCornersBackgroundColor:(id)arg2;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndex:(long long)arg2;
- (void)setNumberOfItems:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (void)setSubitemCornerRadius:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)spacing;
- (double)subitemCornerRadius;

@end
