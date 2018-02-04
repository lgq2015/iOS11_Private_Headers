/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {
    NSData * _imageData;
    NSString * _mimeType;
}

@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly, copy) NSString *mimeType;

- (id)copyImageData;
- (void)dealloc;
- (bool)hasArtworkData;
- (id)imageData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mimeType;
- (unsigned int)type;

@end
