/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureRequestIntervalometer : NSObject {
    CAMPreciseTimer * __timer;
    double  _delay;
    <CAMCaptureRequestIntervalometerDelegate> * _delegate;
    double  _interval;
    long long  _maximumCount;
    CAMCaptureRequest * _prototypeRequest;
    long long  _remaining;
}

@property (nonatomic, readonly) CAMPreciseTimer *_timer;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) <CAMCaptureRequestIntervalometerDelegate> *delegate;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) long long maximumCount;
@property (nonatomic, copy) CAMCaptureRequest *prototypeRequest;
@property (nonatomic) long long remaining;

- (void).cxx_destruct;
- (void)_generateRequestForDelegate;
- (id)_timer;
- (double)delay;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4;
- (double)interval;
- (void)manuallyGenerateRequest;
- (long long)maximumCount;
- (id)prototypeRequest;
- (long long)remaining;
- (void)setPrototypeRequest:(id)arg1;
- (void)setRemaining:(long long)arg1;
- (void)startGeneratingRequests;
- (void)stopGeneratingRequests;

@end
