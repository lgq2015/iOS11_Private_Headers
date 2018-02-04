/* made by EzioChiu.
 */

@protocol TUMomentsControllerDataSource <NSObject>

@required

- (<TUMomentsControllerDataSourceDelegate> *)delegate;
- (void)endRequestWithTransactionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidate;
- (void)registerStreamToken:(void *)arg1 remoteIDSDestination:(void *)arg2 remoteMomentsAvailable:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUMomentsCapabilities *, NSError *, void*
- (void)setDelegate:(id <TUMomentsControllerDataSourceDelegate>)arg1;
- (void)startRequestWithMediaType:(void *)arg1 forStreamToken:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)unregisterStreamToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
