/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)deferQueryRequestToNetworkWithCompletion:(id /* block */)arg1;
- (void)deferReportRequestToNetworkWithCompletion:(id /* block */)arg1;
- (id)extension;
- (oneway void)finish;
- (oneway void)handleQueryRequest:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)handleReportRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
