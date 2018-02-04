/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerDataSource, TUMomentsControllerXPCClient> {
    <TUMomentsControllerDataSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUMomentsControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)momentsControllerClientXPCInterface;
+ (id)momentsControllerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_registerConnection;
- (void)dealloc;
- (id)delegate;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1;
- (oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2;
- (void)endRequestWithTransactionID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)registerStreamToken:(long long)arg1 remoteIDSDestination:(id)arg2 remoteMomentsAvailable:(bool)arg3 completion:(id /* block */)arg4;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 completion:(id /* block */)arg3;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (void)unregisterStreamToken:(long long)arg1 completion:(id /* block */)arg2;
- (oneway void)willCaptureRemoteRequest;
- (id)xpcConnection;

@end