/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIAchievementBadgeCache : NSObject

+ (id)_cacheKeyForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)_cachedImagePathForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)_cachedImagesPathForAchievement:(id)arg1;
+ (id)_cachedModelPathForAchievement:(id)arg1;
+ (id)_cachedModelsPath;
+ (void)_cleanUpOldAssets;
+ (bool)_decompressZipFileAtPath:(id)arg1 toDirectory:(id)arg2;
+ (id)_thumbnailCache;
+ (id)badgeModelPathForAchievement:(id)arg1;
+ (bool)hasCachedThumbnailForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)thumbnailForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

@end
