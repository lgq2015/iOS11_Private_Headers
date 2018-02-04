/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSunriseComplicationDataSource : NTKComplicationDataSource <NTKTimelineEntryModelCacheDataSource> {
    CLLocation * _delayedLocation;
    CLLocation * _displayedLocation;
    NTKTimelineEntryModelCache * _entryModelCache;
    NSTimer * _geocodeRequestDelayTimer;
    bool  _isWaitingForGeocodeRequest;
    NSString * _locationName;
    struct NSString { Class x1; } * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CLLocation *delayedLocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLLocation *displayedLocation;
@property (nonatomic, retain) NSTimer *geocodeRequestDelayTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWaitingForGeocodeRequest;
@property (nonatomic, retain) NSString *locationName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *token;

+ (bool)acceptsComplicationFamily:(long long)arg1;
+ (bool)acceptsComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(bool)arg2 constantSun:(long long)arg3;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(bool)arg2 constantSun:(long long)arg3 haveLocation:(bool)arg4;
- (id)_animationGroupForNoLocation;
- (id)_currentEntry:(bool)arg1;
- (id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id*)arg2;
- (void)_geocodeRequestDelayTimerTriggerred;
- (void)_handleLocation:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (bool)_needCurrentEventEntry;
- (bool)_needsToSendGeocodingRequest;
- (void)_startObserving;
- (void)_stopObserving;
- (id)_timelineEntryFromModel:(id)arg1;
- (void)becomeActive;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)delayedLocation;
- (id)displayedLocation;
- (id)geocodeRequestDelayTimer;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (void)getTimelineEndDateWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineStartDateWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;
- (bool)isWaitingForGeocodeRequest;
- (id)loadEntryModelsForDay:(id)arg1;
- (id)locationName;
- (void)setDelayedLocation:(id)arg1;
- (void)setDisplayedLocation:(id)arg1;
- (void)setGeocodeRequestDelayTimer:(id)arg1;
- (void)setIsWaitingForGeocodeRequest:(bool)arg1;
- (void)setLocationName:(id)arg1;
- (void)setToken:(struct NSString { Class x1; }*)arg1;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;
- (struct NSString { Class x1; }*)token;

@end