/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {
    NSArray * _polygons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *polygons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_loadWithJSONObject:(id)arg1 error:(id*)arg2;
- (bool)_loadWithRootJSONObject:(id)arg1 error:(id*)arg2;
- (bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithJSONObject:(id)arg1 error:(id*)arg2;
- (id)polygons;
- (void)setPolygons:(id)arg1;

@end
