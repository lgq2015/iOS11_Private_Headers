/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoadGraph : NSObject {
    unsigned long long  _currentRoadStartSimplifiedPointIndex;
    NSMutableSet * _duplicateTiles;
    unsigned long long  _firstPOIAligningRouteSegment;
    NSMutableArray * _intersections;
    NSMutableArray * _junctions;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _offRouteJunctionSelectRect;
    NSMutableArray * _offRouteJunctions;
    bool  _offRouteJunctionsValid;
    NSMutableArray * _oppositeCarriagewayJunctions;
    bool  _oppositeCarriagewayJunctionsValid;
    struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > > { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _routeFeatureMap;
    bool  _routeFeatureMapValid;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    struct vector<RouteSegment, std::__1::allocator<RouteSegment> > { 
        struct RouteSegment {} *__begin_; 
        struct RouteSegment {} *__end_; 
        struct __compressed_pair<RouteSegment *, std::__1::allocator<RouteSegment> > { 
            struct RouteSegment {} *__first_; 
        } __end_cap_; 
    }  _screenRouteSegments;
    bool  _screenRouteValid;
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
        struct Matrix<double, 2, 1> {} *__begin_; 
        struct Matrix<double, 2, 1> {} *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
            struct Matrix<double, 2, 1> {} *__first_; 
        } __end_cap_; 
    }  _simplifiedRoutePoints;
    bool  _simplifiedRouteValid;
    NSMutableDictionary * _tileDatasByIndex;
    NSMutableSet * _tiles;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _unitHeading;
}

@property (nonatomic, retain) NSMutableArray *junctions;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(bool)arg4;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (void)_findOffRouteJunctions;
- (id)_junctionForRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(bool)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (id)_nextIntersectionForRoad:(id)arg1;
- (void)_transformRouteToScreenWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;
- (void)_updateSimplifiedRoute;
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { /* ? */ } *x3; }*)arg1 atA:(bool)arg2 isRouteRefineJunction:(bool)arg3 tile:(id)arg4 junctionList:(id)arg5;
- (bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float*)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3;
- (unsigned long long)countReadyJunctionLists;
- (void)dealloc;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (id)initWithJunctions:(id)arg1;
- (bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;
- (id)junctionForRoad:(id)arg1 nearJunction:(bool)arg2 crossTileEdge:(bool)arg3;
- (id)junctionListForDepth:(unsigned long long)arg1;
- (id)junctions;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(bool)arg3;
- (id)oppositeCarriagewayJunctions;
- (id)overpassJunctionForJunction:(id)arg1;
- (bool)prepareOppositeCarriagewayJunctions;
- (void)reset;
- (void)routeJunctionsHaveChanged;
- (void)setJunctions:(id)arg1;
- (void)setTiles:(id)arg1;
- (void)startingLabelLayoutWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 routeUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct Matrix<float, 2, 1> { float x1[2]; })unitHeading;

@end
