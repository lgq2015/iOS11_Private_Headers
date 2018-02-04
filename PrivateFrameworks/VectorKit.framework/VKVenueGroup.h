/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVenueGroup : VKPolygonGroup {
    unsigned long long  _buildingId;
    int  _layer;
    float  _maximumSectionLength;
    struct optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__first_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { 
                    struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__begin_; 
                    struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { 
                        struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__first_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::VenueWall::EndCapVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _venueWallEndCapMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { 
        struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__begin_; 
        struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { 
            struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *__first_; 
        } __end_cap_; 
    }  _venueWallEndMeshes;
    struct optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__first_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { 
                    struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__begin_; 
                    struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { 
                        struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__first_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::Venue3DStroke::HorizontalDefaultVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _venueWallHorizontalStrokeMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { 
        struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__begin_; 
        struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { 
            struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *__first_; 
        } __end_cap_; 
    }  _venueWallHorizontalStrokeMeshes;
    struct optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__first_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::VenueWall::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { 
                    struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__begin_; 
                    struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { 
                        struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__first_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::VenueWall::DefaultVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _venueWallMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::VenueWall::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { 
        struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__begin_; 
        struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { 
            struct shared_ptr<ggl::VenueWall::MeshMesh> {} *__first_; 
        } __end_cap_; 
    }  _venueWallMeshes;
    struct optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__first_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { 
                    struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__begin_; 
                    struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { 
                        struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__first_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::Venue3DStroke::VerticalDefaultVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _venueWallVerticalStrokeMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { 
        struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__begin_; 
        struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { 
            struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *__first_; 
        } __end_cap_; 
    }  _venueWallVerticalStrokeMeshes;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> >, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > > { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::__unordered_map_hasher<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::hash<SectionKey>, true>, std::__1::__unordered_map_equal<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::hash<SectionKey>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _venueWalls;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _wallTexture;
}

@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) int layer;
@property (nonatomic, readonly) float maximumSectionLength;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh>' */ struct *venueWallEndMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > >=^{shared_ptr<ggl::VenueWall::EndCapMesh>}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>' */ struct *venueWallHorizontalStrokeMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > >=^{shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VenueWall::MeshMesh>' */ struct *venueWallMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > >=^{shared_ptr<ggl::VenueWall::MeshMesh>}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>' */ struct *venueWallVerticalStrokeMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > >=^{shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>}}} */
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*wallTexture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addStrokeForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 paddedCount:(unsigned int)arg2 key:(struct pair<void *, unsigned long> { void *x1; unsigned long long x2; })arg3 attributes:(id)arg4 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg7;
- (void)addWallStrokesForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg2 attributes:(id)arg3 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg6;
- (void)addWallsForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg2 attributes:(id)arg3 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg6;
- (struct StrokeBufferSizing { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bufferSizingForStrokesOnSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 styles:(const struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg2 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg3;
- (unsigned long long)buildingId;
- (void)didFinishAddingData;
- (const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)generateEdgeListForPolygonSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 key:(const struct pair<void *, unsigned long> { void *x1; unsigned long long x2; }*)arg2;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5 sharedResources:(id)arg6;
- (int)layer;
- (float)maximumSectionLength;
- (void)prepareToGenerateWallStrokesForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 styles:(const struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg2 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg3;
- (void)prepareToGenerateWallsForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg2 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg3;
- (void)prepareToStrokeSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 key:(const struct pair<void *, unsigned long> { void *x1; unsigned long long x2; }*)arg2 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg3 paddedCount:(unsigned int)arg4;
- (void)updateTextures:(unsigned char)arg1;
- (const struct vector<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *x1; struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::EndCapMesh> > > { struct shared_ptr<ggl::VenueWall::EndCapMesh> {} *x_3_1_1; } x3; }*)venueWallEndMeshes;
- (const struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *x1; struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> > > { struct shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> {} *x_3_1_1; } x3; }*)venueWallHorizontalStrokeMeshes;
- (const struct vector<std::__1::shared_ptr<ggl::VenueWall::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { struct shared_ptr<ggl::VenueWall::MeshMesh> {} *x1; struct shared_ptr<ggl::VenueWall::MeshMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::VenueWall::MeshMesh> > > { struct shared_ptr<ggl::VenueWall::MeshMesh> {} *x_3_1_1; } x3; }*)venueWallMeshes;
- (const struct vector<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *x1; struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> > > { struct shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> {} *x_3_1_1; } x3; }*)venueWallVerticalStrokeMeshes;
- (unsigned long long)verticalStrokeCountForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 styles:(const struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg2 edges:(const struct vector<Edge, std::__1::allocator<Edge> > { struct Edge {} *x1; struct Edge {} *x2; struct __compressed_pair<Edge *, std::__1::allocator<Edge> > { struct Edge {} *x_3_1_1; } x3; }*)arg3;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)wallTexture;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
