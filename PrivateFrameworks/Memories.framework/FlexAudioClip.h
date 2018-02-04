/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexAudioClip : AudioClip {
    FMSong * _song;
    FMSongRendition * _songRendition;
}

@property (nonatomic, readonly) int sampleRate;
@property (nonatomic, retain) FMSong *song;
@property (nonatomic, retain) FMSongRendition *songRendition;

+ (id)backgroundClipWithSong:(id)arg1;
+ (id)optionsForSong:(id)arg1 withDuration:(double)arg2;

- (void).cxx_destruct;
- (int)clipType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)duration;
- (void)generateEdits;
- (id)init;
- (void)outroStingerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 earlyFadeStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (id)plistRepresentationFromProject:(id)arg1;
- (int)rawSourceDuration;
- (void)refreshSong;
- (int)sampleRate;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setDuration:(int)arg1;
- (void)setSong:(id)arg1;
- (void)setSongRendition:(id)arg1;
- (void)setSongUID:(id)arg1;
- (id)song;
- (id)songRendition;
- (id)songUID;

@end
