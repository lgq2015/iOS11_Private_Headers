/* made by EzioChiu.
 */

@protocol SGXPCActivityManagerProtocol

@required

- (NSObject<OS_xpc_object> *)activityForActivityId:(int)arg1;
- (NSObject<OS_xpc_object> *)copyCriteria:(NSObject<OS_xpc_object> *)arg1;
- (long long)getState:(NSObject<OS_xpc_object> *)arg1;
- (void)registerActivitiesWithSystem;
- (void)registerForActivity:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)setCriteria:(NSObject<OS_xpc_object> *)arg1 criteria:(NSObject<OS_xpc_object> *)arg2 forActivity:(int)arg3;
- (bool)setState:(NSObject<OS_xpc_object> *)arg1 state:(long long)arg2;
- (bool)shouldDefer:(NSObject<OS_xpc_object> *)arg1;

@end
