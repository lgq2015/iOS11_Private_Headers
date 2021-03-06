/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroBurstHelpers : NSObject

+ (bool)isBurstClip:(id)arg1 memory:(id)arg2;
+ (bool)isDateBasedBurstClip:(id)arg1 memory:(id)arg2;
+ (bool)isRealBurstClip:(id)arg1;
+ (id)photoAssetsForBurstAsset:(id)arg1 memory:(id)arg2;
+ (id)photoAssetsForDateBasedBurstAsset:(id)arg1 memory:(id)arg2;
+ (id)photoAssetsForRealBurstAsset:(id)arg1;
+ (id)thinOutAssets:(id)arg1 byKeepingOnlyOneAssetFromEachBurst:(id)arg2;

@end
