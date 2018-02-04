/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver> {
    struct _GEOGenericContainer<md::ShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::ShieldCacheKey>, std::__1::equal_to<md::ShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr> > > { 
            struct __list_node_base<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> { 
                struct __list_node_base<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> {} *__prev_; 
                struct __list_node_base<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> {} *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > { 
                unsigned long long __first_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *>, std::__1::hash<md::ShieldCacheKey>, std::__1::equal_to<md::ShieldCacheKey>, std::__1::allocator<std::__1::pair<const md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > > { 
            struct __hash_table<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<md::ShieldCacheKey, std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::hash<md::ShieldCacheKey>, true>, std::__1::__unordered_map_equal<md::ShieldCacheKey, std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::equal_to<md::ShieldCacheKey>, true>, std::__1::allocator<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<md::ShieldCacheKey, std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::hash<md::ShieldCacheKey>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<md::ShieldCacheKey, std::__1::__hash_value_type<md::ShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::ShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::equal_to<md::ShieldCacheKey>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _artworkPool;
    NSMapTable * _atlases;
    NSLock * _atlasesLock;
    struct _GEOGenericContainer<md::GenericShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::GenericShieldCacheKey>, std::__1::equal_to<md::GenericShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr> > > { 
            struct __list_node_base<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> { 
                struct __list_node_base<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> {} *__prev_; 
                struct __list_node_base<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> {} *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > { 
                unsigned long long __first_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *>, std::__1::hash<md::GenericShieldCacheKey>, std::__1::equal_to<md::GenericShieldCacheKey>, std::__1::allocator<std::__1::pair<const md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > > { 
            struct __hash_table<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<md::GenericShieldCacheKey, std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::hash<md::GenericShieldCacheKey>, true>, std::__1::__unordered_map_equal<md::GenericShieldCacheKey, std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::equal_to<md::GenericShieldCacheKey>, true>, std::__1::allocator<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<md::GenericShieldCacheKey, std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::hash<md::GenericShieldCacheKey>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<md::GenericShieldCacheKey, std::__1::__hash_value_type<md::GenericShieldCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::GenericShieldCacheKey, VKShieldArtwork *, _value_ptr>, void *> >, std::__1::equal_to<md::GenericShieldCacheKey>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _genericArtworks;
    VKGenericShieldGenerator * _genericShieldGenerator;
    NSMapTable * _indexes;
    NSLock * _indexesLock;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSArray * _nonRegionalResourceNames;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _nonRegionalResourceNamesLock;
    VKResourceManager * _resourceManager;
    bool  _shouldCacheAtlases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldCacheAtlases;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_atlasForName:(id)arg1;
- (id)_indexForName:(id)arg1;
- (id)_nonRegionalIndexesAndPacks;
- (id)artworkForShieldName:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 size:(long long)arg5 idiom:(long long)arg6 numberOfLines:(unsigned long long)arg7 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 style:(const struct shared_ptr<const md::GenericShieldStyleInfo> { struct GenericShieldStyleInfo {} *x1; struct __shared_weak_count {} *x2; }*)arg5 size:(long long)arg6 idiom:(long long)arg7 numberOfLines:(unsigned long long)arg8 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg9 featureType:(unsigned long long)arg10 variant:(unsigned long long)arg11;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg6 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg7 featureType:(unsigned long long)arg8 variant:(unsigned long long)arg9;
- (void)dealloc;
- (id)imageForShieldType:(long long)arg1 shieldText:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 shouldCacheAtlases:(bool)arg3;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (bool)shouldCacheAtlases;

@end
