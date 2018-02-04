/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface _MCDPCNotifcationCallbackHelper : NSObject {
    NSIndexPath * _indexPath;
    id /* block */  _loadCompletion;
    MCDPCModel * _model;
    id /* block */  _playCompletion;
    bool  _playback;
    id  _selfRef;
}

- (void).cxx_destruct;
- (void)_beginPlayback;
- (id)_errorForNotification:(id)arg1;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)_load;
- (bool)_noteHasCorrectIndexPath:(id)arg1;
- (void)begin;
- (void)dealloc;
- (id)initForLoadingIndexPath:(id)arg1 withModel:(id)arg2 completion:(id /* block */)arg3;
- (id)initForPlaybackAtIndexPath:(id)arg1 withModel:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidate;

@end
