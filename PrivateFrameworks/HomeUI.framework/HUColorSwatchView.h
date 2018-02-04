/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorSwatchView : UIView {
    unsigned long long  _selectionState;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) CAShapeLayer *layer;
@property (nonatomic) unsigned long long selectionState;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;
- (id)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)selectionState;
- (void)setColor:(id)arg1;
- (void)setSelectionState:(unsigned long long)arg1;

@end
