/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOverlayEffect : UIVisualEffect {
    double  _alpha;
    UIColor * _color;
    NSString * _filterType;
    UIImage * _image;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (double)alpha;
- (id)color;
- (void)encodeWithCoder:(id)arg1;
- (id)filterType;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setFilterType:(id)arg1;
- (void)setImage:(id)arg1;

@end