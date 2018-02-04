/* made by EzioChiu.
 */

@protocol EPTransaction <NSObject>

@required

+ (bool)canRollback;

- (void)beginRollbackWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id <EPServiceRegistry>)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id <EPServiceRegistry>)arg2;
- (<EPTransactionDelegate> *)delegate;
- (void)setDelegate:(id <EPTransactionDelegate>)arg1;

@end