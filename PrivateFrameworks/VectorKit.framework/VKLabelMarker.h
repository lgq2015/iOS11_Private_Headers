/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarker : VKFeatureMarker <GEOTransitArtworkDataSource, MKCalloutSource> {
    struct shared_ptr<md::LabelMarker> { 
        struct LabelMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelMarker;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) long long artworkSourceType;
@property (nonatomic, readonly) long long artworkUseType;
@property (nonatomic, readonly) NSArray *dataIconImageKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailCalloutAccessoryView;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) NSArray *iconImageKeys;
@property (nonatomic, readonly) MKMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSArray *imageKeys;
@property (nonatomic) bool isDragged;
@property (nonatomic, retain) UIView *leftCalloutAccessoryView;
@property (nonatomic, readonly) NSArray *relatedSubTexts;
@property (nonatomic, readonly) NSArray *relatedTexts;
@property (nonatomic, retain) UIView *rightCalloutAccessoryView;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (nonatomic, readonly) NSArray *shields;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *transitSystems;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)markerWithLabelMarker:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })_bounds;
- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (struct CGPoint { double x1; double x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutAnchorRect;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (unsigned long long)clusterFeatureCount;
- (struct { double x1; double x2; })coordinate;
- (unsigned long long)countFeatureIDs;
- (id)dataIconImageKeys;
- (id)debugAnchorPointString;
- (unsigned long long)elementCount;
- (id)featureAnnotation;
- (id)featureHandles;
- (const unsigned long long*)featureIDs;
- (id)featureTile;
- (int)featureType;
- (bool)hasBusinessID;
- (id)iconImageKeys;
- (id)imageKeys;
- (id)incident;
- (id)initWithFeatureMarkerPtr:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithLabelMarkerPtr:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (bool)isAlongSelectedTransitLine;
- (bool)isCluster;
- (bool)isClusterChild;
- (bool)isDragged;
- (bool)isFlyoverTour;
- (bool)isLabelHitAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (bool)isLeafCluster;
- (bool)isOnRoute;
- (bool)isOneWayArrow;
- (bool)isRouteEta;
- (bool)isSelectable;
- (bool)isTextVisible;
- (bool)isTrafficCamera;
- (bool)isTrafficIncident;
- (bool)isTransit;
- (bool)isTransitLine;
- (bool)isVenueButton;
- (bool)isVisible;
- (const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)labelMarkerImpl;
- (id)mapRegion;
- (id)parentClusterLabelMarker;
- (unsigned char)pickedLabelBalloonBehavior;
- (bool)positionOfInterest:(struct { double x1; double x2; }*)arg1 zoom:(float*)arg2;
- (id)relatedSubTexts;
- (id)relatedTexts;
- (id)routeInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenCollisionBounds;
- (struct CGPoint { double x1; double x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2;
- (int)selectionType;
- (void)setIsDragged:(bool)arg1;
- (void)setLabelPressed:(bool)arg1;
- (id)shields;
- (int)sortKey;
- (id)subtext;
- (id)text;
- (id)trafficCamera;
- (id)transitSystems;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueComponentID;
- (unsigned char)venueComponentType;
- (short)venueFloorOrdinal;
- (unsigned long long)venueID;
- (unsigned long long)venueLevelID;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_annotationTitle;
- (id)accessibilityText;
- (long long)artworkSourceType;
- (long long)artworkUseType;
- (id)detailCalloutAccessoryView;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)identifier;
- (id)leftCalloutAccessoryView;
- (id)rightCalloutAccessoryView;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)shieldDataSource;
- (id)subtitle;
- (id)title;

@end
