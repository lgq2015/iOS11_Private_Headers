/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
 */

@interface MobileAssetUpdater : NSObject {
    ASAsset * _asset;
    bool  _assetDownloaded;
    NSString * _assetType;
    id /* block */  _logger;
    NSString * _overrideFile;
    NSString * _purgeOverrideFile;
    ASAssetQuery * _query;
    bool  _requireAssetMetadata;
}

@property (retain) ASAsset *asset;
@property (readonly) bool assetAvailable;
@property (readonly) bool assetDownloaded;
@property (retain) NSString *assetType;
@property (copy) id /* block */ logger;
@property (retain) NSString *overrideFile;
@property (retain) NSString *purgeOverrideFile;
@property (retain) ASAssetQuery *query;
@property bool requireAssetMetadata;

- (id)asset;
- (bool)assetAvailable;
- (bool)assetDownloaded;
- (id)assetType;
- (id)assetWithMaxVersion:(id)arg1;
- (void)dealloc;
- (void)doneWithAsset;
- (id)downloadAsset:(id /* block */)arg1;
- (void)downloadComplete:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadProgress:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3;
- (id)filterFoundAssets:(id)arg1;
- (id)findAsset:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithAssetType:(id)arg1;
- (void)log:(int)arg1 format:(id)arg2;
- (id /* block */)logger;
- (id)overrideFile;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (id)purgeOverrideFile;
- (id)query;
- (void)queryComplete:(id)arg1 remote:(bool)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)queryPredicate;
- (bool)requireAssetMetadata;
- (void)setAsset:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setLogger:(id /* block */)arg1;
- (void)setOverrideFile:(id)arg1;
- (void)setPurgeOverrideFile:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequireAssetMetadata:(bool)arg1;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;

@end
