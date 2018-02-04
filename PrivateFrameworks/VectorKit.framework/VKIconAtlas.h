/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconAtlas : NSObject {
    struct _GEOGenericContainer<md::IconCacheKey, id, std::__1::hash<md::IconCacheKey>, std::__1::equal_to<md::IconCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr> > > { 
            struct __list_node_base<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> { 
                struct __list_node_base<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> {} *__prev_; 
                struct __list_node_base<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> {} *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> > > { 
                unsigned long long __first_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *>, std::__1::hash<md::IconCacheKey>, std::__1::equal_to<md::IconCacheKey>, std::__1::allocator<std::__1::pair<const md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> > > > { 
            struct __hash_table<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<md::IconCacheKey, std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, std::__1::hash<md::IconCacheKey>, true>, std::__1::__unordered_map_equal<md::IconCacheKey, std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, std::__1::equal_to<md::IconCacheKey>, true>, std::__1::allocator<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<md::IconCacheKey, std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, std::__1::hash<md::IconCacheKey>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<md::IconCacheKey, std::__1::__hash_value_type<md::IconCacheKey, std::__1::__list_iterator<geo::detail::_CacheItem<md::IconCacheKey, id, _value_ptr>, void *> >, std::__1::equal_to<md::IconCacheKey>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _artworkPool;
    NSMapTable * _atlasToImages;
    NSLock * _atlasToImagesLock;
    VKPIconPack * _iconPack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_artworkForBaseImage:(struct CGImage { }*)arg1 additionalImage:(struct CGImage { }*)arg2 fullBleedColor:(struct CGColor { }*)arg3 style:(struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_3_2_1; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; struct FixedPointVector<unsigned char, 4> { unsigned char x_15_1_1[4]; } x15; struct FixedPointVector<unsigned char, 4> { unsigned char x_16_1_1[4]; } x16; }*)arg4 extraStyle:(struct ExtraStyle { float x1; float x2; float x3; struct Matrix<unsigned int, 2, 1> { unsigned int x_4_1_1[2]; } x4; struct Matrix<unsigned int, 2, 1> { unsigned int x_5_1_1[2]; } x5; struct Matrix<unsigned int, 2, 1> { unsigned int x_6_1_1[2]; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg5 contentScale:(double)arg6 hasText:(bool)arg7;
- (struct CGImage { }*)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2;
- (struct CGImage { }*)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3;
- (struct CGColor { }*)_newFullBleedColorForName:(id)arg1 contentScale:(double)arg2;
- (id)artworkForName:(id)arg1 style:(struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_3_2_1; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; struct FixedPointVector<unsigned char, 4> { unsigned char x_15_1_1[4]; } x15; struct FixedPointVector<unsigned char, 4> { unsigned char x_16_1_1[4]; } x16; }*)arg2 extraStyle:(struct ExtraStyle { float x1; float x2; float x3; struct Matrix<unsigned int, 2, 1> { unsigned int x_4_1_1[2]; } x4; struct Matrix<unsigned int, 2, 1> { unsigned int x_5_1_1[2]; } x5; struct Matrix<unsigned int, 2, 1> { unsigned int x_6_1_1[2]; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(bool)arg6 includeFullBleedColor:(bool)arg7 resourceNames:(id)arg8;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_3_2_1; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; struct FixedPointVector<unsigned char, 4> { unsigned char x_15_1_1[4]; } x15; struct FixedPointVector<unsigned char, 4> { unsigned char x_16_1_1[4]; } x16; }*)arg3 extraStyle:(struct ExtraStyle { float x1; float x2; float x3; struct Matrix<unsigned int, 2, 1> { unsigned int x_4_1_1[2]; } x4; struct Matrix<unsigned int, 2, 1> { unsigned int x_5_1_1[2]; } x5; struct Matrix<unsigned int, 2, 1> { unsigned int x_6_1_1[2]; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg4 contentScale:(double)arg5 size:(long long)arg6 includeFullBleedColor:(bool)arg7 resourceNames:(id)arg8;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_3_2_1; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; struct FixedPointVector<unsigned char, 4> { unsigned char x_15_1_1[4]; } x15; struct FixedPointVector<unsigned char, 4> { unsigned char x_16_1_1[4]; } x16; }*)arg3 extraStyle:(struct ExtraStyle { float x1; float x2; float x3; struct Matrix<unsigned int, 2, 1> { unsigned int x_4_1_1[2]; } x4; struct Matrix<unsigned int, 2, 1> { unsigned int x_5_1_1[2]; } x5; struct Matrix<unsigned int, 2, 1> { unsigned int x_6_1_1[2]; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg4 contentScale:(double)arg5 size:(long long)arg6 hasText:(bool)arg7 includeFullBleedColor:(bool)arg8 resourceNames:(id)arg9;
- (void)dealloc;
- (id)init;
- (id)initWithIconPack:(id)arg1;

@end
