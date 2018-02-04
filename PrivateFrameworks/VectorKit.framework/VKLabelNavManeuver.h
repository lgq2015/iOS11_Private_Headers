/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavManeuver : NSObject <VKLabelNavFeature> {
    int  _drivingSide;
    bool  _isPicked;
    bool  _isVisible;
    VKLabelNavRoadLabel * _maneuverSign;
    NSString * _name;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    int  _type;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _worldPoint;
}

@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic, readonly) bool isGuidanceStepStart;
@property (nonatomic, readonly) bool isInGuidance;
@property (nonatomic, readonly) bool isOnRoute;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic, readonly) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) VKLabelNavRoadLabel *maneuverSign;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;

- (id).cxx_construct;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithGEOComposedRouteStep:(id)arg1;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (bool)isVisible;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (id)maneuverSign;
- (id)name;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setIsPicked:(bool)arg1;
- (id)shieldDisplayGroup;

@end
