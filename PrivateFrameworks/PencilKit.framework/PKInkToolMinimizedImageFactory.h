/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkToolMinimizedImageFactory : NSObject

+ (id)_baseNameForInkIdentifier:(id)arg1 imageType:(id)arg2;
+ (id)_iPadImageForEraserWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)_iPadImageForToolWithInk:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)_imageForInk:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 inkPickerSizeState:(unsigned long long)arg4;
+ (id)_imageNameWithBaseName:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)_maskImageForSizeState:(unsigned long long)arg1;
+ (id)_minimizedToolImageForInk:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 sizeState:(unsigned long long)arg4;
+ (id)_ringImageForSizeState:(unsigned long long)arg1;
+ (id)imageForInk:(id)arg1 sizeState:(unsigned long long)arg2;

@end
