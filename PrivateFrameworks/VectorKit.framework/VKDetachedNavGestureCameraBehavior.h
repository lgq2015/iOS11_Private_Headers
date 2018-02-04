/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior <VKNavGestureCameraBehavior> {
    VKNavCameraController * _navCameraController;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _startPitch;
    double  _startZoomScale;
    VKTimedAnimation * _tapZoomAnimation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void)_startZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithNavCameraController:(id)arg1;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end
