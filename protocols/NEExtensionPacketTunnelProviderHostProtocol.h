/* made by EzioChiu.
 */

@protocol NEExtensionPacketTunnelProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>

@required

- (void)requestSocket:(void *)arg1 interface:(void *)arg2 local:(void *)arg3 remote:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: bool, NSString *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*

@end
