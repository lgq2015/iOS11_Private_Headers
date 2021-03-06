/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocation;
    GEOComposedWaypoint * _currentLocationWaypoint;
    struct NSMutableDictionary { Class x1; } * _distanceTitleFormatters;
    struct NSMutableDictionary { Class x1; } * _etaTitleFormatters;
    GEOLocationShifter * _locationShifter;
    MapsSuggestionsManager * _manager;
    int  _mapType;
    NSObject<OS_dispatch_queue> * _queue;
    double  _refreshDeferTime;
    double  _refreshInterval;
    NSObject<OS_dispatch_source> * _refreshTimer;
    bool  _shouldBeRunning;
    MapsSuggestionsMutableWeakEntries * _trackedEntries;
    int  _transportType;
    NSMutableDictionary * _waypoints;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (retain) CLLocation *currentLocation;
@property (retain) GEOComposedWaypoint *currentLocationWaypoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (readonly) Class superclass;
@property (nonatomic, retain) MapsSuggestionsMutableWeakEntries *trackedEntries;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)_isLocationShiftRequiredForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_decorateEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3;
- (void)_determineTransportTypeFromOrigin:(id)arg1 withMapsSuggestionsEntry:(id)arg2 andCompletion:(id /* block */)arg3;
- (id)_distanceTitleFormatterForType:(unsigned long long)arg1;
- (id)_etaTitleFormatterForType:(unsigned long long)arg1;
- (bool)_hasTitleFormatterForType:(unsigned long long)arg1;
- (bool)_keepExistingWaypointsForTrackedEntries:(struct NSArray { Class x1; }*)arg1;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 withShiftRequestBlock:(id /* block */)arg3;
- (void)_refresh;
- (bool)_requestAllRequiredWaypoints;
- (void)_requestDistances;
- (void)_requestETAs;
- (bool)_requestWaypointForCurrentLocation:(id)arg1 dispatchGroup:(id)arg2;
- (bool)_requestWaypointForMapsSuggestionsEntry:(id)arg1 dispatchGroup:(id)arg2;
- (void)_scheduleRefresh;
- (void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1;
- (void)_shiftLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)_transportTypesForDestinationEntries:(id)arg1;
- (void)_unschedule;
- (id)automobileOptions;
- (id)currentLocation;
- (id)currentLocationWaypoint;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)location;
- (int)mapType;
- (void)scheduleRefresh;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setCurrentLocationWaypoint:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(unsigned long long)arg2;
- (void)setTrackedEntries:(id)arg1;
- (void)trackSuggestionEntries:(struct NSArray { Class x1; }*)arg1 transportType:(int)arg2;
- (id)trackedEntries;
- (struct NSString { Class x1; }*)uniqueName;
- (void)unschedule;

@end
