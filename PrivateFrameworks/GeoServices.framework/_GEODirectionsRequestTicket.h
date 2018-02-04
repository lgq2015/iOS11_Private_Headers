/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {
    bool  _active;
    bool  _canceled;
    bool  _isDoom;
    bool  _isReroute;
    GEOComposedRoute * _originalRoute;
    GEODirectionsRequest * _request;
    NSNumber * _requestPriority;
    NSDictionary * _userInfo;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDoom;
@property (nonatomic) bool isReroute;
@property (nonatomic, retain) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, copy) NSNumber *requestPriority;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *waypoints;

- (void).cxx_destruct;
- (bool)active;
- (void)cancel;
- (bool)canceled;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (bool)isDoom;
- (bool)isReroute;
- (id)originalRoute;
- (id)request;
- (id)requestPriority;
- (id)responseUserInfo;
- (void)setIsDoom:(bool)arg1;
- (void)setIsReroute:(bool)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setRequestPriority:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
- (id)waypoints;

@end
