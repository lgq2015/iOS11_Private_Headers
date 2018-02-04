/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface TintedView : UIView {
    UIImage * _image;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (id)init;
- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
