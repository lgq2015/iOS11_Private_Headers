/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob {
    PHAVisionServiceFaceProcessingWorker * _faceProcessingWorker;
    bool  _isFinished;
    unsigned long long  _jobScenario;
}

- (void).cxx_destruct;
- (id)faceProcessingWorker;
- (bool)finished;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (unsigned long long)jobScenario;
- (void)markAsFinished;
- (id)photoLibrary;
- (bool)startJob:(id*)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopJob:(id*)arg1;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end
