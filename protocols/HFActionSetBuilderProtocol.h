/* made by EzioChiu.
 */

@protocol HFActionSetBuilderProtocol <NSObject>

@required

- (NSArray *)actions;
- (void)addAction:(HFActionBuilder *)arg1;
- (bool)isAffectedByEndEvents;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)removeAllActions;
- (bool)requiresDeviceUnlock;
- (void)updateAction:(HFActionBuilder *)arg1;

@end
