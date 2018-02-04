/* made by EzioChiu.
 */

@protocol HDPeriodicActivityDelegate <NSObject>

@required

- (void)performPeriodicActivity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: HDPeriodicActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, double, NSError *, void*
- (void)periodicActivity:(HDPeriodicActivity *)arg1 configureXPCActivityCriteria:(NSObject<OS_xpc_object> *)arg2;

@optional

- (bool)periodicActivityRequiresProtectedData:(HDPeriodicActivity *)arg1;

@end
