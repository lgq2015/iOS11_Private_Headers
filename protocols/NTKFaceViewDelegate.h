/* made by EzioChiu.
 */

@protocol NTKFaceViewDelegate <NSObject>

@required

- (bool)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(bool)arg2;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(bool)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)faceViewWantsToPresentViewController:(UIViewController *)arg1;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;

@end
