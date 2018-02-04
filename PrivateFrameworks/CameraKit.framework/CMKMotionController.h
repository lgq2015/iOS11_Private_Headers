/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKMotionController : NSObject {
    BKSAccelerometer * __accelerometer;
    long long  __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    long long  _captureOrientation;
    long long  _deviceOrientation;
    long long  _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) long long _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (setter=_setCaptureOrientation:, nonatomic) long long captureOrientation;
@property (setter=_setDeviceOrientation:, nonatomic) long long deviceOrientation;
@property (setter=_setDominantPhysicalButton:, nonatomic) long long dominantPhysicalButton;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_accelerometer;
- (long long)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setCaptureOrientation:(long long)arg1;
- (void)_setDeviceOrientation:(long long)arg1;
- (void)_setDominantPhysicalButton:(long long)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1;
- (void)_updatePhysicalButtonObservation;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (long long)captureOrientation;
- (void)dealloc;
- (long long)deviceOrientation;
- (long long)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (id)init;

@end
