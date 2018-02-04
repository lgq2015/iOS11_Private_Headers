/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCComposition : NSObject <NSCopying, NSMutableCopying, RCDictionaryPListRepresentationCoding> {
    double  _cachedComposedAVURLDuration;
    bool  _cachedComposedAVURLDurationIsValid;
    NSURL * _composedAVURL;
    NSArray * _composedFragments;
    NSURL * _composedWaveformURL;
    NSDate * _creationDate;
    NSArray * _decomposedFragments;
    bool  _readonly;
    NSURL * _savedRecordingURI;
}

@property (nonatomic) double cachedComposedAVURLDuration;
@property (nonatomic) bool cachedComposedAVURLDurationIsValid;
@property (nonatomic, readonly) NSURL *composedAVURL;
@property (nonatomic, readonly) double composedDuration;
@property (nonatomic, readonly) NSArray *composedFragments;
@property (nonatomic, readonly) NSURL *composedWaveformURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *decomposedFragments;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic) bool readonly;
@property (nonatomic, retain) NSURL *savedRecordingURI;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingURI:(id)arg3 createIfNeeded:(bool)arg4;
+ (id)_compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (bool)_markCompositionAVURLsBeingModified:(id)arg1;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)compositionLoadedForSavedRecordingURI:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)compositionWithComposedAVURL:(id)arg1;

- (void).cxx_destruct;
- (id)_calcualteComposedFragments;
- (double)_composedDuration;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(bool)arg1;
- (double)cachedComposedAVURLDuration;
- (bool)cachedComposedAVURLDurationIsValid;
- (id)composedAVURL;
- (double)composedDuration;
- (id)composedFragments;
- (id)composedFragmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (id)composedWaveformURL;
- (id)compositionAsset;
- (id)compositionByClippingToComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (id)compositionByReloadingFromDefaultMetadataLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)decomposedFragments;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (void)enumerateOrphanedFragmentsWithBlock:(id /* block */)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(bool)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(bool)arg1;
- (id)initWithComposedAVURL:(id)arg1 savedRecordingURI:(id)arg2 decomposedFragments:(id)arg3 composedFragments:(id)arg4;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (bool)isContentBeingModified;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(struct { double x1; double x2; })arg1 pathExtension:(id)arg2;
- (id)playableAsset;
- (bool)readonly;
- (void)recacheComposedDuration;
- (bool)saveMetadataToDefaultLocation;
- (id)savedRecordingURI;
- (void)setCachedComposedAVURLDuration:(double)arg1;
- (void)setCachedComposedAVURLDurationIsValid:(bool)arg1;
- (void)setDecomposedFragments:(id)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setSavedRecordingURI:(id)arg1;
- (void)setSavedRecordingURIFromRecoveredRecordingURI:(id)arg1;
- (id)title;

@end
