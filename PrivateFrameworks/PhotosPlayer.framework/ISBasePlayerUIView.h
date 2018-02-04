/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISBasePlayerUIView : UIView <ISBasePlayerOutput, ISChangeObserver> {
    <ISBasePlayerUIViewChangeObserver> * __changeObserver;
    UIView * __containerView;
    UIImageView * __photoView;
    ISVideoPlayerUIView * __videoView;
    NSObject<OS_dispatch_queue> * _audioSessionQueue;
    struct { 
        bool didChangeWithAnimationDuration; 
    }  _changeObserverRespondsTo;
    ISPlayerOutputContent * _content;
    UIView * _customPhotoView;
    UIImage * _overrideImage;
    ISBasePlayer * _player;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scaleAnchorOffset;
    ISWrappedAVAudioSession * _wrappedAudioSession;
}

@property (setter=_setChangeObserver:, nonatomic) <ISBasePlayerUIViewChangeObserver> *_changeObserver;
@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIImageView *_photoView;
@property (nonatomic, readonly) ISVideoPlayerUIView *_videoView;
@property (nonatomic, retain) UIView *customPhotoView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingPhoto, nonatomic, readonly) bool displayingPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *overrideImage;
@property (nonatomic, retain) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x1; double x2; } scaleAnchorOffset;
@property (readonly) Class superclass;
@property (setter=_setWrappedAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *wrappedAudioSession;

+ (Class)playerClass;

- (void).cxx_destruct;
- (id)_changeObserver;
- (id)_containerView;
- (void)_performCommonInitialization;
- (id)_photoView;
- (void)_setChangeObserver:(id)arg1;
- (void)_setWrappedAudioSession:(id)arg1;
- (void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2;
- (void)_updatePhotoView;
- (void)_updatePlayerAudioSession;
- (id)_videoView;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)audioSessionDidChange;
- (void)contentDidChange;
- (id)customPhotoView;
- (id)generateSnapshotImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingPhoto;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overrideImage;
- (id)player;
- (void)playerDidChange;
- (void)registerChangeObserver:(id)arg1;
- (struct CGPoint { double x1; double x2; })scaleAnchorOffset;
- (void)setContent:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCustomPhotoView:(id)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)wrappedAudioSession;

@end
