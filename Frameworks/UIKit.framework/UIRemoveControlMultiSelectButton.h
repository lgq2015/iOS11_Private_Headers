/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {
    unsigned int  _isHighlighted;
    unsigned int  _isSelected;
}

+ (float)defaultWidth;
+ (id)minusCenterImage;
+ (id)minusImage;
+ (id)plusImage;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRemoveControl:(id)arg1;
- (bool)isHiding;
- (bool)isHighlighted;
- (bool)isRotated;
- (bool)isRotating;
- (void)setHiding:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 highlighted:(bool)arg2;
- (void)toggleRotate:(bool)arg1;

@end
