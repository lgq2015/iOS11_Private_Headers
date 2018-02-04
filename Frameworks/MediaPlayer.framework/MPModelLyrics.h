/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLyrics : MPModelObject {
    bool  _hasStoreLyrics;
    NSString * _text;
}

@property (nonatomic) bool hasStoreLyrics;
@property (nonatomic, copy) NSString *text;

+ (id)__MPModelPropertyLyricsHasStoreLyrics__PROPERTY;
+ (id)__MPModelPropertyLyricsText__PROPERTY;
+ (id)__hasStoreLyrics__KEY;
+ (id)__text__KEY;

- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (bool)hasStoreLyrics;
- (void)setHasStoreLyrics:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
