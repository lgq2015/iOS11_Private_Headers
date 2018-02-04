/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling> {
    NEPacketTunnelFlow * _packetFlow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NEPacketTunnelFlow *packetFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelTunnelWithError:(id)arg1;
- (id)createTCPConnectionThroughTunnelToEndpoint:(id)arg1 enableTLS:(bool)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)createUDPSessionThroughTunnelToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (id)getTunnelInterface;
- (id)init;
- (id)initWithVirtualInterfaceType:(long long)arg1;
- (id)packetFlow;
- (void)requestSocket:(bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setPacketFlow:(id)arg1;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
