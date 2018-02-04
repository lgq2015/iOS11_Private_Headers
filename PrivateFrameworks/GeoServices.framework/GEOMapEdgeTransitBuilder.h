/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {
    struct deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece> > { 
        struct __split_buffer<geo::TransitEdgePiece *, std::__1::allocator<geo::TransitEdgePiece *> > { 
            struct TransitEdgePiece {} **__first_; 
            struct TransitEdgePiece {} **__begin_; 
            struct TransitEdgePiece {} **__end_; 
            struct __compressed_pair<geo::TransitEdgePiece **, std::__1::allocator<geo::TransitEdgePiece *> > { 
                struct TransitEdgePiece {} **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<geo::TransitEdgePiece> > { 
            unsigned long long __first_; 
        } __size_; 
    }  _pieces;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (bool)_shouldFindEdgeAhead;
- (bool)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece { struct { /* ? */ } *x1; unsigned long long x2; struct { /* ? */ } *x3; struct _retain_ptr<GEOFeature *, geo::_retain_GEOFeature, geo::_release_GEOFeature, geo::_hash_ptr, geo::_equal_ptr> { int (**x_4_1_1)(); struct { /* ? */ } *x_4_1_2; struct _retain_GEOFeature { } x_4_1_3; struct _release_GEOFeature { } x_4_1_4; } x4; unsigned int x5; bool x6; }*)arg2;

@end
