/* made by EzioChiu.
 */

@protocol _HKXPCExportable <NSObject>

@required

- (void)connectionInvalidated;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)remoteInterface;

@optional

- (void)connectionInterrupted;

@end
