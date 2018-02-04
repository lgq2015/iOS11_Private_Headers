/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteTransitStationSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {
    struct { 
        unsigned long long stopID; 
        unsigned long long hallID; 
        unsigned long long stationID; 
    }  _fromNodeID;
    struct { 
        double latitude; 
        double longitude; 
    }  _fromNodeLocation;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct { 
        unsigned long long stopID; 
        unsigned long long hallID; 
        unsigned long long stationID; 
    }  _toNodeID;
    struct { 
        double latitude; 
        double longitude; 
    }  _toNodeLocation;
    int  _toNodeSignificance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } fromNodeID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTransfer;
@property (nonatomic, readonly) unsigned long long lineID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } toNodeID;
@property (nonatomic, readonly) int toNodeSignificance;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)description;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })fromNodeID;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 toNodeSignificance:(int)arg5 startDistance:(double)arg6 lengthScaleFactor:(double)arg7;
- (bool)isTransfer;
- (unsigned long long)lineID;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })toNodeID;
- (int)toNodeSignificance;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(bool)arg3;
- (id)unsnappedPathsInOverlay:(id)arg1;

@end
