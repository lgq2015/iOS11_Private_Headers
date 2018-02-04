/* made by EzioChiu.
 */

@protocol WBSCyclerTestSuite <NSObject>

@required

- (id)init;
- (void)runWithTarget:(void *)arg1 deviceCoordinator:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: <WBSCyclerTestTarget> *, WBSCyclerDeviceCoordinator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

+ (bool)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2;

- (bool)canHandleRequest:(NSString *)arg1;
- (void)didReceiveData:(void *)arg1 fromDeviceCoordinator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSData *, WBSCyclerDeviceCoordinator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handleRequest:(void *)arg1 withTarget:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, <WBSCyclerTestTarget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isFinished;
- (void)setUp;
- (void)tearDown;

@end
