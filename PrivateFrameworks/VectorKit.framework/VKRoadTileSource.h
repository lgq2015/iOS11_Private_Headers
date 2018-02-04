/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTileSource : VKVectorTileSource {
    struct map<VKTileKey, VKTile *, bool (*)(const VKTileKey &, const VKTileKey &), std::__1::allocator<std::__1::pair<const VKTileKey, VKTile *> > >={__tree<std::__1::__value_type<VKTileKey, VKTile *>, std::__1::__map_value_compare<VKTileKey, std::__1::__value_type<VKTileKey, VKTile *>, bool (*)(const VKTileKey &, const VKTileKey &), false>, std::__1::allocator<std::__1::__value_type<VKTileKey, VKTile *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {} * _inflightTiles;
    struct map<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, bool (*)(const VKTileKey &, const VKTileKey &), std::__1::allocator<std::__1::pair<const VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > >={__tree<std::__1::__value_type<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::__map_value_compare<VKTileKey, std::__1::__value_type<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, bool (*)(const VKTileKey &, const VKTileKey &), false>, std::__1::allocator<std::__1::__value_type<VKTileKey, geo::_retain_ptr<VKTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {} * _privateInflightTiles;
    bool  _trafficEnabled;
    VKTrafficTileSource * _trafficTileSource;
}

@property (nonatomic) bool trafficEnabled;
@property (nonatomic, retain) VKTrafficTileSource *trafficTileSource;

- (void)_fetchedTile:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (void)expireAllTraffic;
- (id)inflightTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (unsigned char)mapLayerForZoomLevelRange;
- (bool)minimumZoomLevelBoundsCamera;
- (void)releaseTraffic;
- (void)setClient:(id)arg1;
- (void)setMapType:(long long)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficTileSource:(id)arg1;
- (bool)shouldObeyHybridUnavailableRegions;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (bool)trafficEnabled;
- (id)trafficTileSource;

@end
