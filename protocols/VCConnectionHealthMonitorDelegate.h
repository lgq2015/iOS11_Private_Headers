/* made by EzioChiu.
 */

@protocol VCConnectionHealthMonitorDelegate <NSObject>

@required

- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(bool)arg2;

@end
