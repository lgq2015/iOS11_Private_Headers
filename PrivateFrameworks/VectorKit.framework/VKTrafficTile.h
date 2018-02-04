/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficTile : VKVectorTile {
    struct TrafficMeshStyle { 
        int _style[4]; 
    }  _builtTrafficStyle;
    struct unique_ptr<md::CasedTrafficLayer, std::__1::default_delete<md::CasedTrafficLayer> > { 
        struct __compressed_pair<md::CasedTrafficLayer *, std::__1::default_delete<md::CasedTrafficLayer> > { 
            struct CasedTrafficLayer {} *__first_; 
        } __ptr_; 
    }  _casedTrafficLayer;
    NSData * _data;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    }  _dataKey;
    VKTileKeyMap * _dynamicTiles;
    struct unique_ptr<md::PilledTrafficLayer, std::__1::default_delete<md::PilledTrafficLayer> > { 
        struct __compressed_pair<md::PilledTrafficLayer *, std::__1::default_delete<md::PilledTrafficLayer> > { 
            struct PilledTrafficLayer {} *__first_; 
        } __ptr_; 
    }  _pilledTrafficLayer;
    struct unique_ptr<md::SolidTrafficLayer, std::__1::default_delete<md::SolidTrafficLayer> > { 
        struct __compressed_pair<md::SolidTrafficLayer *, std::__1::default_delete<md::SolidTrafficLayer> > { 
            struct SolidTrafficLayer {} *__first_; 
        } __ptr_; 
    }  _solidTrafficLayer;
    struct FeatureAttributeSet { 
        struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { 
            struct FeatureAttributePair {} *__begin_; 
            struct FeatureAttributePair {} *__end_; 
            struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { 
                struct FeatureAttributePair {} *__first_; 
            } __end_cap_; 
        } _attributes; 
    }  _styleAttributes;
    struct shared_ptr<zilch::TrafficSkeletonTile> { 
        struct TrafficSkeletonTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _trafficData;
    struct unique_ptr<md::TrafficStream, std::__1::default_delete<md::TrafficStream> > { 
        struct __compressed_pair<md::TrafficStream *, std::__1::default_delete<md::TrafficStream> > { 
            struct TrafficStream {} *__first_; 
        } __ptr_; 
    }  _trafficStream;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{CasedTrafficLayer=^^?{vector<md::CasedTrafficBatch *' */ struct *casedTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::TrafficBase::BaseMesh *> >=^^{BaseMesh}}}[1^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}Q^{TrafficSharedResources}} */
@property (nonatomic) const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*dataKey;
@property (nonatomic, readonly) VKTileKeyMap *dynamicTiles;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{PilledTrafficLayer=^^?{vector<md::PilledTrafficBatch *' */ struct *pilledTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> >=^^{BaseMesh}}}[1^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}Q^{TrafficSharedResources}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{SolidTrafficLayer=^^?{vector<md::SolidTrafficBatch *' */ struct *solidTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::TrafficBase::BaseMesh *> >=^^{BaseMesh}}}[2^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}Q^{TrafficSharedResources}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<gss::FeatureAttributePair' */ struct *styleAttributes; /* unknown property attribute:  std::__1::allocator<gss::FeatureAttributePair> >=^{FeatureAttributePair}}}} */
@property (nonatomic, readonly) const struct shared_ptr<zilch::TrafficSkeletonTile> { struct TrafficSkeletonTile {} *x1; struct __shared_weak_count {} *x2; }*trafficSkeletonTile;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TrafficStream=IIIf{unique_ptr<ggl::Texture2D' */ struct *trafficStream; /* unknown property attribute:  true> >=f}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildSkeletonMap;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withLoader:(struct Loader { struct unique_ptr<ggl::LoaderImpl, std::__1::default_delete<ggl::LoaderImpl> > { struct __compressed_pair<ggl::LoaderImpl *, std::__1::default_delete<ggl::LoaderImpl> > { struct LoaderImpl {} *x_1_2_1; } x_1_1_1; } x1; }*)arg2 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg3;
- (void)buildTrafficStreamWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg2;
- (void)buildTrafficWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg2 addSegment:(id /* block */)arg3;
- (bool)builtRenderingData;
- (const struct TrafficMeshStyle { int x1[4]; }*)builtTrafficStyle;
- (struct CasedTrafficLayer { int (**x1)(); struct vector<md::CasedTrafficBatch *, std::__1::allocator<md::CasedTrafficBatch *> > { struct CasedTrafficBatch {} **x_2_1_1; struct CasedTrafficBatch {} **x_2_1_2; struct __compressed_pair<md::CasedTrafficBatch **, std::__1::allocator<md::CasedTrafficBatch *> > { struct CasedTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::TrafficBase::BaseMesh *, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::TrafficBase::BaseMesh **, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[1]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; unsigned long long x6; struct TrafficSharedResources {} *x7; }*)casedTrafficLayer;
- (const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)dataKey;
- (void)dealloc;
- (id)description;
- (id)dynamicTiles;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 data:(id)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (struct PilledTrafficLayer { int (**x1)(); struct vector<md::PilledTrafficBatch *, std::__1::allocator<md::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_2_1_1; struct PilledTrafficBatch {} **x_2_1_2; struct __compressed_pair<md::PilledTrafficBatch **, std::__1::allocator<md::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::OptimizedTraffic::BaseMesh *, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::OptimizedTraffic::BaseMesh **, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[1]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; unsigned long long x6; struct TrafficSharedResources {} *x7; }*)pilledTrafficLayer;
- (void)setDataKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setupStyleAttributesWithRoadData:(id)arg1;
- (struct SolidTrafficLayer { int (**x1)(); struct vector<md::SolidTrafficBatch *, std::__1::allocator<md::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_2_1_1; struct SolidTrafficBatch {} **x_2_1_2; struct __compressed_pair<md::SolidTrafficBatch **, std::__1::allocator<md::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::TrafficBase::BaseMesh *, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::TrafficBase::BaseMesh **, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[2]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; unsigned long long x6; struct TrafficSharedResources {} *x7; }*)solidTrafficLayer;
- (struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)styleAttributes;
- (const struct shared_ptr<zilch::TrafficSkeletonTile> { struct TrafficSkeletonTile {} *x1; struct __shared_weak_count {} *x2; }*)trafficSkeletonTile;
- (const struct TrafficStream { unsigned int x1; unsigned int x2; unsigned int x3; float x4; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_5_1_1; } x5; float x6; struct TexelRun { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; } x7; struct unordered_map<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun, md::TrafficStream::SectionKeyHash, std::__1::equal_to<md::TrafficStream::SectionKey>, std::__1::allocator<std::__1::pair<const md::TrafficStream::SectionKey, md::TrafficStream::TexelRun> > > { struct __hash_table<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, std::__1::__unordered_map_hasher<md::TrafficStream::SectionKey, std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, md::TrafficStream::SectionKeyHash, true>, std::__1::__unordered_map_equal<md::TrafficStream::SectionKey, std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, std::__1::equal_to<md::TrafficStream::SectionKey>, true>, std::__1::allocator<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::TrafficStream::SectionKey, md::TrafficStream::TexelRun>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; }*)trafficStream;

@end
