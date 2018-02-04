/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFeatureVersionHistory : NSObject {
    NSMutableDictionary * _anchorToVersion;
    long long  _currentFeatureVersion;
    NSMutableDictionary * _versionToAnchor;
}

@property (nonatomic, readonly) long long currentFeatureVersion;

- (void).cxx_destruct;
- (void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2;
- (long long)currentFeatureVersion;
- (id)description;
- (void)enumerateHistoryWithBlock:(id /* block */)arg1;
- (long long)featureVersionForSyncAnchor:(id)arg1;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (id)syncAnchorForFeatureVersion:(long long)arg1;

@end
