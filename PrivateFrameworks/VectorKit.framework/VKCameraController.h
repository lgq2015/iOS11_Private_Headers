/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraController : NSObject <VKCameraController> {
    bool  _allowDatelineWraparound;
    VKCamera * _camera;
    <MDRenderTarget> * _canvas;
    <VKCameraControllerDelegate> * _delegate;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    bool  _gesturing;
    bool  _inProgressRegionChangeIsAnimated;
    bool  _isPitchEnabled;
    bool  _isRotateEnabled;
    unsigned long long  _regionChangeCount;
    bool  _staysCenteredDuringPinch;
    bool  _staysCenteredDuringRotation;
}

@property (nonatomic) bool allowDatelineWraparound;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) bool canPitch;
@property (nonatomic, readonly) bool canRotate;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic, readonly) bool isFullyPitched;
@property (nonatomic) bool isPitchEnabled;
@property (nonatomic, readonly) bool isPitched;
@property (nonatomic) bool isRotateEnabled;
@property (nonatomic, readonly) bool isRotated;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic) double pitch;
@property (nonatomic, readonly) double presentationHeading;
@property (nonatomic) bool staysCenteredDuringPinch;
@property (nonatomic) bool staysCenteredDuringRotation;
@property (readonly) Class superclass;

- (bool)allowDatelineWraparound;
- (double)altitude;
- (void)beginRegionChange:(bool)arg1;
- (id)camera;
- (bool)canPitch;
- (bool)canRotate;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (id)canvas;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (bool)centerCoordinate:(struct { double x1; double x2; }*)arg1 andDistanceFromCenter:(double*)arg2 forMapRegion:(id)arg3;
- (struct CGPoint { double x1; double x2; })centerScreenPoint;
- (void)checkAndResetRegionChangeCount;
- (double)currentZoomLevel;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (struct Matrix<int, 2, 1> { int x1[2]; })cursorFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (double)distanceFromCenterCoordinate;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)endRegionChange;
- (double)heading;
- (bool)isAnimating;
- (bool)isChangingRegion;
- (bool)isFullyPitched;
- (bool)isGesturing;
- (bool)isPitchEnabled;
- (bool)isPitched;
- (bool)isRotateEnabled;
- (bool)isRotated;
- (id)mapRegion;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevel;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)pitch;
- (double)presentationHeading;
- (bool)restoreViewportFromInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })scaledScreenPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setCamera:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setIsPitchEnabled:(bool)arg1;
- (void)setIsRotateEnabled:(bool)arg1;
- (void)setPitch:(double)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (double)topDownMinimumZoomLevel;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (void)updateCameraToPositionOrientationLimits;
- (void)updateWithTimestamp:(double)arg1;
- (id)viewportInfo;
- (bool)wantsTimerTick;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;

@end
