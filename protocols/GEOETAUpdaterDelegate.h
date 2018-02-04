/* made by EzioChiu.
 */

@protocol GEOETAUpdaterDelegate <NSObject>

@required

- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedError:(NSError *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 willSendETATrafficUpdateRequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(GEOETAUpdater *)arg1 newRoute:(GEOComposedRoute *)arg2 incidentsOnRoute:(NSArray *)arg3 incidentsOffRoute:(NSArray *)arg4;
- (NSArray *)etaUpdaterRoutesForETATrafficUpdateRequest:(GEOETAUpdater *)arg1;
- (void)etaUpdaterUpdatedETA:(GEOETAUpdater *)arg1;

@optional

- (bool)etaUpdater:(GEOETAUpdater *)arg1 updateRouteWithETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2 step:(GEOStep *)arg3 percentOfCurrentStepRemaining:(double)arg4;
- (void)etaUpdaterRequestCompleted:(GEOETAUpdater *)arg1;

@end
