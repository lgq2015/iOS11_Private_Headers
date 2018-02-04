/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceTrie : NSObject {
    NSLocale * mLocale;
    struct TSCENamedReferenceTrieNode { 
        struct unordered_map<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> > > > { 
            struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, std::__1::hash<TSUUUID>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<NSMutableSet> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _trackedReferencesByOwner; 
        struct unordered_map<unsigned short, TSCENamedReferenceTrieNode *, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSCENamedReferenceTrieNode *> > > { 
            struct __hash_table<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::hash<unsigned short>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::equal_to<unsigned short>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _children; 
    }  mRoot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deleteName:(id)arg1 inTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 trackedReference:(id)arg3;
- (id)description;
- (id)initWithLocale:(id)arg1;
- (bool)insertName:(id)arg1 inTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 trackedReference:(id)arg3;
- (bool)replaceName:(id)arg1 withName:(id)arg2 inTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3 trackedReference:(id)arg4;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;

@end
