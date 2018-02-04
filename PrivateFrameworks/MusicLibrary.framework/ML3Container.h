/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Container : ML3Entity

@property (readonly, copy) NSArray *cloudDisplayOrderingTerms;
@property (readonly, copy) NSArray *displayOrderingTerms;
@property (getter=isLimitOrderingDescending, readonly) bool limitOrderingDescending;
@property (readonly, copy) NSArray *limitOrderingTerms;
@property (readonly) long long limitValue;
@property (getter=isLimitedByCount, readonly) bool limitedByCount;
@property (readonly, copy) NSString *limitingProperty;
@property (readonly) ML3Predicate *smartCriteriaPredicate;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (id)_allStaticItemContainersInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned int)arg3 limited:(bool)arg4 trackOrder:(unsigned int)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(id /* block */)arg3;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (id)databaseTable;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (bool)hasCriterionInCriteriaList:(struct SearchCriteriaList { }*)arg1 forITDBTrackField:(int)arg2;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)libraryContentsChangeForProperty:(id)arg1;
+ (bool)libraryDynamicChangeForProperty:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList { }*)arg1 parentMatchedAny:(bool)arg2;
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)arg1;
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 usingConnection:(id)arg2;
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)arg1 fromContainersInLibrary:(id)arg2 usingConnection:(id)arg3;
+ (void)removeNonLibraryItemsFromContainer:(id)arg1 usingConnection:(id)arg2;
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (bool)smartCriteriaCanBeEvaluated:(id)arg1;
+ (unsigned int)trackOrderFromProtocolSortType:(int)arg1;
+ (bool)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1;

- (id)_addUnitesForCriterionInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_booleanStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_convertNumericValueFromCriterionMatchKey:(unsigned int)arg1 criteriaValue:(long long)arg2;
- (id)_criteriaListDescription:(struct SearchCriteriaList { }*)arg1 level:(long long)arg2;
- (id)_dateStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_formatTime:(long long)arg1;
- (long long)_maxPositionForTracksUsingConnection:(id)arg1;
- (id)_nonzeroStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_numericStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (bool)_reloadContainedMediaTypes:(bool)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(bool)arg4 incrementEntityRevision:(bool)arg5 usingConnection:(id)arg6;
- (bool)_removeTracksAtIndexes:(id)arg1 notify:(bool)arg2 usingConnection:(id)arg3;
- (void)_setContainerSeedItemPersistentIDValue:(id)arg1;
- (bool)_setItemPersistentIDs:(id)arg1 reloadContainedMediaTypes:(bool)arg2 removedMediaTypes:(id)arg3 addedMediaTypes:(id)arg4 notify:(bool)arg5 incrementEntityRevision:(bool)arg6 usingConnection:(id)arg7;
- (id)_stringForCriterionBuffer:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForCriterionMatchKey:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForCriterionMatchType:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForTrackFieldCloudStatus:(long long)arg1;
- (id)_stringForTrackFieldMediaKind:(long long)arg1;
- (id)_stringStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (bool)_supportsOrderedTrackOperations;
- (bool)appendTracksWithPersistentIDs:(id)arg1 notify:(bool)arg2;
- (id)childPlaylistPersistentIds;
- (id)cloudDisplayOrderingTerms;
- (id)criteriaListDescription;
- (id)displayOrderingTerms;
- (id)evaluationOrderingTerms;
- (struct SearchCriteriaList { }*)importedCriteriaList;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (bool)isBuiltInSmartPlaylist;
- (bool)isEvaluationOrderingDescending;
- (bool)isLimitOrderingDescending;
- (bool)isLimitedByCount;
- (id)limitOrderingTerms;
- (long long)limitValue;
- (id)limitingProperty;
- (bool)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)multiverseIdentifier;
- (id)protocolItem;
- (bool)removeAllTracks;
- (bool)removeFirstTrack;
- (bool)removeTracksAtIndexes:(id)arg1 notify:(bool)arg2;
- (bool)setTracksWithPersistentIDs:(id)arg1 notify:(bool)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(bool)arg3 withCompletionBlock:(id /* block */)arg4;
- (id)smartCriteriaPredicate;
- (id)trackPersistentIds;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)propertyForMPMediaEntityProperty:(id)arg1;

@end
