/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteContext : NSObject {
    NSString * _accessPointEntryName;
    NSString * _accessPointExitName;
    NSHashTable * _alternateRouteLineObservers;
    NSArray * _alternateRoutes;
    long long  _currentLegIndex;
    long long  _currentStepIndex;
    bool  _hasContextChangedForAlternateRouteLines;
    bool  _hasContextChangedForLabels;
    bool  _hasContextChangedForRouteLine;
    long long  _inspectedLegIndex;
    long long  _inspectedStepIndex;
    NSHashTable * _labelObservers;
    NSString * _locale;
    struct { 
        double latitude; 
        double longitude; 
    }  _puckLocation;
    float  _puckRadius;
    unsigned long long  _puckSnappedStopID;
    VKRouteInfo * _routeInfo;
    NSHashTable * _routeLineObservers;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    struct multimap<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > > > > { 
        struct __tree<std::__1::__value_type<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > >, std::__1::less<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _shareSections;
    bool  _snappingToTransitLines;
    unsigned char  _useType;
    unsigned char  useType;
}

@property (nonatomic, retain) NSString *accessPointEntryName;
@property (nonatomic, retain) NSString *accessPointExitName;
@property (nonatomic, retain) NSArray *alternateRoutes;
@property (nonatomic) long long currentLegIndex;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) long long inspectedLegIndex;
@property (nonatomic) long long inspectedStepIndex;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) struct { double x1; double x2; } puckLocation;
@property (nonatomic) float puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID;
@property (nonatomic, readonly) VKRouteInfo *routeInfo;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) bool snappingToTransitLines;
@property (nonatomic, readonly) unsigned long long totalRouteCount;
@property (nonatomic, readonly) unsigned char useType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hashTableForObserverType:(unsigned char)arg1;
- (void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(bool)arg2;
- (id)accessPointEntryName;
- (id)accessPointExitName;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addShareSections:(const struct { id x1; /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*x2; out long x3; void*x4; long x5; int x6; in void*x7; unsigned char x8; out out const double x9; int x10; in void*x11; void*x12; void*x13; void*x14; unsigned int x15; float x16; }*)arg1 shareCount:(unsigned int)arg2;
- (id)alternateRoutes;
- (long long)currentLegIndex;
- (long long)currentStepIndex;
- (void)dealloc;
- (void)forEachSectionWithShareCount:(unsigned int)arg1 dothis:(id /* block */)arg2;
- (id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2;
- (id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2;
- (long long)inspectedLegIndex;
- (long long)inspectedStepIndex;
- (id)locale;
- (struct { double x1; double x2; })puckLocation;
- (float)puckRadius;
- (unsigned long long)puckSnappedStopID;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;
- (id)routeInfo;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setAccessPointEntryName:(id)arg1;
- (void)setAccessPointExitName:(id)arg1;
- (void)setAlternateRoutes:(id)arg1;
- (void)setCurrentLegIndex:(long long)arg1;
- (void)setCurrentStepIndex:(long long)arg1;
- (void)setInspectedLegIndex:(long long)arg1;
- (void)setInspectedStepIndex:(long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPuckLocation:(struct { double x1; double x2; })arg1;
- (void)setPuckRadius:(float)arg1;
- (void)setPuckSnappedStopID:(unsigned long long)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSnappingToTransitLines:(bool)arg1;
- (bool)snappingToTransitLines;
- (unsigned long long)totalRouteCount;
- (unsigned char)useType;

@end
