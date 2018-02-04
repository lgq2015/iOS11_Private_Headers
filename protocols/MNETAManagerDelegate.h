/* made by EzioChiu.
 */

@protocol MNETAManagerDelegate <NSObject>

@required

- (void)etaManager:(MNETAManager *)arg1 failedToReceiveETAResponse:(NSError *)arg2;
- (void)etaManager:(MNETAManager *)arg1 receivedETAResponse:(GEOETATrafficUpdateResponse *)arg2;
- (void)etaManager:(MNETAManager *)arg1 receivedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)etaManager:(MNETAManager *)arg1 updatedIncidentsForRoute:(GEOComposedRoute *)arg2 etaRoute:(GEOETARoute *)arg3 incidentsOffset:(unsigned int)arg4;
- (void)etaManager:(MNETAManager *)arg1 updatedTrafficForETARoute:(GEOETARoute *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)etaManager:(MNETAManager *)arg1 willSendETARequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)etaManagerUpdatedETATime:(MNETAManager *)arg1;

@optional

- (void)etaManager:(MNETAManager *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;

@end
