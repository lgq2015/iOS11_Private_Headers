/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor> {
    BWFigVideoCaptureDevice * _device;
    bool  _faceMotionDetectionEnabled;
    bool  _frameMirrored;
    int  _frameRotationDegrees;
    bool  _haveFrameRotationAndMirror;
    FigCaptureImageMotionDetector * _motionDetector;
    NSObject<OS_dispatch_queue> * _processingQueue;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _requestedSuspendPTSRange;
    FigStateMachine * _stateMachine;
    id /* block */  _suspendCompletionHandler;
    int  _timeMachineCapacity;
    NSMutableArray * _timeMachineFrames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timeMachineLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) struct { int x1; int x2; } frameDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)_computeMotionDetectionFaceRectForSampleBuffers:(id)arg1 faceMotionRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)_setupStateMachine;
- (void)dealloc;
- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didReachEndOfDataForInput:(id)arg1;
- (struct { int x1; int x2; })frameDimensions;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned int)arg2 timeMachineCapacity:(int)arg3;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resume;
- (void)suspendWithPTSRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 completionHandler:(id /* block */)arg2;

@end
