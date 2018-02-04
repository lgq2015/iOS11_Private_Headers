/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLInteractiveCameraController : NSObject {
    MDLStereoscopicCamera * _camera;
    void _clickPoint;
    void _dragPoint;
    void _dragVector;
    struct MDLAABB { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*maxBounds; 
    }  _framingBounds;
    void _lookAt;
    unsigned long long  _mode;
    float  _pitch;
    float  _targetDistance;
    float  _targetElevation;
    float  _trackSpeed;
    void _trackVector;
    float  _tumbleSpeed;
    void _viewSize;
    float  _yaw;
    float  _zoom;
    float  _zoomSpeed;
}

@property (nonatomic, copy) MDLStereoscopicCamera *camera;
@property (nonatomic) void clickPoint;
@property (nonatomic) void dragPoint;
@property (nonatomic) struct MDLAABB { } framingBounds;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) void position;
@property (nonatomic) float targetDistance;
@property (nonatomic) void targetPosition;
@property (nonatomic) float trackSpeed;
@property (nonatomic) void trackVector;
@property (nonatomic) float tumbleSpeed;
@property (nonatomic) void viewSize;
@property (nonatomic) float zoom;
@property (nonatomic) float zoomSpeed;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)camera;
- (void)clickPoint;
- (void)dragPoint;
- (void)frameBounds;
- (void)frameObject;
- (struct MDLAABB { })framingBounds;
- (id)init;
- (unsigned long long)mode;
- (void)mouseMotionX:(float)arg1 Y:(float)arg2;
- (void)position;
- (void)setCamera:(id)arg1;
- (void)setClickPoint;
- (void)setDragPoint;
- (void)setFramingBounds:(struct MDLAABB { })arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPosition;
- (void)setTargetDistance:(float)arg1;
- (void)setTargetPosition;
- (void)setTrackSpeed:(float)arg1;
- (void)setTrackVector;
- (void)setTumbleSpeed:(float)arg1;
- (void)setViewSize;
- (void)setZoom:(float)arg1;
- (void)setZoomSpeed:(float)arg1;
- (float)targetDistance;
- (void)targetPosition;
- (float)trackSpeed;
- (void)trackVector;
- (float)tumbleSpeed;
- (void)update:(float)arg1;
- (void)viewSize;
- (float)zoom;
- (float)zoomSpeed;

@end
