/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETARequester : NSObject {
    GEODirectionsRequest * _directionsETARequest;
    NSString * _loggingFacility;
    GEOQuickETARequest * _request;
    int  _requestMode;
    GEOETARequest * _simpleETARequest;
}

@property (nonatomic, copy) NSString *loggingFacility;

+ (bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(id /* block */)arg5;
+ (bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 withShortTrafficString:(bool)arg5 handler:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_calculateRoutingETAWithHandler:(id /* block */)arg1;
- (void)_calculateRoutingETAWithSummary:(bool)arg1 handler:(id /* block */)arg2;
- (void)_calculateSimpleETAFromAPI:(bool)arg1 WithHandler:(id /* block */)arg2;
- (void)_calculateSimpleETAFromAPI:(bool)arg1 includeSummary:(bool)arg2 WithHandler:(id /* block */)arg3;
- (void)calculateETAFromAPI:(bool)arg1 WithResponseHandler:(id /* block */)arg2;
- (void)calculateETAFromAPI:(bool)arg1 includeSummary:(bool)arg2 WithResponseHandler:(id /* block */)arg3;
- (void)calculateETAWithResponseHandler:(id /* block */)arg1;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 requestMode:(int)arg2;
- (id)loggingFacility;
- (void)setLoggingFacility:(id)arg1;

@end
