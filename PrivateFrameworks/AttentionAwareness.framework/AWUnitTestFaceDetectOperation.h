/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_source> * _awInitTimer;
    NSObject<OS_dispatch_queue> * _awQueue;
    NSObject<OS_dispatch_source> * _deadlineTimer;
    bool  _finished;
    bool  _started;
    AWUnitTestPearlDevice * _unitTestDevice;
}

@property (nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (void).cxx_destruct;
- (void)awDeliverFaceFound;
- (void)awFinishWithReason:(long long)arg1;
- (void)awSetFaceFound;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)setUnitTestDevice:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (long long)state;
- (id)unitTestDevice;

@end
