/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
 */

@interface VPScannerView : UIView <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDevice * _avCaptureDevice;
    NSObject<OS_dispatch_queue> * _avCaptureQueue;
    AVCaptureSession * _avCaptureSession;
    AVCaptureVideoPreviewLayer * _avPreviewLayer;
    struct HCImagePerspectiveReader { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct InternalDataStructPersp {} *x6; char *x7; bool x8; } * _reader;
    unsigned long long  _readerHeight;
    float  _readerLastProgress;
    unsigned long long  _readerLastWatermarkTicks;
    unsigned long long  _readerResetTicks;
    unsigned long long  _readerRowBytes;
    unsigned long long  _readerWidth;
    id /* block */  _scannedCodeHandler;
    bool  _scanning;
    CAShapeLayer * _viewfinderBorderLayer;
    CAShapeLayer * _viewfinderRevealLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ scannedCodeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCaptureSessionInterrupted:(id)arg1;
- (void)_handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)_handleCaptureSessionRuntimeError:(id)arg1;
- (void)_handleCaptureSessionStarted:(id)arg1;
- (void)_handleCaptureSessionStopped:(id)arg1;
- (void)_initCommon;
- (id)_setupCapture;
- (id)_setupDevice:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id /* block */)scannedCodeHandler;
- (void)setScannedCodeHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
