/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {
    int  _configChangedToken;
    <_GEONetworkDefaultsServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolation;
    NSMutableArray * _updateCompletionHandlers;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEONetworkDefaultsServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_networkDefaultsDidChange;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;

@end
