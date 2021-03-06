/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductItem : NSObject {
    NSURL * _fallbackStreamingKeyCertificateURL;
    NSURL * _fallbackStreamingKeyServerURL;
    NSDictionary * _responseDictionary;
    bool  _usesCurrentAccountIfAvailable;
}

@property (nonatomic, readonly) NSURL *HLSKeyCertificateURL;
@property (nonatomic, readonly) NSURL *HLSKeyServerURL;
@property (nonatomic, readonly) NSURL *HLSPlaylistURL;
@property (nonatomic, readonly, copy) NSArray *allFlavors;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *asset;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyServerURL;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *firstAsset;
@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic) bool usesCurrentAccountIfAvailable;

- (void).cxx_destruct;
- (id)HLSKeyCertificateURL;
- (id)HLSKeyServerURL;
- (id)HLSPlaylistURL;
- (void)_enumerateAssetDictionariesWithBlock:(id /* block */)arg1;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)allFlavors;
- (id)asset;
- (id)assetForFlavor:(id)arg1;
- (id)fallbackStreamingKeyCertificateURL;
- (id)fallbackStreamingKeyServerURL;
- (id)fileExtension;
- (id)firstAsset;
- (bool)isiTunesStoreStream;
- (id)responseDictionary;
- (void)setFallbackStreamingKeyCertificateURL:(id)arg1;
- (void)setFallbackStreamingKeyServerURL:(id)arg1;
- (void)setUsesCurrentAccountIfAvailable:(bool)arg1;
- (bool)usesCurrentAccountIfAvailable;

@end
