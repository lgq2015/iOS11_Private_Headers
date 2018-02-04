/* made by EzioChiu.
 */

@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>

@required

- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 receivedNewRoute:(GEOComposedRoute *)arg2 request:(GEODirectionsRequest *)arg3 response:(GEODirectionsResponse *)arg4;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 willRequestNewRoute:(GEODirectionsRequest *)arg2;

@optional

- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 didChangeTravelState:(bool)arg2;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 faultedWithError:(NSError *)arg2;
- (void)routeHypothesizerUpdaterDidArrive:(GEORouteHypothesizerUpdater *)arg1;

@end