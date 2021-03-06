/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    bool  _areFrequentLocationsAvailable;
    NSArray * _homeAddresses;
    GEOLocationShifter * _locationShifter;
    struct NSArray { Class x1; } * _previouslyAddedEntries;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    bool  _running;
    NSObject<OS_dispatch_source> * _updateTimer;
    NSArray * _workAddresses;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)_addCalendarFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (bool)_addFieldsToSuggestionsEntry:(id)arg1 fromMapItem:(id)arg2;
- (void)_addLabelForEntry:(id)arg1;
- (bool)_addParkedCarFieldsToSuggestionsEntry:(id)arg1 vehicleEvent:(id)arg2;
- (bool)_addRecentsFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (bool)_addResumeRouteFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (int)_convertTransportType:(long long)arg1;
- (unsigned long long)_convertType:(long long)arg1 source:(id)arg2 typeSource:(long long)arg3;
- (id)_extractTitleAndSubtitleFromMapItem:(id)arg1 forType:(unsigned long long)arg2;
- (void)_requestTouristInfoFromRoutineIfNeededForLocation:(id)arg1;
- (void)_setFrequentLocationsAreAvailable:(bool)arg1;
- (void)_startMonitoringVehicleEvents;
- (id)_suggestionEntryForPredictedLOI:(id)arg1;
- (void)_updateSuggestionEntries;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end
