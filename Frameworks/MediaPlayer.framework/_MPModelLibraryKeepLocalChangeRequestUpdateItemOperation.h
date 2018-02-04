/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {
    long long  _keepLocal;
    MPMediaItem * _mediaItem;
}

@property (nonatomic) long long keepLocal;
@property (nonatomic, retain) MPMediaItem *mediaItem;

- (void).cxx_destruct;
- (void)execute;
- (long long)keepLocal;
- (id)mediaItem;
- (void)setKeepLocal:(long long)arg1;
- (void)setMediaItem:(id)arg1;

@end
