/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket <GEOMapServiceGeoIpLookupTicket> {
    GEOPDPlaceRequest * _placeRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithIpAddress:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3 handlerQueue:(id)arg4;

@end
