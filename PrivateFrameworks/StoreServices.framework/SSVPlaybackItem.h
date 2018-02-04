/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackItem : NSObject {
    NSURL * _fallbackStreamingKeyCertificateURL;
    NSURL * _fallbackStreamingKeyServerURL;
    NSDictionary * _itemDictionary;
}

@property (nonatomic, readonly) NSURL *HLSKeyCertificateURL;
@property (nonatomic, readonly) NSURL *HLSKeyServerURL;
@property (nonatomic, readonly) NSURL *HLSPlaylistURL;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyServerURL;
@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSDictionary *itemDictionary;
@property (nonatomic, readonly, copy) id itemIdentifier;

- (void).cxx_destruct;
- (id)HLSKeyCertificateURL;
- (id)HLSKeyServerURL;
- (id)HLSPlaylistURL;
- (void)_enumerateAssetsUsingBlock:(id /* block */)arg1;
- (id)assetForFlavor:(id)arg1;
- (id)assets;
- (id)description;
- (id)fallbackStreamingKeyCertificateURL;
- (id)fallbackStreamingKeyServerURL;
- (unsigned long long)hash;
- (id)initWithItemDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)itemDictionary;
- (id)itemIdentifier;
- (void)setFallbackStreamingKeyCertificateURL:(id)arg1;
- (void)setFallbackStreamingKeyServerURL:(id)arg1;

@end
