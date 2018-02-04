/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    bool  _active;
    CAShapeLayer * _background;
    UILabel * _label;
    bool  _usesShortTextWidth;
}

@property (nonatomic) bool active;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool usesShortTextWidth;

- (void).cxx_destruct;
- (id)_activeFont;
- (id)_activeTextColor;
- (id)_inactiveFont;
- (id)_inactiveTextColor;
- (bool)active;
- (id)init;
- (void)layoutSubviews;
- (void)setActive:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUsesShortTextWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (bool)usesShortTextWidth;

@end
