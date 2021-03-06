/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXFaceDetection : NSObject

+ (id)convertFCRFacesArrayToFaceWrappersArray:(id)arg1 sourceImageSize:(struct CGSize { double x1; double x2; })arg2 activeCameraReturnsMirroredImage:(bool)arg3 scale:(float)arg4;
+ (id)photoDescription:(id)arg1 withFaceCount:(long long)arg2;
+ (id)photoFaceWrappers:(id)arg1;
+ (id)sharedFaceDetector;

@end
