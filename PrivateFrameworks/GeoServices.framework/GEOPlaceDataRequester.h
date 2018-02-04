/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataRequester : GEOServiceRequester

+ (id)sharedInstance;

- (id)_validateResponse:(id)arg1 userInfo:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5;

@end
