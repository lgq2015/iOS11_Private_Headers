/* made by EzioChiu.
 */

@protocol _GEONetworkDefaultsServerProxy <NSObject>

@required

- (<_GEONetworkDefaultsServerProxyDelegate> *)delegate;
- (void)setDelegate:(id <_GEONetworkDefaultsServerProxyDelegate>)arg1;
- (void)updateNetworkDefaults:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
