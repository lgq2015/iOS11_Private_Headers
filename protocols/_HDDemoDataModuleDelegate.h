/* made by EzioChiu.
 */

@protocol _HDDemoDataModuleDelegate <NSObject>

@required

- (long long)activityType;
- (void)demoDataModule:(_HDDemoDataModule *)arg1 didProduceDataObject:(HKObject *)arg2;
- (HKQuantity *)speed;

@end
