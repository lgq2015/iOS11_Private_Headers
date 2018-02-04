/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCameraController : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*localArcballAdjustement; 
    }  _arcball;
    bool  _automaticTarget;
    <SCNCameraControllerDelegate> * _delegate;
    bool  _drivenBydefaultNavigationCameraController;
    bool  _handlingInteraction;
    struct { 
        bool inertiaEnabled; 
        bool inertiaRunning; 
        double lastSimulationTime; 
        float friction; 
        float rotationSensitivity; 
        float translationSensitivity; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*velocity; 
    }  _inertia;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*start; 
    }  _inputLocation;
    long long  _interactionMode;
    void _maximumAngles;
    void _minimumAngles;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*angles; 
    }  _orientationState;
    SCNNode * _pointOfView;
    void _target;
    void _up;
}

@property (nonatomic) bool automaticTarget;
@property (nonatomic) <SCNCameraControllerDelegate> *delegate;
@property (nonatomic) bool drivenByDefaultNavigationCameraController;
@property (nonatomic) float horizontalMaximumAngle;
@property (nonatomic) bool inertiaEnabled;
@property (nonatomic) float inertiaFriction;
@property (getter=isInertiaRunning, nonatomic, readonly) bool inertiaRunning;
@property (nonatomic) long long interactionMode;
@property (nonatomic) float maximumHorizontalAngle;
@property (nonatomic) float maximumVerticalAngle;
@property (nonatomic) float minimumHorizontalAngle;
@property (nonatomic) float minimumVerticalAngle;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic) void simdTarget;
@property (nonatomic) void simdUp;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } target;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } up;
@property (nonatomic) float verticalMaximumAngle;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } worldUp;

- (void)_capOrientationAnglesToMaximum;
- (struct { })_convertRotationFromWorldToPointOfView:(struct { })arg1;
- (void)_directionForScreenPoint:(struct CGPoint { double x1; double x2; })arg1 viewport:(struct CGSize { double x1; double x2; })arg2;
- (void)_endDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isLocationValid:(struct CGPoint { double x1; double x2; })arg1 inViewport:(struct CGSize { double x1; double x2; })arg2;
- (void)_mapToSphere:(struct CGPoint { double x1; double x2; })arg1 inViewport:(struct CGSize { double x1; double x2; })arg2;
- (struct { })_orientationForMode;
- (void)_orthographicViewSpaceTranslationForZoomAtScreenPoint:(void *)arg1 scaleDelta:(void *)arg2 viewport:(void *)arg3; // needs 3 arg types, found 2: float, struct CGSize { double x1; double x2; }
- (void)_resetOrientationState;
- (void)_rotateByX:(float)arg1 Y:(float)arg2;
- (void)_setInertiaRunning:(bool)arg1;
- (void)_targetRelativeToPointOfViewParent;
- (void)_translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)_updateArcballOrientation;
- (void)_updateInertiaAtTime:(double)arg1;
- (void)_updateRotation;
- (bool)automaticTarget;
- (void)beginInteraction:(struct CGPoint { double x1; double x2; })arg1 withViewport:(struct CGSize { double x1; double x2; })arg2;
- (void)clearRoll;
- (void)continueInteraction:(struct CGPoint { double x1; double x2; })arg1 withViewport:(struct CGSize { double x1; double x2; })arg2 sensitivity:(double)arg3;
- (void)dealloc;
- (id)delegate;
- (void)dollyBy:(float)arg1 onScreenPoint:(struct CGPoint { double x1; double x2; })arg2 viewport:(struct CGSize { double x1; double x2; })arg3;
- (void)dollyToTarget:(float)arg1;
- (bool)drivenByDefaultNavigationCameraController;
- (void)endInteraction:(struct CGPoint { double x1; double x2; })arg1 withViewport:(struct CGSize { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)frameNodes:(id)arg1;
- (float)horizontalMaximumAngle;
- (bool)inertiaEnabled;
- (float)inertiaFriction;
- (id)init;
- (long long)interactionMode;
- (bool)isInertiaRunning;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })lookAtWithtarget;
- (float)maximumHorizontalAngle;
- (float)maximumVerticalAngle;
- (float)minimumHorizontalAngle;
- (float)minimumVerticalAngle;
- (id)pointOfView;
- (void)rollAroundTarget:(float)arg1;
- (void)rollBy:(float)arg1 aroundScreenPoint:(struct CGPoint { double x1; double x2; })arg2 viewport:(struct CGSize { double x1; double x2; })arg3;
- (void)rollCameraSpaceBy:(float)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2 viewport:(struct CGSize { double x1; double x2; })arg3;
- (void)rotateByX:(float)arg1 Y:(float)arg2;
- (void)setAutomaticTarget:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrivenByDefaultNavigationCameraController:(bool)arg1;
- (void)setHorizontalMaximumAngle:(float)arg1;
- (void)setInertiaEnabled:(bool)arg1;
- (void)setInertiaFriction:(float)arg1;
- (void)setInteractionMode:(long long)arg1;
- (void)setMaximumHorizontalAngle:(float)arg1;
- (void)setMaximumVerticalAngle:(float)arg1;
- (void)setMinimumHorizontalAngle:(float)arg1;
- (void)setMinimumVerticalAngle:(float)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPointOfView:(id)arg1 updateUpTransform:(bool)arg2;
- (void)setSimdTarget;
- (void)setSimdUp;
- (void)setTarget:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setUp:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setVerticalMaximumAngle:(float)arg1;
- (void)setWorldUp:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)simdTarget;
- (void)simdUp;
- (void)stopInertia;
- (struct SCNVector3 { float x1; float x2; float x3; })target;
- (void)translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)translateInScreenSpaceTo:(struct CGPoint { double x1; double x2; })arg1 viewport:(struct CGSize { double x1; double x2; })arg2;
- (struct { })unrolledWorldOrientation:(out float*)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })up;
- (void)updateInertiaAtTime:(double)arg1;
- (bool)useOrbitInteractionMode;
- (float)verticalMaximumAngle;
- (struct SCNVector3 { float x1; float x2; float x3; })worldUp;

@end
