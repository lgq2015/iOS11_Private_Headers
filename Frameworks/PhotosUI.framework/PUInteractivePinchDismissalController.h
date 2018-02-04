/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController <PUPinchedTileTrackerDelegate, UIGestureRecognizerDelegate> {
    UIPinchGestureRecognizer * __pinchGestureRecognizer;
    PUPinchedTileTracker * __pinchedTileTracker;
    PUChangeDirectionValueFilter * __scaleDirectionValueFilter;
    bool  _handlingPinchGestureRecognizer;
}

@property (setter=_setPinchGestureRecognizer:, nonatomic, retain) UIPinchGestureRecognizer *_pinchGestureRecognizer;
@property (setter=_setPinchedTileTracker:, nonatomic, retain) PUPinchedTileTracker *_pinchedTileTracker;
@property (setter=_setScaleDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_scaleDirectionValueFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:, nonatomic) bool handlingPinchGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (bool)_isHandlingPinchGestureRecognizer;
- (id)_pinchGestureRecognizer;
- (id)_pinchedTileTracker;
- (id)_scaleDirectionValueFilter;
- (void)_setHandlingPinchGestureRecognizer:(bool)arg1;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (void)_setPinchedTileTracker:(id)arg1;
- (void)_setScaleDirectionValueFilter:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForInitialLayoutInfo:(id)arg2;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;

@end
