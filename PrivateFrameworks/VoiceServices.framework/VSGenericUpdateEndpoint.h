/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSGenericUpdateEndpoint : NSObject <NSSecureCoding, NSXPCListenerDelegate> {
    NSXPCListenerEndpoint * _endpoint;
    id /* block */  _handler;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)configuredEndpointWithUpdateHandler:(id /* block */)arg1 withConnection:(id)arg2;
+ (id /* block */)remoteUpdateHanderForEndpoint:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id /* block */)handler;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)setEndpoint:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;

@end
