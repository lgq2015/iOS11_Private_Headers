/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCropAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { double x1; double x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (bool)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (bool)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGPath { }*)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double*)arg3;
+ (void)_pixelAlignedBaseRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 interiorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 scaleFactor:(double*)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5;
+ (struct CGPath { }*)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath { }*)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;

@end
