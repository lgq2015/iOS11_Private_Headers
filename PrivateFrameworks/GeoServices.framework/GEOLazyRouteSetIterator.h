/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLazyRouteSetIterator : NSObject {
    unsigned long long  _contingencyRouteIndex;
    GEORouteSet * _routeSet;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRouteSet:(id)arg1;
- (id)nextLazyRoute;
- (void)setContingencyRouteIndex:(unsigned long long)arg1;

@end
