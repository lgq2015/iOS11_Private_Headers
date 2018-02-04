/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSearchFeedbackListener : NSObject <SFFeedbackListener> {
    PETGoalConversionEventTracker * _apAppPredicitonsShownTracker;
    unsigned char  _atxConsumerSubType;
    NSArray * _currentZKWItems;
    _DECConsumer * _decConsumer;
    unsigned char  _decConsumerSubType;
    unsigned long long  _lastDidStartSearchTimeStamp;
    int  _lastEngagedQueryPredictionPosition;
    NSSet * _lastEngagedQueryPredictionSourceCodes;
    bool  _lastPredictedQuerySetWasEngagedOn;
    unsigned long long  _lastResultsDidBecomeVisibleTimeStamp;
    bool  _predictedQuerySessionActive;
    bool  _predictedQuerySessionPredictedQueryWasEdited;
    NSString * _previousQueryString;
    NSString * _qpAbGroupIdentifier;
    PETDistributionEventTracker * _qpEventDelayTracker;
    PETDistributionEventTracker * _qpEventEngagementByQueryCountTracker;
    PETGoalConversionEventTracker * _qpEventGoalConvTracker;
    PETGoalConversionEventTracker * _qpEventQueriesShownTracker;
    PETDistributionEventTracker * _qpEventQueryShownCountTracker;
    PETScalarEventTracker * _qpEventQueryShownSourceTracker;
    PETDistributionEventTracker * _qpEventSpotlightResultsPerPredictedQueryTracker;
    PETScalarEventTracker * _qpMMHeroAppTracker;
    PETScalarEventTracker * _qpPredictionQueryDetailTracker;
    PETDistributionEventTracker * _qpQueryLengthTracker;
    PETScalarEventTracker * _qpResultDetailTracker;
    PETGoalConversionEventTracker * _qpResultGoalConvTracker;
    PETScalarEventTracker * _qpSpotlightEngagementTracker;
    PETScalarEventTracker * _qpSpotlightQuerySourceTracker;
    NSString * _query;
    NSMutableArray * _testingAtxFeedback;
    NSMutableArray * _testingDecFeedback;
    bool  _testingMode;
    bool  _waitingForPredictedAppFeedback;
    bool  _waitingForPredictedQueryFeedback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)flatSourceList:(id)arg1;

- (void).cxx_destruct;
- (id)_allEventTrackers;
- (void)_endQueryPredictionSessionAndLogResults:(id)arg1;
- (void)_logQueryPredictionEventStats:(id)arg1 searchResults:(id)arg2;
- (void)_logZkwDisplayTime:(unsigned long long)arg1;
- (void)_sendAppFeedback:(id)arg1 searchResults:(id)arg2;
- (void)_sendFeedbackAndDoLogging:(id)arg1 searchResults:(id)arg2;
- (void)_setAtxConsumerSubType:(unsigned char)arg1;
- (void)_setCurrentZKWItems:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)_setDecConsumerSubType:(unsigned char)arg1;
- (void)_setLastPredictedQuerySetWasEngagedOn:(bool)arg1;
- (void)_setPredictedQuerySessionActive:(bool)arg1;
- (void)_setPredictedQueryWasEdited:(bool)arg1;
- (void)_setQpAbGroupIdentifier:(id)arg1;
- (void)_setQuery:(id)arg1;
- (void)_startQueryPredictionSession;
- (void)dealloc;
- (void)didEngageResult:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)disableTestingMode;
- (void)enableTestingMode;
- (id)getKeyValueDict;
- (id)getTestingAtxFeedback;
- (id)getTestingDecFeedback;
- (id)init;
- (id)initForUnitTesting;
- (id)initWithDecConsumer:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;

@end
