/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {
    NSNumber * _requestPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (int)dataRequestKindForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithRequestPriority:(id)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
