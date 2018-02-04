/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <MPArtworkDataSourceVisualIdenticality> {
    NSString * _cacheID;
    NSArray * _containerArtworkSizes;
    NSDictionary * _containerArtworkURLs;
    unsigned long long  _hash;
    NSArray * _itemArtworkSizes;
    NSDictionary * _itemArtworkURLs;
    long long  _itemPersistentID;
    NSArray * _screenshotSizes;
    NSDictionary * _screenshotURLs;
}

@property (nonatomic, readonly) NSString *cacheID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableSizesForArtworkURLs:(id)arg1;
- (id)_preferredArtworkURLsForType:(long long)arg1;
- (id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1 type:(long long)arg2;
- (id)availableSizesForArtworkOfType:(long long)arg1;
- (id)cacheID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
