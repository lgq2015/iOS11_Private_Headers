/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSCNView : SCNView <ARInternalSessionObserver, _SCNSceneRendererDelegate> {
    NSMutableArray * _addedAnchors;
    NSObject<OS_dispatch_semaphore> * _anchorsSemaphore;
    unsigned long long  _arDebugOptions;
    bool  _automaticallyUpdatesLighting;
    SCNNode * _cameraNode;
    <SCNCaptureDeviceOutputConsumer> * _captureDeviceOutputConsumer;
    ARPointCloud * _currentlyVisibleDebugPointerCloud;
    long long  _developerPreferredFramesPerSecond;
    bool  _drawsCameraImage;
    SCNNode * _featurePointNode;
    long long  _frameToRemoveRotationSnapshotOn;
    long long  _interfaceOrientation;
    double  _lastFrameTimestamp;
    long long  _lastInterfaceOrientation;
    SCNNode * _lightNode;
    NSMutableDictionary * _nodesByAnchorIdentifier;
    id  _originalBackgroundContents;
    NSMutableArray * _removedAnchors;
    UIView * _rotationSnapshot;
    ARSession * _session;
    bool  _shouldRestrictFrameRate;
    long long  _targetFramesPerSecond;
    NSMutableArray * _updatedAnchors;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
    SCNNode * _worldOriginNode;
}

@property (nonatomic) long long actualPreferredFramesPerSecond;
@property (nonatomic) bool automaticallyUpdatesLighting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSCNViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property long long developerPreferredFramesPerSecond;
@property bool drawsCameraImage;
@property long long frameToRemoveRotationSnapshotOn;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SCNScene *scene;
@property (nonatomic, retain) ARSession *session;
@property bool shouldRestrictFrameRate;
@property (readonly) Class superclass;
@property long long targetFramesPerSecond;

- (void).cxx_destruct;
- (void)_addAnchors;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)_commonInit;
- (void)_forceUpdateCamera;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 frame:(id)arg2 types:(unsigned long long)arg3;
- (void)_removeAnchors;
- (void)_renderCapturedPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_updateAnchors;
- (void)_updateCamera:(id)arg1;
- (void)_updateDebugVisualization:(id)arg1;
- (void)_updateFramesPerSecondWithTarget:(long long)arg1 shouldRestrictFrameRate:(bool)arg2;
- (void)_updateLighting:(id)arg1;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2;
- (void)_updatePreferredFramesPerSecond;
- (long long)actualPreferredFramesPerSecond;
- (id)anchorForNode:(id)arg1;
- (bool)automaticallyUpdatesLighting;
- (void)cleanupLingeringRotationState;
- (unsigned long long)debugOptions;
- (id)description;
- (long long)developerPreferredFramesPerSecond;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didMoveToWindow;
- (bool)drawsCameraImage;
- (void)encodeWithCoder:(id)arg1;
- (long long)frameToRemoveRotationSnapshotOn;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 types:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (void)layoutSubviews;
- (id)nodeForAnchor:(id)arg1;
- (long long)preferredFramesPerSecond;
- (id)session;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setActualPreferredFramesPerSecond:(long long)arg1;
- (void)setAutomaticallyUpdatesLighting:(bool)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDeveloperPreferredFramesPerSecond:(long long)arg1;
- (void)setDrawsCameraImage:(bool)arg1;
- (void)setFrameToRemoveRotationSnapshotOn:(long long)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setScene:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldRestrictFrameRate:(bool)arg1;
- (void)setTargetFramesPerSecond:(long long)arg1;
- (bool)shouldRestrictFrameRate;
- (long long)targetFramesPerSecond;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;

@end
