/* made by EzioChiu.
 */

@protocol HDXPCListenerDelegate <NSObject>

@required

- (<_HKXPCExportable> *)exportObjectForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 error:(id*)arg3;

@end
