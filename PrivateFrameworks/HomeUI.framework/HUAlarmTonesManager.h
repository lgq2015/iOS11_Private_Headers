/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTonesManager : NSObject {
    NSString * _defaultToneIdentifier;
    MPMusicPlayerController * _musicPlayer;
    TLAlert * _playingAlert;
    NSArray * _toneIdentifiers;
}

@property (nonatomic, copy) NSString *defaultToneIdentifier;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) MPMusicPlayerController *musicPlayer;
@property (nonatomic, retain) TLAlert *playingAlert;
@property (nonatomic, copy) NSArray *toneIdentifiers;

+ (id)URLForToneIdentifier:(id)arg1 error:(id*)arg2;
+ (id)defaultManager;
+ (id)localizedTitleForToneIdentifier:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_didFinishPlayingAlert:(id)arg1;
- (bool)_stopPlayingWithFadeOut:(bool)arg1;
- (id)defaultToneIdentifier;
- (id)init;
- (bool)isPlaying;
- (id)mediaItemForIdentifier:(id)arg1;
- (id)musicPlayer;
- (id)playingAlert;
- (void)previewMedia:(id)arg1;
- (void)previewMediaItem:(id)arg1;
- (void)previewTone:(id)arg1;
- (void)setDefaultToneIdentifier:(id)arg1;
- (void)setPlayingAlert:(id)arg1;
- (void)setToneIdentifiers:(id)arg1;
- (void)stopPlaying;
- (id)toneIdentifiers;

@end
