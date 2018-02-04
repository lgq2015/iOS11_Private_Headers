/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavCameraController : VKCameraController <VKGesturingCameraController, VKNavContextObserver, VKNavigationCameraController> {
    unsigned char  _alternateFramingSource;
    float  _animationTime;
    VKAttachedNavGestureCameraBehavior * _attachedGestureBehavior;
    long long  _baseDisplayRate;
    struct Unit<MeterUnitDescription, double> { 
        double _value; 
    }  _cameraDistanceFromTarget;
    struct CameraFrame<geo::Radians, double> { 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _cameraFrame;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _cameraPitch;
    unsigned char  _cameraType;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _clientFramingInsets;
    struct vector<geo::Coordinate3D<Radians, double>, std::__1::allocator<geo::Coordinate3D<Radians, double> > > { 
        struct Coordinate3D<Radians, double> {} *__begin_; 
        struct Coordinate3D<Radians, double> {} *__end_; 
        struct __compressed_pair<geo::Coordinate3D<Radians, double> *, std::__1::allocator<geo::Coordinate3D<Radians, double> > > { 
            struct Coordinate3D<Radians, double> {} *__first_; 
        } __end_cap_; 
    }  _coordinatesToFrame;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned long long __cap_; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        struct { 
                            unsigned char __size_; 
                        } ; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __first_; 
        } __r_; 
    }  _currentStyleName;
    double  _depthNear;
    double  _desiredZoomScale;
    VKDetachedNavGestureCameraBehavior * _detachedGestureBehavior;
    struct Spring<double, 1, md::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _distanceFromTargetSpring;
    bool  _enablePan;
    bool  _enablePitch;
    bool  _enableRotate;
    bool  _enableZoom;
    bool  _frameAllGroupedManeuvers;
    double  _framingDistanceAfterManeuver;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInset;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInsetProportional;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _framingScreenRect;
    VKGestureCameraBehavior<VKNavGestureCameraBehavior> * _gestureBehavior;
    double  _halfPuckSize;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _headingDelta;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _headingMinDelta;
    struct Spring<double, 1, md::SpringType::Angular> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _headingSpring;
    unsigned char  _headingType;
    bool  _ignorePointsBehind;
    bool  _insetsAnimating;
    bool  _isDetached;
    bool  _isTracking;
    struct CameraFrame<geo::Radians, double> { 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _lastCalculatedCameraFrame;
    unsigned long long  _lastTargetStyleIdentifier;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    unsigned char  _maneuversToFrame;
    double  _maxCameraHeight;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _maxCameraPitch;
    double  _maxFramingDistance;
    double  _maxHeightDeltaChangeHorizontal;
    double  _maxHeightDeltaChangeVertical;
    unsigned char  _maxManeuversToFrame;
    double  _maxZoomScale;
    double  _minCameraHeight;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _minCameraPitch;
    double  _minHeightDeltaChangeHorizontal;
    double  _minHeightDeltaChangeVertical;
    double  _minZoomScale;
    VKNavContext * _navContext;
    bool  _needsUpdate;
    float  _panReturnDelayTime;
    bool  _panning;
    struct Spring<double, 1, md::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _pitchSpring;
    bool  _pitching;
    double  _previousUpdateTime;
    struct Coordinate3D<Radians, double> { 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } longitude; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } altitude; 
    }  _puckCoordinate;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _puckCourse;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMax;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMin;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckScreenPosition;
    bool  _rotating;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    struct Coordinate3D<Radians, double> { 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } longitude; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } altitude; 
    }  _routeFocusCoordinate;
    VKSceneConfiguration * _sceneConfiguration;
    VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> * _screenCanvas;
    struct Spring<double, 2, md::SpringType::Linear> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _position; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _velocity; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _screenPositionSpring;
    bool  _sentZoomNotification;
    VKTimedAnimation * _snapHeadingAnimation;
    VKTimedAnimation * _snapPitchAnimation;
    unsigned char  _styleManeuversToFrame;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    VKTimedAnimation * _transitionAnimation;
    struct CameraFrame<geo::Radians, double> { 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _transitionFrame;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _viewableScreenRect;
    bool  _zooming;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic) long long baseDisplayRate;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } clientFramingInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic, readonly) bool isFullyPitched;
