/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayer : NSObject <MNTimeProvider, MNTracePlayerSchedulerDelegate> {
    MNTracePlayerTimelineStream * _directionsStream;
    double  _duration;
    MNTracePlayerETAUpdater * _etaUpdater;
    MNTracePlayerTimelineStream * _etaUpdatesStream;
    bool  _forceDirectionsResponsesFromTrace;
    bool  _isPaused;
    bool  _isPlaying;
    MNLocation * _lastReportedLocation;
    MNTracePlayerTimelineStream * _locationStream;
    int  _mainTransportType;
    NSHashTable * _observers;
    MNTracePlayerScheduler * _scheduler;
    bool  _shouldPlayETARequests;
    double  _speedMultiplier;
    MNTrace * _trace;
    double  _traceStartTimestamp;
}

@property (nonatomic, readonly) NSDate *currentLocationDate;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) GEOETAUpdater *etaUpdater;
@property (nonatomic) bool forceDirectionsResponsesFromTrace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) int mainTransportType;
@property (nonatomic, readonly) double position;
@property (nonatomic, readonly) NSData *selectedRouteID;
@property (nonatomic, readonly) unsigned long long selectedRouteIndex;
@property (nonatomic) bool shouldPlayETARequests;
@property (nonatomic) double speedMultiplier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNTrace *trace;

- (void).cxx_destruct;
- (void)_createTimelineStreams;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (id)currentLocationDate;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (id)etaUpdater;
- (bool)forceDirectionsResponsesFromTrace;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id*)arg2;
- (id)initWithTrace:(id)arg1;
- (bool)isPaused;
- (bool)isPlaying;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (int)mainTransportType;
- (void)pause;
- (double)position;
- (void)removeObserver:(id)arg1;
- (bool)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (bool)requestDirectionsWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)resume;
- (id)selectedRouteID;
- (unsigned long long)selectedRouteIndex;
- (void)setForceDirectionsResponsesFromTrace:(bool)arg1;
- (void)setShouldPlayETARequests:(bool)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (bool)shouldPlayETARequests;
- (void)skipByTimeInterval:(double)arg1;
- (double)speedMultiplier;
- (void)start;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (void)stop;
- (id)trace;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;

@end
