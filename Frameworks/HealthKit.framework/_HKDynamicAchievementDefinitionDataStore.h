/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDynamicAchievementDefinitionDataStore : NSObject <_HKDynamicAchievementDefinitionLoading> {
    HKExtendedHealthStore * _store;
}

- (void).cxx_destruct;
- (void)fetchDynamicDefinitionsWithCompletion:(id /* block */)arg1;
- (id)init;

@end
