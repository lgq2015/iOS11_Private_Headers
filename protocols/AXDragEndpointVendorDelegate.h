/* made by EzioChiu.
 */

@protocol AXDragEndpointVendorDelegate <NSObject>

@required

- (NSXPCListenerEndpoint *)endpointForRequestingConnection:(NSXPCConnection *)arg1 fromEndpointVendor:(AXDragEndpointVendor *)arg2;

@end
