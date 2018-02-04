/* made by EzioChiu.
 */

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional

- (NSOrderedSet *)allMomentsInLibrary;
- (NSDictionary *)generationOptions;
- (void)insertMomentIntoAllMoments:(id <PLMomentData>)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateLocationDataForAssetsInMoment:(id <PLMomentData>)arg1;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (void)removeMomentFromAllMoments:(id <PLMomentData>)arg1;
- (void)setupPhotoLibrary;

@end
