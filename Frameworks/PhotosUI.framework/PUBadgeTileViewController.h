/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate> {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
    }  __badgeInfo;
    PXUIAssetBadgeView * __badgeView;
    bool  __isOverContent;
    bool  __needsUpdateBadgeInfo;
    bool  __needsUpdateBadgeView;
    bool  __shouldAnimateNextBadgeViewUpdate;
    PUAssetViewModel * _assetViewModel;
}

@property (setter=_setBadgeInfo:, nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } _badgeInfo;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (setter=_setOverContent:, nonatomic) bool _isOverContent;
@property (setter=_setNeedsUpdateBadgeInfo:, nonatomic) bool _needsUpdateBadgeInfo;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) bool _needsUpdateBadgeView;
@property (setter=_setShouldAnimateNextBadgeViewUpdate:, nonatomic) bool _shouldAnimateNextBadgeViewUpdate;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg2 isOverContent:(bool)arg3 animated:(bool)arg4;
+ (struct CGSize { double x1; double x2; })badgeTileSizeForAssetViewModel:(id)arg1;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })_badgeInfo;
- (id)_badgeView;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeView;
- (bool)_isOverContent;
- (bool)_needsUpdate;
- (bool)_needsUpdateBadgeInfo;
- (bool)_needsUpdateBadgeView;
- (void)_setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBadgeInfo:(bool)arg1;
- (void)_setNeedsUpdateBadgeView:(bool)arg1;
- (void)_setOverContent:(bool)arg1;
- (void)_setShouldAnimateNextBadgeViewUpdate:(bool)arg1;
- (bool)_shouldAnimateNextBadgeViewUpdate;
- (void)_updateBadge;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)loadView;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
