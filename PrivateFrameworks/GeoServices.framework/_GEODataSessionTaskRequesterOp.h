/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate> {
    NSString * _appIdentifier;
    GEOApplicationAuditToken * _auditToken;
    bool  _canceled;
    id /* block */  _completionHandler;
    <GEOServiceRequestConfiguring> * _config;
    int  _dataRequestKind;
    NSString * _debugRequestName;
    PBRequest * _request;
    GEOProtobufSessionTask * _task;
    GEOMapServiceTraits * _traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_fullURL;
- (id)_userInfoForTask:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(int)arg5 traits:(id)arg6;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
