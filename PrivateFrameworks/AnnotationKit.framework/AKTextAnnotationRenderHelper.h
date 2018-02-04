/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextAnnotationRenderHelper : NSObject

+ (bool)_hitTestPoint:(struct CGPoint { double x1; double x2; })arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 contextForVisualDebugging:(struct CGContext { }*)arg4;
+ (id)_sharedLayoutManager;
+ (void)getAnnotationRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 textBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 containerSize:(struct CGSize { double x1; double x2; }*)arg3 exclusionPaths:(id*)arg4 isTextClipped:(bool*)arg5 forAnnotation:(id)arg6 onPageController:(id)arg7 orInContext:(struct CGContext { }*)arg8 shouldAlignToPixels:(bool)arg9 optionalText:(id)arg10 optionalCenter:(struct CGPoint { double x1; double x2; })arg11 optionalProposedRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg12;
+ (bool)hitTestPoint:(struct CGPoint { double x1; double x2; })arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)renderAnnotationText:(id)arg1 intoContext:(struct CGContext { }*)arg2 isForScreen:(bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGSize { double x1; double x2; })unconstrainedSizeForText:(id)arg1;

@end
