/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObject : NSObject <NSCopying, PLLocalUUIDConverter> {
    bool  _deleted;
    NSManagedObjectID * _objectID;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _propertyHint;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id identifier;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property unsigned long long propertyHint;
@property (readonly) Class superclass;
@property (getter=isTransient, readonly) bool transient;
@property (readonly) NSString *uuid;

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(id /* block */)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (id)identifierPropertiesToFetch;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsBursts;
+ (bool)managedObjectSupportsFaceState;
+ (bool)managedObjectSupportsHiddenState;
+ (bool)managedObjectSupportsKeyFaces;
+ (bool)managedObjectSupportsMontage;
+ (bool)managedObjectSupportsPendingState;
+ (bool)managedObjectSupportsPersonFilters;
+ (bool)managedObjectSupportsRejectedState;
+ (bool)managedObjectSupportsSavedAssetType;
+ (bool)managedObjectSupportsTrashedState;
+ (bool)managedObjectSupportsVisibilityState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)uuidFromLocalIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasLoadedPropertySet:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (id)localIdentifier;
- (id)objectID;
- (id)photoLibrary;
- (unsigned long long)propertyHint;
- (void)setPropertyHint:(unsigned long long)arg1;
- (id)uuid;

@end
