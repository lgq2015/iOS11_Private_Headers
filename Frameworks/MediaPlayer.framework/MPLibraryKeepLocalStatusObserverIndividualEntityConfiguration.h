/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {
    bool  _collectionType;
    bool  _hasNonPurgeableAsset;
    long long  _managedStatus;
    bool  _storeRedownloadable;
}

@property (getter=isCollectionType, nonatomic) bool collectionType;
@property (nonatomic) bool hasNonPurgeableAsset;
@property (nonatomic) long long managedStatus;
@property (getter=isStoreRedownloadable, nonatomic) bool storeRedownloadable;

- (bool)hasNonPurgeableAsset;
- (bool)isCollectionType;
- (bool)isStoreRedownloadable;
- (long long)managedStatus;
- (void)setCollectionType:(bool)arg1;
- (void)setHasNonPurgeableAsset:(bool)arg1;
- (void)setManagedStatus:(long long)arg1;
- (void)setStoreRedownloadable:(bool)arg1;

@end
