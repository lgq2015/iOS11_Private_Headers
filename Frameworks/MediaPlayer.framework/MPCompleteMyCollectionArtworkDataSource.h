/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCompleteMyCollectionArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (long long)_artworkTypeForCatalog:(id)arg1;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end