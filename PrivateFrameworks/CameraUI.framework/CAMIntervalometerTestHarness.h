/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMCaptureRequestIntervalometerDelegate, CAMStillImageCaptureRequestDelegate> {
    CUCaptureController * _captureController;
    NSNumber * _expectedNumberOfResponsesPerRequest;
    bool  _hasOutstandingCapture;
    bool  _nextCaptureIsMyLast;
    NSMutableDictionary * _numberOfResponsesForRequest;
    CAMCaptureRequestIntervalometer * _testIntervalometer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMCaptureRequestIntervalometer *testIntervalometer;

+ (id)harnessWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3;

- (void).cxx_destruct;
- (bool)_hasReceivedExpectedNumberOfResponsesForRequests;
- (void)failedTestwithReason:(id)arg1;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3;
- (bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)setTestIntervalometer:(id)arg1;
- (void)startTesting;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stopTesting;
- (id)testIntervalometer;

@end
