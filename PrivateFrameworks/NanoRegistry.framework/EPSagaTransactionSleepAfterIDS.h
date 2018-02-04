/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface EPSagaTransactionSleepAfterIDS : NSObject <EPTransaction> {
    <EPTransactionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EPTransactionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canRollback;

- (void).cxx_destruct;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
