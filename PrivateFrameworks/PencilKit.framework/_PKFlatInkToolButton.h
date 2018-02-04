/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKFlatInkToolButton : UIButton <PKInkToolButton> {
    UIColor * _color;
    NSString * _identifier;
    bool  _isUsedOnDarkBackground;
    UIImageView * _nibImageView;
    UIImageView * _nibOutlineImageView;
    unsigned long long  _sizeState;
    UIImageView * _toolBaseImageView;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) UIImageView *nibImageView;
@property (nonatomic, retain) UIImageView *nibOutlineImageView;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic, retain) UIImageView *toolBaseImageView;

+ (struct CGSize { double x1; double x2; })_toolBaseImageSizeForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
+ (id)imageNameForIdentifier:(id)arg1;
+ (id)imageNameForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2 imageType:(id)arg3 isDarkUI:(bool)arg4;

- (void).cxx_destruct;
- (id)color;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (id)nibImageName;
- (id)nibImageView;
- (id)nibOutlineImageView;
- (id)nibStrokeImageName;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setNibImageView:(id)arg1;
- (void)setNibOutlineImageView:(id)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (void)setToolBaseImageView:(id)arg1;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2;
- (id)toolBaseImageName;
- (id)toolBaseImageView;

@end
