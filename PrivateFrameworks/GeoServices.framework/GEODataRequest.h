/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataRequest : NSObject <GEOStateCapturing> {
    BOOL  _HTTPMethod;
    bool  _HTTPShouldHandleCookies;
    NSURL * _URL;
    NSDictionary * _additionalHTTPHeaders;
    bool  _allowTFOUse;
    bool  _allowTLSSessionTicketUse;
    BOOL  _allowedRequestMode;
    bool  _allowsCellularAccess;
    GEOApplicationAuditToken * _auditToken;
    NSData * _bodyData;
    NSData * _cachedData;
    int  _kind;
    double  _timeoutInterval;
    NSObject<OS_xpc_object> * _xpcRequest;
}

@property (nonatomic, readonly) BOOL HTTPMethod;
@property (nonatomic, readonly) bool HTTPShouldHandleCookies;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *additionalHTTPHeaders;
@property (nonatomic, readonly) bool allowTFOUse;
@property (nonatomic, readonly) bool allowTLSSessionTicketUse;
@property (nonatomic, readonly) BOOL allowedRequestMode;
@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly, copy) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSData *bodyData;
@property (nonatomic, copy) NSData *cachedData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int kind;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcRequest;

- (void).cxx_destruct;
- (BOOL)HTTPMethod;
- (bool)HTTPShouldHandleCookies;
- (id)URL;
- (id)additionalHTTPHeaders;
- (bool)allowTFOUse;
- (bool)allowTLSSessionTicketUse;
- (BOOL)allowedRequestMode;
- (bool)allowsCellularAccess;
- (id)auditToken;
- (id)bodyData;
- (id)cachedData;
- (id)captureStateWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)description;
- (id)init;
- (id)initHttpOnlyRequestWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 allowCellularUse:(bool)arg5 compressRequest:(bool)arg6;
- (id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 HTTPMethod:(BOOL)arg7 bodyData:(id)arg8 HTTPShouldHandleCookies:(bool)arg9 allowsCellularAccess:(bool)arg10 allowTLSSessionTicketUse:(bool)arg11 allowTFOUse:(bool)arg12 allowedRequestMode:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16;
- (id)initWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 auditToken:(id)arg5 traits:(id)arg6;
- (int)kind;
- (id)newURLRequest;
- (void)setCachedData:(id)arg1;
- (double)timeoutInterval;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)xpcRequest;

@end
