/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPIdentifiableFavorite, MSPMutableObject> {
    MSPBookmarkStorage * _bookmarkStorage;
    bool  _immutable;
    NSUUID * _storageIdentifier;
}

@property (nonatomic, readonly) MSPBookmarkStorage *bookmarkStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isImmutable, nonatomic, readonly) bool immutable;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableFavoriteForBookmarkStorage:(id)arg1;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (void).cxx_destruct;
- (bool)_isImmutable;
- (void)_markImmutable;
- (void)_noteWillMutate;
- (id)abridgedBookmarkStorageForSpotlightStorage;
- (id)bookmarkStorage;
- (id)copyIfValidWithError:(out id*)arg1;
- (void)ifMutablePlace:(id /* block */)arg1 ifMutableRoute:(id /* block */)arg2 ifMutableRegion:(id /* block */)arg3 ifMutableTransitLine:(id /* block */)arg4;
- (void)ifPlace:(id /* block */)arg1 ifRoute:(id /* block */)arg2 ifRegion:(id /* block */)arg3 ifTransitLine:(id /* block */)arg4;
- (id)init;
- (id)initWithBookmarkStorage:(id)arg1;
- (bool)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)persisterOnlyBookmarkStorage;
- (id)storageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
