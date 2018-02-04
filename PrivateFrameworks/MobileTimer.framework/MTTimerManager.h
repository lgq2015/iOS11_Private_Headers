/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerManager : NSObject {
    MTTimerCache * _cache;
    struct MTXPCConnectionProvider { Class x1; } * _connectionProvider;
    MTTimerManagerExportedObject * _exportedObject;
    MTMetrics * _metrics;
    NSNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) MTTimerCache *cache;
@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (nonatomic, retain) MTTimerManagerExportedObject *exportedObject;
@property (nonatomic, retain) MTMetrics *metrics;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;

+ (void)warmUp;

- (void).cxx_destruct;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (bool)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (id)addTimer:(id)arg1;
- (id)cache;
- (void)checkIn;
- (struct MTXPCConnectionProvider { Class x1; }*)connectionProvider;
- (id)currentTimer;
- (void)dealloc;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)exportedObject;
- (id)getCurrentTimerSync;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)metrics;
- (id)nextTimer;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)notificationCenter;
- (id)pauseCurrentTimer;
- (bool)pauseCurrentTimerSync;
- (void)reconnect;
- (id)removeTimer:(id)arg1;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)resumeCurrentTimer;
- (bool)resumeCurrentTimerSync;
- (void)setCache:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (bool)startCurrentTimerWithDurationSync:(double)arg1;
- (id)stopCurrentTimer;
- (bool)stopCurrentTimerSync;
- (id)timers;
- (id)timersSync;
- (id)updateTimer:(id)arg1;

@end
