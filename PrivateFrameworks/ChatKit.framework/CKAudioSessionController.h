/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioSessionController : NSObject {
    bool  _active;
    bool  _dirty;
    unsigned long long  _options;
}

@property (getter=isActive) bool active;
@property (getter=isDirty) bool dirty;
@property unsigned long long options;
@property (readonly) bool shouldDuckOthers;
@property (readonly) bool shouldStopPlayingWhenSilent;
@property (readonly) bool shouldUseSpeaker;

+ (id)queue;
+ (id)shareInstance;

- (void)activateWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (bool)isDirty;
- (unsigned long long)options;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setDirty:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (bool)shouldDuckOthers;
- (bool)shouldStopPlayingWhenSilent;
- (bool)shouldUseSpeaker;

@end
