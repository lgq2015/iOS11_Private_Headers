/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsTileTransitionCoordinator : NSObject <PXTileTransitionAnimationCoordinator> {
    PXBasicTileAnimationOptions * __basicAnimationOptions;
    NSArray * __changeDetails;
    PXSectionedChangeDetailsRepository * __changeHistory;
    PXAssetsTilingLayout * __fromLayout;
    NSIndexSet * __kindsCenteredOnContentTiles;
    NSIndexSet * __kindsCoveringContentTiles;
    NSIndexSet * __kindsWithDisabledAnimation;
    bool  __shouldCrossfade;
    PXTilingChange * __tilingChange;
    PXAssetsTilingLayout * __toLayout;
    bool  _delayInsertions;
    bool  _treatRemovalsAsDeletes;
}

@property (nonatomic, readonly) PXBasicTileAnimationOptions *_basicAnimationOptions;
@property (nonatomic, readonly) NSArray *_changeDetails;
@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *_changeHistory;
@property (nonatomic, readonly) PXAssetsTilingLayout *_fromLayout;
@property (nonatomic, readonly) NSIndexSet *_kindsCenteredOnContentTiles;
@property (nonatomic, readonly) NSIndexSet *_kindsCoveringContentTiles;
@property (nonatomic, readonly) NSIndexSet *_kindsWithDisabledAnimation;
@property (nonatomic, readonly) bool _shouldCrossfade;
@property (nonatomic, readonly) PXTilingChange *_tilingChange;
@property (nonatomic, readonly) PXAssetsTilingLayout *_toLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayInsertions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool treatRemovalsAsDeletes;

+ (id)transitionCoordinatorForChange:(id)arg1 changeHistory:(id)arg2;

- (void).cxx_destruct;
- (id)_basicAnimationOptions;
- (id)_changeDetails;
- (id)_changeHistory;
- (id)_fromLayout;
- (id)_kindsCenteredOnContentTiles;
- (id)_kindsCoveringContentTiles;
- (id)_kindsWithDisabledAnimation;
- (bool)_shouldCrossfade;
- (id)_tilingChange;
- (id)_toLayout;
- (bool)delayInsertions;
- (bool)getFinalGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 finalUserData:(out id*)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg3 fromGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg4 fromUserData:(id)arg5;
- (bool)getInitialGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 initialUserData:(out id*)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg3 toGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg4 toUserData:(id)arg5;
- (id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2;
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg5 toUserData:(id)arg6;
- (void)setDelayInsertions:(bool)arg1;
- (void)setTreatRemovalsAsDeletes:(bool)arg1;
- (bool)treatRemovalsAsDeletes;
- (bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 fromGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg4 toUserData:(id)arg5;

@end
