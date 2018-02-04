/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectReferenceMap : NSObject {
    struct unordered_map<const long long, __unsafe_unretained Class, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, __unsafe_unretained Class> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, __unsafe_unretained Class> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, TSP::IdentifierHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, __unsafe_unretained Class>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _classMap;
    TSPObjectContext * _context;
    <TSPExternalReferenceDelegate> * _delegate;
    struct unordered_map<const long long, TSP::ReferenceMapInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ReferenceMapInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, TSP::IdentifierHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _inverseReferenceMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObjectReferenceMap:(id)arg1;
- (void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectIdentifier:(long long)arg2;
- (void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectOrLazyReference:(id)arg2;
- (void)addReferencesFromObject:(id)arg1 archiver:(id)arg2;
- (id)descriptionOfAllPossiblePathsToObject:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)descriptionOfAllPossiblePathsToObjectIdentifier:(long long)arg1 withLimit:(unsigned long long)arg2;
- (bool)hasParentsForObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)initWithContext:(id)arg1 delegate:(id)arg2 externalReferencesFromComponent:(id)arg3;
- (void)mergeWithObjectReferenceMap:(id)arg1;
- (id)parentObjectPathsForObjectIdentifier:(long long)arg1 limit:(unsigned long long)arg2 totalParentObjects:(unsigned long long*)arg3;
- (id)parentObjectsForObject:(id)arg1;
- (id)parentObjectsForObjectIdentifier:(long long)arg1;
- (unsigned long long)visitObjectWithIdentifier:(long long)arg1 level:(unsigned long long)arg2 mode:(int)arg3 limit:(unsigned long long)arg4 pathSuffix:(id)arg5 visitedObjectIdentifiers:(id)arg6 updatingParentObjectPaths:(id)arg7;

@end
