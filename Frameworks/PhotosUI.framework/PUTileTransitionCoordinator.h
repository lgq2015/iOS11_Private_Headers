/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileTransitionCoordinator : NSObject

+ (id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5;
+ (id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(bool)arg1 tilingView:(id)arg2;
+ (id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 layout:(id)arg2 viewModel:(id)arg3;
+ (id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2;
+ (id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withTilingView:(id)arg3 anchorAssetReference:(id)arg4 context:(id)arg5;
+ (id)defaultTileTransitionCoordinatorForUpdates;

- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)newTileAnimationOptions;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end
