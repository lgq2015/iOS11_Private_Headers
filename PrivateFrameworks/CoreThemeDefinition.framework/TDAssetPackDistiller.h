/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDAssetPackDistiller : TDDistiller {
    NSSet * assetPackMap;
}

@property (nonatomic, retain) NSSet *assetPackMap;

- (void)_storeRenditions;
- (id)assetPackForTags:(id)arg1;
- (id)assetPackMap;
- (bool)assetStoreWriteToDisk;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 usingAssetPackMapping:(id)arg4 attemptIncremental:(bool)arg5;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (void)setAssetPackMap:(id)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;

@end
