/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionEngineDiagnosticInfo : NSObject {
    double  _captureSessionProcessingBeginTime;
    double  _captureSessionProcessingEndTime;
    bool  _isProcessingCaptureSessionFrames;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_pipelineTimings;
    unsigned long long  _totalFramesDropped;
    unsigned long long  _totalFramesProcessed;
}

@property (nonatomic, readonly) double averageFramesDroppedPerSecond;
@property (nonatomic, readonly) double averageFramesProcessedPerSecond;
@property (nonatomic, readonly) NSString *diagnosticReport;
@property (nonatomic, readonly) NSArray *pipelineTimings;
@property (nonatomic) unsigned long long totalFramesDropped;
@property (nonatomic) unsigned long long totalFramesProcessed;

- (void).cxx_destruct;
- (double)_queue_averageFramesDroppedPerSecond;
- (double)_queue_averageFramesProcessedPerSecond;
- (void)addPipelineTiming:(id)arg1;
- (double)averageFramesDroppedPerSecond;
- (double)averageFramesProcessedPerSecond;
- (id)diagnosticReport;
- (void)didBeginProcessingCaptureSessionFrames;
- (void)didDropCaptureSessionFrame;
- (void)didEndProcessingCaptureSessionFrames;
- (void)didProcessCaptureSessionFrame;
- (id)init;
- (id)pipelineTimings;
- (void)setTotalFramesDropped:(unsigned long long)arg1;
- (void)setTotalFramesProcessed:(unsigned long long)arg1;
- (unsigned long long)totalFramesDropped;
- (unsigned long long)totalFramesProcessed;

@end
