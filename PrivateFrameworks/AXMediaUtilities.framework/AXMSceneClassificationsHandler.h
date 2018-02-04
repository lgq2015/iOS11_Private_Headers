/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSceneClassificationsHandler : NSObject {
    NSDictionary * _cachedRequestContextDictionary;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSDictionary *cachedRequestContextDictionary;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)cachedRequestContextDictionary;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)configureXPCConnection;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id*)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)requestContextDictionary;
- (id)requestContextDictionaryWithOperationId:(bool)arg1;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setCachedRequestContextDictionary:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupXpcConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
