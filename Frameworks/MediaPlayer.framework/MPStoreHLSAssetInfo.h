/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreHLSAssetInfo : NSObject {
    ICStoreHLSAssetInfo * _internalInfo;
}

@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSURL *keyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly, copy) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (id)playlistURL;

@end
