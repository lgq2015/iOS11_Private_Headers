/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisDiskUtilities : NSObject

+ (id)_delimiterForFilenames;
+ (id)_substituteForDotInBundleIdentifier;
+ (bool)hasPendingWork;
+ (id)irisVideoDirectoryPath;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(bool)arg1;
+ (bool)isValidVideoDestinationPath:(id)arg1;
+ (bool)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id*)arg2 videoPersistenceUUID:(id*)arg3 captureDevice:(long long*)arg4 captureOrientation:(long long*)arg5 captureTime:(double*)arg6 persistenceOptions:(long long*)arg7 temporaryPersistenceOptions:(long long*)arg8 bundleIdentifier:(id*)arg9 filterName:(id*)arg10;
+ (id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(bool)arg3 bundleIdentifier:(id)arg4;
+ (id)videoPathExtension;

@end
