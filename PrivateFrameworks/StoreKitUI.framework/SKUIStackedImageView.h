/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource> {
    MPUBorderConfiguration * _borderConfiguration;
    MPUBorderDrawingCache * _borderDrawingCache;
    long long  _stackDepth;
    MPUStackView * _stackView;
}

@property (nonatomic, retain) MPUBorderDrawingCache *borderDrawingCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *perspectiveTargetView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } vanishingPoint;

+ (struct SKUIStackedImageConfiguration { struct UIOffset { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; long long x3; })_configurationForSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)borderDrawingCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfItemsInStackView:(id)arg1;
- (void)performCompressionAnimationWithCompletionHandler:(id /* block */)arg1;
- (id)perspectiveTargetView;
- (void)setBorderDrawingCache:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGPoint { double x1; double x2; })vanishingPoint;

@end
