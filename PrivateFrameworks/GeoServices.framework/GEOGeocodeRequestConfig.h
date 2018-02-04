/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequestConfig : GEOServiceRequestDefaultConfig

+ (id)standardConfig;

- (int)dataRequestKindForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
