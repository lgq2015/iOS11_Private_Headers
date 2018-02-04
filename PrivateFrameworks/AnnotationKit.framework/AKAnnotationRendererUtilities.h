/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationRendererUtilities : NSObject

+ (struct CGPoint { double x1; double x2; })_shadowDirectionForAnnotation:(id)arg1;
+ (void)beginShadowInContext:(struct CGContext { }*)arg1 forAnnotation:(id)arg2;
+ (void)endShadowInContext:(struct CGContext { }*)arg1;
+ (struct CGPath { }*)newStandardStrokedBorderPathWithPath:(struct CGPath { }*)arg1 withStrokeWidth:(double)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outsetRectForShadow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onAnnotation:(id)arg2;
+ (void)setStandardLineDashInContext:(struct CGContext { }*)arg1 forLineWidth:(double)arg2;
+ (void)setStandardLineStateInContext:(struct CGContext { }*)arg1 forLineWidth:(double)arg2;

@end
