/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIFlyingBadgeView : PXUIExtensionBadgeView <_PXUIExpandableBadgeViewDelegate> {
    NSArray * _expandableBadgeViews;
    NSArray * _flyingBadges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *flyingBadges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_performAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)didMoveToSuperview;
- (void)expandableBadgeViewDidChangeMainBadgeView:(id)arg1;
- (void)expandableBadgeViewDidCollapse:(id)arg1;
- (void)expandableBadgeViewDidExpand:(id)arg1;
- (id)flyingBadges;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1 flyingBadges:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)stateDidChange;

@end
