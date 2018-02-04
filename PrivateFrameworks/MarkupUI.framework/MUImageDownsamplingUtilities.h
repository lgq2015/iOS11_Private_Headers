/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUImageDownsamplingUtilities : NSObject

+ (id)_flattenEXIFOrientation:(bool)arg1 withDownsampling:(bool)arg2 sourceContent:(id)arg3 withUTI:(id)arg4;
+ (bool)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2;
+ (id)_flattenRotation:(bool)arg1 withDownsampling:(bool)arg2 sourceImage:(id)arg3;
+ (double)_maxDimensionOfSize:(struct CGSize { double x1; double x2; })arg1 fittingToArea:(double)arg2;
+ (struct CGImageSource { }*)_newImageSourceWithSourceContent:(id)arg1;
+ (id)_preferredFileDisplayNameForSourceContent:(id)arg1;
+ (id)_preferredFileExtensionForContentType:(id)arg1;
+ (void)_shouldFlattenEXIFOrientation:(bool*)arg1 andDownsample:(bool*)arg2 sourceContent:(id)arg3;
+ (struct CGSize { double x1; double x2; })_sizeFittingArea:(double)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)_sourceContentType:(id)arg1;
+ (id)_uniqueTemporaryDirectory;

@end
