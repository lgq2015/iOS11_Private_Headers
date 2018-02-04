/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementCoordinatorCache : NSObject <NTKFaceCollectionObserver> {
    NTKUpNextElementCoordinator * _coordinator;
    NSLock * _coordinatorLock;
    bool  _isEditing;
    NTKFaceCollection * _libraryCollection;
    NTKUpNextElementCoordinator * _staticCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_coordinatorCacheClass;
+ (bool)_disableCoordinatorCache;
+ (id)applicationPrewarmIdentifiers;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_clockViewControllerDidBeginEditing;
- (void)_clockViewControllerDidEndEditing;
- (bool)_faceCollectionContainsFaceNeedingElementCoordinator:(id)arg1;
- (bool)_faceNeedsElementCoordinator:(id)arg1;
- (void)_loadCoordinatorIfNeeded;
- (bool)_needsLiveElementCoordinator;
- (void)_unloadCoordinatorIfNeeded;
- (id)canonicalElementCoordinator;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)init;
- (void)prewarm;
- (void)setLibraryCollection:(id)arg1;
- (id)sharedElementCoordinator;

@end
