/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetSharingUtilities : NSObject

+ (double)_durationForVideoAssetURL:(id)arg1;
+ (double)_durationForVideoFilePath:(id)arg1;
+ (long long)_estimatedOutputFileLengthForDuration:(double)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3;
+ (id)_objectBuilderFromVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)_playerItemForVideoAssetURL:(id)arg1;
+ (struct CGImage { }*)_thumbnailForAssetURL:(id)arg1 useAspect:(bool)arg2;
+ (struct CGImage { }*)aspectRatioThumbnailForAssetURL:(id)arg1;
+ (id)assetForVideoURL:(id)arg1 metadata:(id)arg2 outAudioMix:(id*)arg3 outVideoComposition:(id*)arg4;
+ (long long)estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (id)exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3;
+ (id)exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3;
+ (id)filePathForVideoURL:(id)arg1 outMetadata:(id*)arg2;
+ (id)playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2;
+ (struct CGImage { }*)thumbnailForAssetURL:(id)arg1;

@end
