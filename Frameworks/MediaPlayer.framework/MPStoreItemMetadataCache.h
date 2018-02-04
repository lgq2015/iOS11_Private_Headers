/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadataCache : NSObject {
    CPLRUDictionary * _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable * _itemIdentifierToCompositeStoreItemMetadataMapTable;
}

@property (nonatomic, readonly) long long count;

- (void).cxx_destruct;
- (id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (long long)count;
- (id)initWithCacheSize:(long long)arg1;
- (id)metadataForItemIdentifier:(id)arg1;
- (void)removeExpiredMetadata;

@end
