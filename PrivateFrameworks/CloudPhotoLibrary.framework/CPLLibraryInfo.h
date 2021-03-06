/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLLibraryInfo : NSObject {
    NSData * _accountFlagsData;
    NSDictionary * _assetCounts;
    CPLFeatureVersionHistory * _featureVersionHistory;
    NSData * _lastKnownSyncAnchor;
}

@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (nonatomic, copy) NSData *accountFlagsData;
@property (nonatomic, copy) NSDictionary *assetCounts;
@property (nonatomic, retain) CPLFeatureVersionHistory *featureVersionHistory;
@property (nonatomic, copy) NSData *lastKnownSyncAnchor;

- (void).cxx_destruct;
- (id)accountFlags;
- (id)accountFlagsData;
- (id)assetCounts;
- (id)featureVersionHistory;
- (id)lastKnownSyncAnchor;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)arg1;
- (void)setAccountFlagsData:(id)arg1;
- (void)setAssetCounts:(id)arg1;
- (void)setFeatureVersionHistory:(id)arg1;
- (void)setLastKnownSyncAnchor:(id)arg1;

@end
