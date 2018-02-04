/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceGroupChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHRelationshipChangeRequestHelper * _facesHelper;
    PHChangeRequestHelper * _helper;
    PHRelationshipChangeRequestHelper * _keyFaceHelper;
    PHFaceGroup * _originalFaceGroup;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) long long personBuilderState;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
@property (readonly) Class superclass;
@property (nonatomic) long long unnamedFaceCount;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFaceGroup:(id)arg1;
+ (id)creationRequestForFaceGroup;
+ (void)deleteFaceGroups:(id)arg1;

- (void).cxx_destruct;
- (id)_existentFaceObjectIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2;
- (void)_prepareFacesHelperIfNeeded;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_setOriginalFaceGroup:(id)arg1;
- (void)addFaces:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)facesHelper;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)keyFaceHelper;
- (id)managedEntityName;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (long long)personBuilderState;
- (id)placeholderForCreatedFaceGroup;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)removeFaces:(id)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setPersonBuilderState:(long long)arg1;
- (void)setUnnamedFaceCount:(long long)arg1;
- (long long)unnamedFaceCount;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
