/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteBuilder : NSObject {
    GEOMapRegion * _boundingMapRegion;
    NSMutableArray * _composedGuidanceEvents;
    NSMutableArray * _legs;
    NSMutableArray * _pointSections;
    NSData * _pointsData;
    GEORoute * _route;
    NSMutableArray * _steps;
    bool  _usesZilch;
}

- (void).cxx_destruct;
- (void)_buildPointSectionsForRoute:(id)arg1;
- (id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2;
- (id)_composedRouteStepForStep:(id)arg1 route:(id)arg2;
- (void)buildRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;

@end
