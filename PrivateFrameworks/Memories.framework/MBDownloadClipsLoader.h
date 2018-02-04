/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver> {
    NSSet * _assetURLs;
    NSMutableDictionary * _identifierURLsToClipsMap;
    NSSet * _insertedAssetURLs;
    NSRecursiveLock * _updateLock;
}

@property (nonatomic, retain) NSSet *assetURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (nonatomic, retain) NSSet *insertedAssetURLs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSRecursiveLock *updateLock;

- (void).cxx_destruct;
- (id)assetURLs;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (id)fetchAssetURLs;
- (id)identifierURLsToClipsMap;
- (id)init;
- (id)insertedAssetURLs;
- (void)load;
- (void)loadClipsFromURLs:(id)arg1;
- (void)setAssetURLs:(id)arg1;
- (void)setIdentifierURLsToClipsMap:(id)arg1;
- (void)setInsertedAssetURLs:(id)arg1;
- (void)setUpdateLock:(id)arg1;
- (id)updateLock;

@end
