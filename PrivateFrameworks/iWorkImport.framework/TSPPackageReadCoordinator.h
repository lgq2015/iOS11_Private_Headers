/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator> {
    bool  _areExternalDataReferencesAllowed;
    TSPPackageMetadata * _cachedMetadata;
    NSObject<OS_dispatch_group> * _completionGroup;
    NSMutableSet * _componentIdentifiersWithDuplicatedUUIDs;
    NSObject<OS_dispatch_queue> * _componentQueue;
    NSMutableArray * _componentsToUpgrade;
    TSPObjectContext * _context;
    bool  _didRequireUpgrade;
    TSPObject * _documentObject;
    TSPDocumentRevision * _documentRevision;
    NSUUID * _documentUUID;
    NSMutableSet * _duplicatedUUIDs;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    NSObject<OS_dispatch_queue> * _ioCompletionQueue;
    NSObject<OS_dispatch_queue> * _ioQueue;
    bool  _losesDataOnWrite;
    TSPObject * _metadataObject;
    TSPObjectContainer * _objectContainer;
    NSObject<OS_dispatch_queue> * _objectQueue;
    NSMapTable * _objects;
    TSPPackage * _package;
    NSURL * _packageURL;
    TSPPersistedObjectUUIDMap * _persistedUUIDMap;
    struct vector<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> > > { 
        struct auto_ptr<TSP::PersistedObjectUUIDMapOperation> {} *__begin_; 
        struct auto_ptr<TSP::PersistedObjectUUIDMapOperation> {} *__end_; 
        struct __compressed_pair<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> *, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> > > { 
            struct auto_ptr<TSP::PersistedObjectUUIDMapOperation> {} *__first_; 
        } __end_cap_; 
    }  _persistedUUIDMapOperations;
    long long  _preferredPackageType;
    NSObject<OS_dispatch_queue> * _readCompletionQueue;
    struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _readExternalObjects;
    struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _readIdentifiers;
    unsigned long long  _readVersion;
    unsigned long long  _saveToken;
    bool  _skipDocumentUpgrade;
    NSSet * _unsupportedFeatureIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRequireUpgrade;
@property (nonatomic, readonly) TSPDocumentRevision *documentRevision;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadingFromDocument;
@property (nonatomic, readonly) bool losesDataOnWrite;
@property (nonatomic, readonly) TSPObject *metadataObject;
@property (nonatomic, readonly) TSPObjectContainer *objectContainer;
@property (nonatomic, readonly) long long preferredPackageType;
@property (nonatomic, readonly) unsigned long long saveToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *unsupportedFeatureIdentifiers;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)baseObjectUUID;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (id)context;
- (void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (bool)didRequireUpgrade;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)documentRevision;
- (bool)endReading;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(bool)arg3;
- (unsigned long long)fileFormatVersion;
- (unsigned long long)fileFormatVersionFromMetadataMessage:(const struct PackageMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct DocumentRevision {} *x6; struct RepeatedPtrField<TSP::ComponentInfo> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::DataInfo> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedField<unsigned int> { unsigned int *x_9_1_1; int x_9_1_2; int x_9_1_3; } x9; int x10; struct RepeatedField<unsigned int> { unsigned int *x_11_1_1; int x_11_1_2; int x_11_1_3; } x11; int x12; struct RepeatedField<unsigned int> { unsigned int *x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; int x14; unsigned long long x15; struct Reference {} *x16; int x17; }*)arg1;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(bool)arg5 skipDocumentUpgrade:(bool)arg6;
- (bool)isReadingFromDocument;
- (bool)losesDataOnWrite;
- (id)metadataObject;
- (long long)metadataObjectIdentifier;
- (id)newObjectUUIDForObjectIdentifier:(long long)arg1;
- (id)objectContainer;
- (void)p_readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(bool)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)p_readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (unsigned char)packageIdentifier;
- (void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(struct ObjectLocation { long long x1; long long x2; })arg3 secondObjectLocation:(struct ObjectLocation { long long x1; long long x2; })arg4;
- (id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
- (void)postprocessMetadata:(id)arg1;
- (long long)preferredPackageType;
- (void)prepareForFullDocumentUpgrade;
- (void)prepareForFullDocumentUpgradeImpl;
- (void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)preprocessMetadata:(id)arg1;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)readComponentAsync:(id)arg1;
- (bool)readComponentIfNeededAsync:(id)arg1;
- (void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(bool)arg3 fromComponent:(id)arg4;
- (void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)readPackageMetadataWithError:(id*)arg1;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
- (void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (unsigned long long)saveToken;
- (long long)sourceType;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(bool)arg2;
- (id)unsupportedFeatureIdentifiers;
- (void)updateObjectContextForSuccessfulRead;

@end
