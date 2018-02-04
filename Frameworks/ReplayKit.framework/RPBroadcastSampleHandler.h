/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate> {
    <RPBroadcastDaemonProtocol> * _daemonProxy;
}

@property (nonatomic, retain) <RPBroadcastDaemonProtocol> *daemonProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)_audioBufferListFromData:(id)arg1;
- (void)_processPayload:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)_sampleBufferFromIOSurface:(struct __IOSurface { }*)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2;
- (void)_setupListenerWithEndpoint:(id)arg1;
- (id)audioQueue;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)broadcastFinished;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (id)daemonProxy;
- (void)extensionContext:(id)arg1 setEndpoint:(id)arg2;
- (void)finishBroadcastWithError:(id)arg1;
- (void)processPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withType:(long long)arg2;
- (void)setDaemonProxy:(id)arg1;
- (void)updateBroadcastURL:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (id)videoQueue;

@end
