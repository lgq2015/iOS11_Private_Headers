/* made by EzioChiu.
 */

@protocol HKDataMetadataViewControllerDelegate <NSObject>

@required

- (HKHealthStore *)healthStore;

@optional

- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKDisplayTypeController *)displayTypeController;
- (bool)shareDocumentUsingSample:(HKSample *)arg1;
- (HKUnitPreferenceController *)unitController;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;

@end
