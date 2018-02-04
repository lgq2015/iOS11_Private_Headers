/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKARCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _altitudeOffset;
    bool  _alwaysUseCurrentFrame;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _arFrameToPredicatedFrameCorrectionMatrix;
    struct Quaternion<double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _imaginary; 
        double _scalar; 
    }  _arOrientation;
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _arTransform;
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _baseTransform;
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
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _currentARTransform;
    struct Coordinate2D<Radians, double> { 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } longitude; 
    }  _currentCoordinate;
    double  _currentZoomLevel;
    struct Unit<DegreeUnitDescription, double> { 
        double _value; 
    }  _fieldOfView;
    float  _fovy;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
    double  _height;
    long long  _interfaceOrientation;
    struct Quaternion<double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _imaginary; 
        double _scalar; 
    }  _interfaceOrientationRotation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastARCameraTransformMatrix;
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _lastARTransform;
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; } * _mapEngine;
    double  _maxZoomLevel;
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _offsetTransform;
    bool  _overrideARFieldOfView;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    unsigned long long  _trackingState;
    unsigned long long  _trackingStateReason;
    VKTimedAnimation * _transitionAnimation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Unit<DegreeUnitDescription' */ struct  fieldOfView; /* unknown property attribute:  double>=d} */
@property (nonatomic) struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; /* Warning: unhandled struct encoding: '{CameraFrame<geo::Radians' */ struct x10; }*globeView; /* unknown property attribute:  altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[24C]}^{__base<altitude::TextureMap *()>}}}} */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float heightScale;
@property (nonatomic) struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{_retain_ptr<GEOResourceManifestConfiguration *' */ struct x3; }*mapEngine; /* unknown property attribute:  std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{RigidTransform<double>={Quaternion<double>={Matrix<double' */ struct  offsetTransform; /* unknown property attribute:  1>=[3d]}} */
@property (nonatomic) bool overrideARFieldOfView;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_fovAdjustment;
- (struct Matrix<double, 3, 1> { double x1[3]; })_intersectAndResolveWorldCollision:(const struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; }*)arg1;
- (void)_setupPounceAnimation:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })_transformFromARCamera:(id)arg1;
- (void)_updateARContext;
- (void)_updateBaseTransform;
- (double)altitude;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })arCameraTransform;
- (void)arSessionWasInterrupted:(unsigned long long)arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })cameraFrame;
- (struct Geocentric<double> { double x1[3]; })cameraPosition;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (struct Unit<DegreeUnitDescription, double> { double x1; })fieldOfView;
- (struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)globeView;
- (double)heading;
- (float)heightScale;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isFullyPitched;
- (bool)isPitched;
- (struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)mapEngine;
- (id)mapRegion;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })offsetTransform;
- (bool)overrideARFieldOfView;
- (double)pitch;
- (double)presentationYaw;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)setFieldOfView:(struct Unit<DegreeUnitDescription, double> { double x1; })arg1;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)arg1;
- (void)setMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setOffsetTransform:(struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })arg1;
- (void)setOverrideARFieldOfView:(bool)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)tileSize;
- (double)topDownMinimumZoomLevel;
- (void)trasitionToARModeAtCoordinate:(struct { double x1; double x2; })arg1 withDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)trasitionToARModeFromCameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1 withDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)updateCameraFrameFromARTransform;
- (void)updateGlobeFromCamera;
- (void)updateWithARSession:(id)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (id)viewportInfo;

@end
