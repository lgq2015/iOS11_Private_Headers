/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer

+ (void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(struct CGPoint { double x1; double x2; }*)arg2 outBezierStartParameter:(double*)arg3 outEndIntersection:(struct CGPoint { double x1; double x2; }*)arg4 outBezierEndParameter:(double*)arg5;
+ (void)_arrowHeadPathsForArrow:(id)arg1 inOutStartArrowHead:(struct CGPath { }*)arg2 outBezierStartParameter:(double*)arg3 inOutEndArrowHead:(struct CGPath { }*)arg4 outBezierEndParameter:(double*)arg5;
+ (struct CGSize { double x1; double x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (bool)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (bool)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 optionalText:(id)arg3;
+ (void)_controlPointsForArrow:(id)arg1 outControlPoint1:(struct CGPoint { double x1; double x2; }*)arg2 outControlPoint2:(struct CGPoint { double x1; double x2; }*)arg3;
+ (struct CGPoint { double x1; double x2; })_cubicBezierPointForParameter:(double)arg1 start:(struct CGPoint { double x1; double x2; })arg2 controlPt1:(struct CGPoint { double x1; double x2; })arg3 controlPt2:(struct CGPoint { double x1; double x2; })arg4 end:(struct CGPoint { double x1; double x2; })arg5;
+ (void)_drawPathForArrow:(id)arg1 inContext:(struct CGContext { }*)arg2 inPath:(struct CGPath { }*)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5;
+ (unsigned long long)_drawableArrowHeads:(id)arg1;
+ (struct CGPath { }*)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)_newLinePathForArrow:(id)arg1 withHeads:(bool)arg2 fromBezierParameter:(double)arg3 toBezierParameter:(double)arg4 optionalPageController:(id)arg5 optionalContext:(struct CGContext { }*)arg6;
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5;

@end
