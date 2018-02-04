/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol> {
    id /* block */  _deferQueryRequestToNetwork;
    id /* block */  _deferReportRequestToNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferQueryRequestToNetwork;
@property (nonatomic, copy) id /* block */ deferReportRequestToNetwork;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id /* block */)deferQueryRequestToNetwork;
- (oneway void)deferQueryRequestToNetworkWithReply:(id /* block */)arg1;
- (id /* block */)deferReportRequestToNetwork;
- (oneway void)deferReportRequestToNetworkWithReply:(id /* block */)arg1;
- (void)finish;
- (void)handleQueryRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleReportRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setDeferQueryRequestToNetwork:(id /* block */)arg1;
- (void)setDeferReportRequestToNetwork:(id /* block */)arg1;

@end
