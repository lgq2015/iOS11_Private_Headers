/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy> {
    <_GEONetworkDefaultsServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolation;
    NSURLSession * _session;
    NSMutableArray * _updateCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEONetworkDefaultsServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;
- (void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4;
- (id)_urlRequestForNetworkDefaults;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;

@end
