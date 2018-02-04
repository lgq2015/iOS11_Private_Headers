/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {
    struct { 
        unsigned long long stopID; 
        unsigned long long hallID; 
        unsigned long long stationID; 
    }  _fromNodeID;
    struct { 
        double latitude; 
        double longitude; 
    }  _fromNodeLocation;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _lineColor;
    unsigned long long  _lineID;
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
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  lineColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) unsigned long long lineID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } toNodeID;
@property (nonatomic, readonly) int toNodeSignificance;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id).cxx_construct;
- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)description;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })fromNodeID;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;
- (bool)isTransfer;
- (struct Matrix<float, 4, 1> { float x1[4]; })lineColor;
- (unsigned long long)lineID;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })toNodeID;
- (int)toNodeSignificance;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (bool)_getEndPoints:(id)arg1 rect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg2 result:(struct array<gm::Matrix<double, 2, 1>, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1[2]; }*)arg3;
- (bool)_validateSnappedPaths:(id)arg1 snappedTileBounds:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg2 overlay:(id)arg3;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(bool)arg3 verifySnapping:(bool)arg4;
- (id)unsnappedPathsInOverlay:(id)arg1;

@end