@property (nonatomic, readonly) bool isPitched;
@property (nonatomic, readonly) bool isRotated;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic) double pitch;
@property (nonatomic) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> *screenCanvas;
@property (readonly) Class superclass;
@property (nonatomic) double zoomScale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addAdditionalRoutePointsToFrameToList:(struct vector<geo::Coordinate3D<Radians, double>, std::__1::allocator<geo::Coordinate3D<Radians, double> > > { struct Coordinate3D<Radians, double> {} *x1; struct Coordinate3D<Radians, double> {} *x2; struct __compressed_pair<geo::Coordinate3D<Radians, double> *, std::__1::allocator<geo::Coordinate3D<Radians, double> > > { struct Coordinate3D<Radians, double> {} *x_3_1_1; } x3; }*)arg1;
- (bool)_canZoomIn;
- (bool)_canZoomOut;
- (id)_debugText:(bool)arg1 showNavCameraDebugConsoleAttributes:(bool)arg2;
- (bool)_hasRunningAnimation;
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;
- (void)_setDetached:(bool)arg1;
- (void)_setNeedsUpdate;
- (void)_snapHeading;
- (void)_snapPitch;
- (void)_updateDebugOverlay;
- (void)_updateDebugText;
- (void)_updateObserverCouldZoomIn:(bool)arg1 couldZoomOut:(bool)arg2;
- (void)_updateSceneStyles:(bool)arg1;
- (bool)_updateSprings:(double)arg1;
- (void)_updateStyles;
- (void)_updateZoomScaleLimts;
- (double)altitude;
- (void)animateCameraWithDuration:(float)arg1 fromFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2 completionHandler:(id /* block */)arg3;
- (long long)baseDisplayRate;
- (struct Unit<RadianUnitDescription, double> { double x1; })calculateHeading;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })calculateViewableScreenRect;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })cameraFrame;
- (unsigned char)cameraHeadingType;
- (bool)canEnter3DMode;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })clientFramingInsets;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })currentCameraFrame;
- (double)currentZoomLevel;
- (void)dealloc;
- (id)detailedDescription;
- (double)distanceFromCenterCoordinate;
- (double)distanceToManeuver:(unsigned long long)arg1;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (double)heading;
- (id)init;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2;
- (bool)isGesturing;
- (bool)isPitchEnabled;
- (bool)isRotateEnabled;
- (struct Unit<RadianUnitDescription, double> { double x1; })maxCameraPitch;
- (double)maxZoomHeight;
- (double)maxZoomScale;
- (double)maximumZoomLevel;
- (struct Unit<RadianUnitDescription, double> { double x1; })minCameraPitch;
- (double)minZoomHeight;
- (double)minZoomScale;
- (double)minimumZoomLevel;
- (void)navContextCameraHeadingOverrideDidChange:(id)arg1;
- (void)navContextStateDidChange:(id)arg1;
- (double)pitch;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (struct Matrix<double, 2, 1> { double x1[2]; })puckScreenPixel;
- (void)resetSpringsToResting;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })restingCameraFrame;
- (void)returnToPuck;
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(bool)arg2;
- (struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })routeCoordinateAtDistance:(double)arg1;
- (struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2;
- (id)sceneConfiguration;
- (id)screenCanvas;
- (void)setBaseDisplayRate:(long long)arg1;
- (void)setCamera:(id)arg1;
- (void)setCameraFrame:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1;
- (void)setClientFramingInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNavContext:(id)arg1;
- (void)setSceneConfiguration:(id)arg1;
- (void)setScreenCanvas:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startWithPounce:(bool)arg1 startLocation:(struct { double x1; double x2; })arg2 startCourse:(double)arg3 pounceCompletionHandler:(id /* block */)arg4;
- (void)stop;
- (void)stopAnimations;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (double)topDownMinimumZoomLevel;
- (void)transferGestureState:(id)arg1;
- (void)updateCameraState;
- (void)updateLocation:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1 andCourse:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg2;
- (void)updateManeuversToFrame;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updatePointsToFrame;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateSpringsForFramingCamera;
- (void)updateSpringsForTrackingCamera;
- (void)updateWithTimestamp:(double)arg1;
- (bool)wantsTimerTick;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomScale;

@end
