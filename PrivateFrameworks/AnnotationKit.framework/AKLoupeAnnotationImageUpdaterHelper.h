/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })magnifiedRectForUnmagnifiedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForFastPathLayer:(id)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unmagnifiedRectForMagnifiedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofLoupeAnnotation:(id)arg2;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 withFastPathLayer:(id)arg2 onPageController:(id)arg3;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;

@end
