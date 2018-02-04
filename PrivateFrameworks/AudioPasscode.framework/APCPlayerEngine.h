/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCPlayerEngine : NSObject {
    AVAudioPCMBuffer * _assetBuffer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AUPasscodeEncoder * _encoderAU;
    AVAudioUnit * _encoderAUNode;
    AVAudioEngine * _engine;
    bool  _isRunning;
    AVAudioPlayerNode * _player;
    float  _prePlayVolume;
    id /* block */  _stopEngineCompletion;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ stopEngineCompletion;

+ (id)playerWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_stopAudioEngineAndSession;
- (id)createAU:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)createEngineAndAttachNodes;
- (id)dispatchQueue;
- (float)evaluateAsset;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id*)arg4;
- (void)makeEngineConnections;
- (void)setDispatchQueue:(id)arg1;
- (void)setStopEngineCompletion:(id /* block */)arg1;
- (void)setupAudioSession;
- (bool)startEngine;
- (void)stopEngine:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)stopEngineCompletion;

@end
