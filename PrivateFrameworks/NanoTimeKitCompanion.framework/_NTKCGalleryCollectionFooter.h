/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCGalleryCollectionFooter : UICollectionReusableView {
    UILabel * _label;
}

@property (nonatomic, retain) NSString *text;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (id)text;

@end
