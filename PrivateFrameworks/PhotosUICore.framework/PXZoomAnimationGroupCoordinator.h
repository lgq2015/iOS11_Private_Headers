/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator {
    NSArray * _zoomAnimationCoordinators;
}

@property (nonatomic, readonly, copy) NSArray *zoomAnimationCoordinators;

- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)arg1 inView:(struct NSObject { Class x1; }*)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)init;
- (id)initWithZoomAnimationCoordinators:(id)arg1;
- (id)zoomAnimationCoordinators;

@end
