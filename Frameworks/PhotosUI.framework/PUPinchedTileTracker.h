/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPinchedTileTracker : PUInteractiveTileTracker {
    PUVelocityFilter * __angularVelocityFilter;
    PUVelocityFilter * __horizontalVelocityFilter;
    PUTileLayoutInfo * __initialLayoutInfo;
    PUChangeDirectionValueFilter * __pinchGestureRecognizerScaleDirectionValueFilter;
    double  __pinchProgress;
    PUPinchTracker * __pinchTracker;
    PUTileLayoutInfo * __targetLayoutInfo;
    PUVelocityFilter * __verticalVelocityFilter;
    struct { 
        bool respondsToInitialAspectRatioForTileWithLayoutInfo; 
        bool respondsToFinalLayoutInfoForTileWithLayoutInfo; 
    }  _delegateFlags;
    long long  _direction;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
}

@property (setter=_setAngularVelocityFilter:, nonatomic, retain) PUVelocityFilter *_angularVelocityFilter;
@property (setter=_setHorizontalVelocityFilter:, nonatomic, retain) PUVelocityFilter *_horizontalVelocityFilter;
@property (setter=_setInitialLayoutInfo:, nonatomic, retain) PUTileLayoutInfo *_initialLayoutInfo;
@property (setter=_setPinchGestureRecognizerScaleDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter;
@property (setter=_setPinchProgress:, nonatomic) double _pinchProgress;
@property (setter=_setPinchTracker:, nonatomic, retain) PUPinchTracker *_pinchTracker;
@property (setter=_setTargetLayoutInfo:, nonatomic, retain) PUTileLayoutInfo *_targetLayoutInfo;
@property (setter=_setVerticalVelocityFilter:, nonatomic, retain) PUVelocityFilter *_verticalVelocityFilter;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;

- (void).cxx_destruct;
- (id)_angularVelocityFilter;
- (id)_horizontalVelocityFilter;
- (id)_initialLayoutInfo;
- (id)_pinchGestureRecognizerScaleDirectionValueFilter;
- (double)_pinchProgress;
- (id)_pinchTracker;
- (void)_setAngularVelocityFilter:(id)arg1;
- (void)_setHorizontalVelocityFilter:(id)arg1;
- (void)_setInitialLayoutInfo:(id)arg1;
- (void)_setPinchGestureRecognizerScaleDirectionValueFilter:(id)arg1;
- (void)_setPinchProgress:(double)arg1;
- (void)_setPinchTracker:(id)arg1;
- (void)_setTargetLayoutInfo:(id)arg1;
- (void)_setVerticalVelocityFilter:(id)arg1;
- (id)_targetLayoutInfo;
- (void)_updateTargetLayoutInfoIfNeeded;
- (id)_verticalVelocityFilter;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (long long)direction;
- (id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(long long)arg3;
- (id)initWithTilingView:(id)arg1;
- (id)pinchGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end
