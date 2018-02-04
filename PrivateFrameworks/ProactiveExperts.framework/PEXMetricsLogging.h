/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXMetricsLogging : NSObject {
    PETGoalConversionEventTracker * _autocompleteGoal;
    PETDistributionEventTracker * _contactsMatches;
    PETGoalConversionEventTracker * _discoverySuggesterGoal;
    PETDistributionEventTracker * _eventsMatches;
    PETDistributionEventTracker * _foundInAppsMatches;
    PETScalarEventTracker * _frameworkErrors;
    PETDistributionEventTracker * _initializationLatency;
    PETDistributionEventTracker * _namesLatency;
    PETGoalConversionEventTracker * _peopleSuggesterGoal;
    NSObject<OS_dispatch_queue> * _queue;
    PETDistributionEventTracker * _quickTypeLatency;
    PETScalarEventTracker * _servantTimeouts;
}

@property (nonatomic, retain) PETGoalConversionEventTracker *autocompleteGoal;
@property (nonatomic, retain) PETDistributionEventTracker *contactsMatches;
@property (nonatomic, retain) PETGoalConversionEventTracker *discoverySuggesterGoal;
@property (nonatomic, retain) PETDistributionEventTracker *eventsMatches;
@property (nonatomic, retain) PETDistributionEventTracker *foundInAppsMatches;
@property (nonatomic, retain) PETScalarEventTracker *frameworkErrors;
@property (nonatomic, retain) PETDistributionEventTracker *initializationLatency;
@property (nonatomic, retain) PETDistributionEventTracker *namesLatency;
@property (nonatomic, retain) PETGoalConversionEventTracker *peopleSuggesterGoal;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PETDistributionEventTracker *quickTypeLatency;
@property (nonatomic, retain) PETScalarEventTracker *servantTimeouts;

+ (void)autocompleteGoalConverted:(bool)arg1 queryType:(id)arg2;
+ (void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2;
+ (id)counter:(id)arg1 withProperties:(id)arg2;
+ (void)discoverySuggesterGoalConverted:(bool)arg1 queryType:(id)arg2;
+ (void)eventsMatches:(unsigned long long)arg1;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;
+ (void)initializationLatency:(unsigned long long)arg1 servant:(id)arg2;
+ (id)instance;
+ (void)namesLatency:(unsigned long long)arg1 servant:(id)arg2;
+ (void)peopleSuggesterGoalConverted:(bool)arg1 queryType:(id)arg2;
+ (void)quickTypeMetricsWithLatency:(unsigned long long)arg1 servant:(id)arg2 hasResults:(bool)arg3;
+ (void)servantTimeout:(id)arg1;
+ (id)trackerForDistribution:(id)arg1 withProperties:(id)arg2;
+ (id)trackerForGoal:(id)arg1 withProperties:(id)arg2;

- (void).cxx_destruct;
- (id)autocompleteGoal;
- (id)contactsMatches;
- (id)discoverySuggesterGoal;
- (id)eventsMatches;
- (id)foundInAppsMatches;
- (id)frameworkErrors;
- (id)init;
- (id)initializationLatency;
- (id)namesLatency;
- (id)peopleSuggesterGoal;
- (id)queue;
- (id)quickTypeLatency;
- (id)servantTimeouts;
- (void)setAutocompleteGoal:(id)arg1;
- (void)setContactsMatches:(id)arg1;
- (void)setDiscoverySuggesterGoal:(id)arg1;
- (void)setEventsMatches:(id)arg1;
- (void)setFoundInAppsMatches:(id)arg1;
- (void)setFrameworkErrors:(id)arg1;
- (void)setInitializationLatency:(id)arg1;
- (void)setNamesLatency:(id)arg1;
- (void)setPeopleSuggesterGoal:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQuickTypeLatency:(id)arg1;
- (void)setServantTimeouts:(id)arg1;

@end
