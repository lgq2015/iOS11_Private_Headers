/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackViewItemView : UIView {
    UIColor * _borderColor;
    UIImage * _image;
    bool  _shouldFlipImageHorizontal;
    bool  _shouldFlipImageVertical;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool shouldFlipImageHorizontal;
@property (nonatomic) bool shouldFlipImageVertical;

- (void).cxx_destruct;
- (id)borderColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setBorderColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldFlipImageHorizontal:(bool)arg1;
- (void)setShouldFlipImageVertical:(bool)arg1;
- (bool)shouldFlipImageHorizontal;
- (bool)shouldFlipImageVertical;

@end
