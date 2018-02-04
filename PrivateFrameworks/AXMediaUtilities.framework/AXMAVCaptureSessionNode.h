/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AXMVisionAnalysisOptions * _analysisOptions;
    NSObject<OS_dispatch_queue> * _avkit_queue;
    AVCaptureSession * _captureSession;
    <AXMAVCaptureSessionNodeDelegate> * _captureSessionNodeDelegate;
}

@property (nonatomic, retain) AXMVisionAnalysisOptions *analysisOptions;
@property (nonatomic) AVCaptureSession *captureSession;
@property (nonatomic) <AXMAVCaptureSessionNodeDelegate> *captureSessionNodeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)analysisOptions;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (id)captureSessionNodeDelegate;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)setAnalysisOptions:(id)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setCaptureSessionNodeDelegate:(id)arg1;
- (void)setShouldProcessRemotely:(bool)arg1;

@end
