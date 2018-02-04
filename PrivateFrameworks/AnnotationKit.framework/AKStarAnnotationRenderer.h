/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKStarAnnotationRenderer : AKPolygonAnnotationRenderer

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (bool)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (bool)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 optionalText:(id)arg3;
+ (id)_innerStarPoints:(id)arg1 withInnerRadiusFactor:(double)arg2;
+ (struct CGPath { }*)_newPathForAnnotation:(id)arg1;
+ (double)_segLengthOfStarWithPoints:(id)arg1;
+ (double)defaultInnerRadiusForStar:(id)arg1;
+ (double)innerRadiusFactorForPoint:(struct CGPoint { double x1; double x2; })arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (id)innerStarPoints:(id)arg1;
+ (id)starPoints:(id)arg1;

@end
