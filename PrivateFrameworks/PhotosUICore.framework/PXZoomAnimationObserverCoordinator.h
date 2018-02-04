/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {
    <PXZoomAnimationObserverCoordinatorDelegate> * _delegate;
    struct { 
        bool animationWillBeginWithContext; 
        bool animationDidEndWithContext; 
    }  _delegateRespondsTo;
}

@property (nonatomic) <PXZoomAnimationObserverCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
