/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastHandler : NSObject <NSExtensionRequestHandling, NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    NSExtensionContext * _extensionContext;
    NSXPCListener * _listener;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSDictionary * _serviceInfo;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) NSDictionary *serviceInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeRequestWithReturnItems:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)connection;
- (id)extensionContext;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (id)serviceInfo;
- (void)setConnection:(id)arg1;
- (void)setExtensionContext:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setServiceInfo:(id)arg1;
- (void)updateServiceInfo:(id)arg1;

@end
