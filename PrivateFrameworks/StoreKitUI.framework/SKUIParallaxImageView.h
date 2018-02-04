/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imagePadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    SKUIImageView * _innerImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_updateInnerImageView;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)placeholder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImagePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
