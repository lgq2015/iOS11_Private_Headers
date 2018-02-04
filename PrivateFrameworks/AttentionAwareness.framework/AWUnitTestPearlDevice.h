/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler> {
    NSObject<OS_dispatch_queue> * _awQueue;
    <BKDevicePearlDelegate> * _delegate;
    id /* block */  _displayCallback;
    bool  _facePresent;
    AWUnitTestFaceDetectOperation * _lastOperation;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        unsigned long long sampleCount; 
        unsigned long long pollCount; 
        unsigned long long singleShotCount; 
    }  _sampleStats;
    struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } * _sampleStatsPtr;
}

@property (nonatomic) <BKDevicePearlDelegate> *delegate;
@property bool facePresent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*sampleStatsPtr;

+ (id)sharedDevice;

- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (id)delegate;
- (void)deliverPearlDeviceEvent:(long long)arg1;
- (bool)facePresent;
- (void)getStatsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)queue;
- (void)resetStats;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)sampleStatsPtr;
- (void)setDelegate:(id)arg1;
- (void)setDisplayCallback:(id /* block */)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setFacePresent:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSampleState:(bool)arg1;
- (void)setSampleStatsPtr:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1;

@end
