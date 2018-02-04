/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPhotosRequestHandler : NSObject <VNRequestCancelling, VNRequestWarming> {
    id /* block */  _burstAnalysisLoggingCallback;
    NSObject * _modelContextObject;
    VNRequestPerformer * _requestPerformer;
}

@property (nonatomic, copy) id /* block */ burstAnalysisLoggingCallback;
@property (nonatomic, retain) NSObject *modelContextObject;

- (void).cxx_destruct;
- (id /* block */)burstAnalysisLoggingCallback;
- (void)cancelAllRequests;
- (id)clusterContextWithOptions:(id)arg1 allowingCreation:(bool)arg2 error:(id*)arg3;
- (id)init;
- (id)modelContextObject;
- (bool)performRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2;
- (void)setBurstAnalysisLoggingCallback:(id /* block */)arg1;
- (void)setModelContextObject:(id)arg1;

@end