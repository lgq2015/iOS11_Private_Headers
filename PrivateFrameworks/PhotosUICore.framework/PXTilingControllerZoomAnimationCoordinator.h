/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator {
    id  _context;
    <PXTilingControllerZoomAnimationCoordinatorDelegate> * _delegate;
    PXTilingController * _tilingController;
}

@property (nonatomic, readonly) id context;
@property (nonatomic) <PXTilingControllerZoomAnimationCoordinatorDelegate> *delegate;
@property (nonatomic, readonly) PXTilingController *tilingController;

- (void).cxx_destruct;
- (void)_animateTilesPassingTest:(id /* block */)arg1 forEndPointType:(long long)arg2 withZoomTransitionContext:(id)arg3 tileGeometryTransformer:(id /* block */)arg4;
- (void)_animateTilesPassingTest:(id /* block */)arg1 fromEndPointType:(long long)arg2 toEndPointType:(long long)arg3 alpha:(double)arg4 transform:(id)arg5 withOptions:(id)arg6 tileGeometryTransformer:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)animateContentForEndPointType:(long long)arg1 inView:(struct NSObject { Class x1; }*)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)context;
- (id)delegate;
- (id)init;
- (id)initWithTilingController:(id)arg1 context:(id)arg2;
- (void)moveTile:(id)arg1 toView:(struct NSObject { Class x1; }*)arg2 restorationBlock:(out id /* block */*)arg3;
- (void)setDelegate:(id)arg1;
- (id)tilingController;

@end