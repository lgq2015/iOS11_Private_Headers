/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSSet : NSObject <HFPrettyDescription, HFStateDumpSerializable, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)setWithSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void)__applyValues:(int (*)arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (bool)intersectsOrderedSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (bool)isNSSet__;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_filter:(id /* block */)arg1;
- (id)hk_map:(id /* block */)arg1;
- (id)hk_minus:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void)ph_enumerateIntersectionWithSet:(id)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)makeObjectsRespondToSelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)intersectionOfSet:(id)arg1 withSet:(id)arg2;

- (id)CalMutableRecursiveCopy;
- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)_deepCopy;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_mapUsingBlock:(id /* block */)arg1;
- (id)crk_setBySubtractingSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_any:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DACompactDescription;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_setWithSafeObject:(id)arg1;

- (bool)fm_any:(id /* block */)arg1;
- (void)fm_each:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)fm_firstObjectPassingTest:(id /* block */)arg1;
- (id)fm_map:(id /* block */)arg1;
- (id)fm_setByFlattening;
- (id)fm_setByIntersectingWithSet:(id)arg1;
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit

- (id)fkSanitizedDestinationSet;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id /* block */)arg1;
- (id)_gkSetByRemovingObject:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)__imForEach:(id /* block */)arg1;
- (id)__imSetByApplyingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)mr_containsObjectUsingWeakMatching:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_all:(id /* block */)arg1;
- (bool)mf_any:(id /* block */)arg1;
- (id)mf_anyPassingTest:(id /* block */)arg1;
- (unsigned long long)mf_countObjectsPassingTest:(id /* block */)arg1;
- (id)mf_filter:(id /* block */)arg1;
- (id)mf_flatMap:(id /* block */)arg1;
- (id)mf_flatten;
- (id)mf_map:(id /* block */)arg1;
- (id)mf_partition:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkComprehension:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_setWithSafeObject:(id)arg1;

- (bool)na_all:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_flatMap:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;
- (id)na_setByDiffingWithSet:(id)arg1;
- (id)na_setByFlattening;
- (id)na_setByIntersectingWithSet:(id)arg1;
- (id)na_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_set:(id /* block */)arg1;
+ (id)fc_unionOfSetsInArray:(id)arg1;

- (id)fc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (bool)fc_containsAnyObjectInArray:(id)arg1;
- (bool)fc_containsObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)fc_countOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(id /* block */)arg1;
- (id)fc_diffAgainstSet:(id)arg1;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_mutableSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_onlyObject;
- (id)fc_setByIntersectingSet:(id)arg1;
- (id)fc_setByMinusingSet:(id)arg1;
- (id)fc_setByRemovingObject:(id)arg1;
- (id)fc_setByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_setByUnioningSet:(id)arg1;
- (id)fc_setOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)containsObjectPassingTest:(id /* block */)arg1;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_intersectionOfSets:(id)arg1;
+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_sortedArray;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_setByApplyingBlock:(id /* block */)arg1;
- (id)setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision

- (id)fetchedObjects;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_filter:(id /* block */)arg1;
- (id)_pl_firstObjectPassingTest:(id /* block */)arg1;
- (id)_pl_map:(id /* block */)arg1;
- (unsigned long long)pl_countOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (id)setByIntersectingWithSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (bool)containsObjectClass:(id)arg1;
- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;

- (bool)tsu_containsObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)setByIntersectingSet:(id)arg1;
- (id)setByMinusingSet:(id)arg1;
- (id)setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)hiddenNetworkProfiles;
- (id)hs20Networks;
- (id)logStringWithScanRecords;
- (id)scanRecordWithSSID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (id)adhocNetworks;
- (id)infrastructureNetworks;
- (id)instantHotspotNetworks;
- (id)unconfiguredNetworks;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_consolidateFeatureInfos:(id)arg1 andReturnReadVersion:(out unsigned long long*)arg2 writeVersion:(out unsigned long long*)arg3;
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (bool)tss_containsStyleOrVariationOfStyle:(id)arg1;
- (bool)tss_hasVariations;
- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_sortedArray;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
