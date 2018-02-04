/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTileIDKeyDict : TSPContainedObject {
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __hash_table<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, TSTIntHasher, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * mMap;
}

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2;
- (long long)count;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)makeTilesPerformSelector:(SEL)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(struct { unsigned short x1; unsigned short x2; })arg1;
- (void)setTile:(id)arg1 forID:(struct { unsigned short x1; unsigned short x2; })arg2;
- (id)tileForID:(struct { unsigned short x1; unsigned short x2; })arg1;

@end
