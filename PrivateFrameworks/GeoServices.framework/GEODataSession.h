/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSession : NSObject <GEODataSession> {
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    <GEODataSession> * _urlSession;
    <GEODataSession> * _xpcSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEODataURLSession *urlSession;
@property (nonatomic, readonly) GEODataXPCSession *xpcSession;

+ (id)sharedDataSession;

- (void).cxx_destruct;
- (bool)_rules_isOnlineAllowedForRequest:(id)arg1;
- (id)init;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)manifestManager;
- (id)preferedRulesForRequest:(id)arg1;
- (id)sessionIsolation;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)urlSession;
- (id)xpcSession;

@end
