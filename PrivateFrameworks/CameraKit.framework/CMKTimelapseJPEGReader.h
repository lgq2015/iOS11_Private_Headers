/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseJPEGReader : NSObject

+ (id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(bool)arg2 useBGRA:(bool)arg3;
+ (struct CGImage { }*)createCGImageFromData:(id)arg1 applyTransform:(bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(bool)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromData:(id)arg1 applyTransform:(bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(bool)arg4;
+ (id)newDataFromFilePath:(id)arg1;

@end
