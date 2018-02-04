/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSoundComponent : AXMOutputComponent {
    id  _configChangedObserverToken;
    AVAudioEngine * _engine;
    AVAudioPlayerNode * _soundPlayer;
}

@property (nonatomic, retain) id configChangedObserverToken;
@property (nonatomic, retain) AVAudioEngine *engine;
@property (nonatomic, retain) AVAudioPlayerNode *soundPlayer;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_buildEngine;
- (void)_logAudioFileInfo:(id)arg1;
- (bool)_startEngineIfNeeded:(id*)arg1;
- (void)_wireEngineConnections;
- (bool)canHandleRequest:(id)arg1 options:(id)arg2;
- (id)configChangedObserverToken;
- (void)dealloc;
- (id)engine;
- (void)handleRequest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setConfigChangedObserverToken:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setSoundPlayer:(id)arg1;
- (id)soundPlayer;

@end
