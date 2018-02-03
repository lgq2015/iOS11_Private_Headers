/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureCalibrationMonitor : NSObject {
    FigCaptureAPSSphereInteractionCalibrationContext * _apsSphereInteractionCalibrationContext;
    FigCaptureAutoFocusCalibrationContext * _autoFocusCalibrationContext;
    FigCaptureAutoFocusPositionSensorCalibrationContext * _autoFocusPositionSensorCalibrationContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _calibrationLock;
    NSObject<OS_dispatch_queue> * _calibrationRunQueue;
    bool  _calibrationShouldAbort;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _coreMotionMagneticField;
    double  _coreMotionMagneticFieldMagnitude;
    int  _magneticFieldAccuracyAttemptCount;
    int  _magneticFieldAttempt;
    struct { 
        int attemptCount; 
        double threshold; 
    }  _magneticFieldMagnitudeTiers;
    FigCaptureSphereCalibrationContext * _sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext * _sphereEndStopCalibrationContext;
    NSMutableArray * _streamCalibrationInformation;
}

+ (void)initialize;
+ (void)initializeSharedInstance;
+ (id)sharedInstance;

- (void)_attemptToRunCalibrationForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 resultsBlock:(id /* block */)arg4;
- (bool)_calibrationShouldAbort;
- (id)_createDefaultXPCSchedulingParametersWithInterval:(int)arg1 batteryLevel:(int)arg2;
- (double)_getMagneticThresholdFromAttempt;
- (void)_notifyOfDeviceMotion;
- (id)_runAndCreateDictionaryForCalibrationContext:(id)arg1 deviceType:(int)arg2 devicePosition:(int)arg3 errors:(unsigned int*)arg4;
- (void)_setCalibrationShouldAbort:(bool)arg1;
- (void)_setupActivityAndTriggers:(const char *)arg1 interval:(int)arg2 batteryLevel:(int)arg3 calibrationBlock:(id /* block */)arg4 isRepeating:(bool)arg5;
- (void)_setupCalibrationForContext:(id)arg1;
- (void)_setupDuetTriggersAndScheduling;
- (void)_setupRepeatingCalibrationScheduling:(id)arg1 withCalibrationBlock:(id /* block */)arg2;
- (id)apsSphereInteractionCalibrationData;
- (id)autoFocusCalibrationData;
- (id)autoFocusPositionSensorCalibrationData;
- (id)init;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end