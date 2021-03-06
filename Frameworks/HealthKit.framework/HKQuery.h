/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuery : NSObject <HKQueryClientInterface> {
    long long  _activationState;
    NSUUID * _activationUUID;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _deactivating;
    <HKQueryDelegate> * _delegate;
    _HKFilter * _filter;
    bool  _hasBeenExecuted;
    HKObjectType * _objectType;
    NSPredicate * _predicate;
    NSObject<OS_dispatch_queue> * _queue;
    <HKQueryServerInterface> * _serverProxy;
    bool  _shouldSuppressDataCollection;
    HKHealthStore * _strongHealthStore;
}

@property (nonatomic, readonly) long long activationState;
@property (nonatomic, readonly) NSUUID *activationUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) bool deactivating;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HKQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_filter, nonatomic, readonly) _HKFilter *filter;
@property (readonly) unsigned long long hash;
@property (retain) HKObjectType *objectType;
@property (retain) NSPredicate *predicate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) <HKQueryServerInterface> *serverProxy;
@property (nonatomic) bool shouldSuppressDataCollection;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(id /* block */)arg2;
+ (id)_predicateForObjectsFromAppleWatches;
+ (id)clientInterface;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForSamplesAssociatedWithSample:(id)arg1;
+ (id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(bool)arg3 options:(unsigned long long)arg4;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)serverInterface;
+ (id)serverInterfaceProtocol;
+ (bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;

- (void).cxx_destruct;
- (id)_filter;
- (id)_initWithObjectType:(id)arg1 predicate:(id)arg2;
- (id)_predicateFilterClasses;
- (void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_deactivateWithError:(id)arg1;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
- (long long)activationState;
- (id)activationUUID;
- (id)clientQueue;
- (void)client_deliverError:(id)arg1 forQuery:(id)arg2;
- (void)deactivate;
- (bool)deactivating;
- (id)delegate;
- (id)description;
- (id)objectType;
- (id)predicate;
- (id)queue;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deactivate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_dispatchToClientForUUID:(id)arg1 block:(id /* block */)arg2;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_queryDidFinishActivation:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)reactivateWithHealthStore:(id)arg1;
- (id)sampleType;
- (id)serverProxy;
- (void)setObjectType:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setShouldSuppressDataCollection:(bool)arg1;
- (bool)shouldSuppressDataCollection;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_predicateForWorkoutsWithMetadataIndoor:(bool)arg1;
+ (id)fiui_predicateForWorkoutsWithMetadataSwimmingLocationType:(long long)arg1;

@end
