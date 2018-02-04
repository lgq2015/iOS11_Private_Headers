/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCGalleryCollectionCell : UICollectionViewCell {
    bool  _active;
    UIImage * _calloutImage;
    NSString * _calloutName;
    NSLayoutConstraint * _centerConstraint;
    NTKCFaceContainerView * _faceContainerView;
    UIFontMetrics * _fontMetrics;
    UIView * _highlightedView;
    NSLayoutConstraint * _leadingImageConstraint;
    NSLayoutConstraint * _nameBaselineConstraint;
    UIImageView * _nameImageView;
    UILabel * _nameLabel;
    NSLayoutConstraint * _trailingImageConstraint;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIImage *calloutImage;
@property (nonatomic, copy) NSString *calloutName;
@property (nonatomic, retain) UIView *faceView;
@property (nonatomic, retain) UIFontMetrics *fontMetrics;

+ (struct CGSize { double x1; double x2; })itemSizeWithCalloutName:(bool)arg1 andCalloutImage:(bool)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (void)_highlight;
- (bool)active;
- (id)calloutImage;
- (id)calloutName;
- (void)dealloc;
- (id)faceView;
- (id)fontMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)previewViewAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)setActive:(bool)arg1;
- (void)setCalloutImage:(id)arg1;
- (void)setCalloutName:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setFontAdjustingAttributes;
- (void)setFontMetrics:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateConstraints;

@end
