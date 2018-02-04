/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVoIPRelay : NSObject {
    VCVoIPRelayInternal * _internal;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } audioFormat;
@property (nonatomic, readonly) unsigned long long blockSizeSamples;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioFormat;
- (unsigned long long)blockSizeSamples;
- (void)dealloc;
- (id)initWithCaptureBlock:(id /* block */)arg1 renderBlock:(id /* block */)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithCompletionHandler:(id /* block */)arg1;

@end
