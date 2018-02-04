/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapDataPluginContext : NSExtensionContext <GEOMapDataPlugin> {
    <GEOMapDataPluginContextDelegate> * _pluginContextDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <GEOMapDataPluginContextDelegate> *pluginContextDelegate;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)pluginContextDelegate;
- (void)receiveEndpointRequest:(id /* block */)arg1;
- (void)remoteIsReadyNotification;
- (void)sendEndpointRequest:(id /* block */)arg1;
- (void)sendIsReadyNotification;
- (void)setPluginContextDelegate:(id)arg1;

@end
