/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGraphicsImageRenderer : UIGraphicsRenderer

+ (struct CGContext { }*)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext { }*)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;

- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(id /* block */)arg2;
- (id)PNGDataWithActions:(id /* block */)arg1;
- (bool)allowsImageOutput;
- (id)imageWithActions:(id /* block */)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2;
- (void)pushContext:(id)arg1;

@end