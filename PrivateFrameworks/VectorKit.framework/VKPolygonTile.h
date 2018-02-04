/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonTile : VKSkewingVectorTile <VKPolygonTile> {
    float  _alpha;
    VKAnimation * _animation;
    VKAnimation * _animationForPitch;
    struct vector<std::__1::shared_ptr<md::CoastlineGroup>, std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > > { 
        struct shared_ptr<md::CoastlineGroup> {} *__begin_; 
        struct shared_ptr<md::CoastlineGroup> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::CoastlineGroup> *, std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > > { 
            struct shared_ptr<md::CoastlineGroup> {} *__first_; 
        } __end_cap_; 
    }  _coastlineGroups;
    float  _maxLayeringHeight;
    float  _minLayeringHeight;
    struct vector<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
        struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__begin_; 
        struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__end_; 
        struct __compressed_pair<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
            struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__first_; 
        } __end_cap_; 
    }  _polygonGroups;
    float  _scale;
    struct unordered_map<unsigned long long, md::PolygonRouteAttributes, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, md::PolygonRouteAttributes> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _transitNodesRouteAttributesMap;
    struct unordered_map<unsigned long long, VKPolygonGroup *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, VKPolygonGroup *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, VKPolygonGroup *>, std::__1::equal_to<unsigned long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _transitPolygonGroupMap;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) VKAnimation *animation;
@property (nonatomic, retain) VKAnimation *animationForPitch;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<md::CoastlineGroup>' */ struct *coastlineGroups; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > >=^{shared_ptr<md::CoastlineGroup>}}} */
@property (nonatomic, readonly) float maxLayeringHeight;
@property (nonatomic, readonly) float minLayeringHeight;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<geo::_retain_ptr<VKPolygonGroup *' */ struct *polygonGroups; /* unknown property attribute:  geo::_equal_objc>}}} */
@property (nonatomic) float scale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)alpha;
- (id)animation;
- (id)animationForPitch;
- (void)buildCoastlinesWithStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)buildMeshesWithDevice:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1 triangulator:(id)arg2 prepareExtrusion:(bool)arg3;
- (struct vector<std::__1::shared_ptr<md::CoastlineGroup>, std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > > { struct shared_ptr<md::CoastlineGroup> {} *x1; struct shared_ptr<md::CoastlineGroup> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::CoastlineGroup> *, std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > > { struct shared_ptr<md::CoastlineGroup> {} *x_3_1_1; } x3; }*)coastlineGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(bool)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (const struct vector<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x1; struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x2; struct __compressed_pair<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x_3_1_1; } x3; }*)polygonGroups;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setTransitNodesRouteAttributes:(const struct unordered_map<unsigned long long, md::PolygonRouteAttributes, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, md::PolygonRouteAttributes> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::PolygonRouteAttributes>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

@end
