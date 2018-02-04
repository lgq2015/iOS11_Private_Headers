/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView> {
    FBSceneSnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) id IOSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBSceneSnapshot *sceneSnapshot;
@property (readonly) Class superclass;

- (id)IOSurface;
- (id)_initWithSnapshot:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sceneSnapshot;

@end
