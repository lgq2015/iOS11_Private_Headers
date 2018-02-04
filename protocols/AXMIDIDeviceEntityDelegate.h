/* made by EzioChiu.
 */

@protocol AXMIDIDeviceEntityDelegate <NSObject>

@required

- (void)entity:(AXMIDIDeviceEntity *)arg1 didAddDestination:(AXMIDIDeviceEntityEndpoint *)arg2;
- (void)entity:(AXMIDIDeviceEntity *)arg1 didAddSource:(AXMIDIDeviceEntityEndpoint *)arg2;
- (void)entity:(AXMIDIDeviceEntity *)arg1 didRemoveDestination:(AXMIDIDeviceEntityEndpoint *)arg2;
- (void)entity:(AXMIDIDeviceEntity *)arg1 didRemoveSource:(AXMIDIDeviceEntityEndpoint *)arg2;

@end
