/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> > { 
        struct __split_buffer<GEORoadEdge *, std::__1::allocator<GEORoadEdge *> > { 
            struct { /* ? */ } **__first_; 
            struct { /* ? */ } **__begin_; 
            struct { /* ? */ } **__end_; 
            struct __compressed_pair<GEORoadEdge **, std::__1::allocator<GEORoadEdge *> > { 
                struct { /* ? */ } **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<GEORoadEdge> > { 
            unsigned long long __first_; 
        } __size_; 
    }  _edges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (unsigned long long)_connectionTypeForEdge:(struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 points:(struct { float x1; float x2; }*)arg2 connectingTilePoint:(struct Matrix<float, 2, 1> { float x1[2]; })arg3;
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
- (void)dealloc;
- (id)initWithMap:(id)arg1 roadFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)arg2 shouldFlip:(bool)arg3;

@end
