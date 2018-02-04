/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {
    GEOBatchRevGeocodeRequest * _batchReverseGeocodeRequest;
    bool  _shiftLocationsIfNeeded;
}

- (void).cxx_destruct;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(id /* block */)arg3 networkActivity:(id /* block */)arg4;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
