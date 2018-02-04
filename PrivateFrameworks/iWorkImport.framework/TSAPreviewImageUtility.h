/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPreviewImageUtility : NSObject

+ (void)drawInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 image:(struct CGImage { }*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scaledSize:(struct CGSize { double x1; double x2; })arg5 scale:(double)arg6 flip:(bool)arg7;
+ (bool)imageIsOpaque:(struct CGImage { }*)arg1;
+ (struct CGImage { }*)newPrerenderedImageFromImage:(struct CGImage { }*)arg1;
+ (struct CGImage { }*)newPrerenderedImageFromImage:(struct CGImage { }*)arg1 preserveAlpha:(bool)arg2;
+ (id)scaleImage:(struct CGImage { }*)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

@end
