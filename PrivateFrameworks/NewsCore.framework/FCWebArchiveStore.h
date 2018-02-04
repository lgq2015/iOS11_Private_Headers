/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebArchiveStore : NSObject {
    FCAssetStore * _assetStore;
}

@property (nonatomic, retain) FCAssetStore *assetStore;

- (void).cxx_destruct;
- (id)allWebArchiveKeys;
- (id)assetStore;
- (bool)deleteWebArchiveForKey:(id)arg1;
- (id)initWithStoreDirectory:(id)arg1;
- (bool)saveWebArchiveData:(id)arg1 forKey:(id)arg2;
- (void)setAssetStore:(id)arg1;
- (unsigned long long)totalSizeOfAllWebArchives;
- (id)webArchiveURLForKey:(id)arg1;

@end
