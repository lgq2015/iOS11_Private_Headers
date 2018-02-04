/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SPQueryResultsQueue : NSObject {
    bool  _canceled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    NSMutableDictionary * _jobs;
    bool  _live;
    long long  _pausedCount;
    bool  _shared;
    struct __SIResultQueue { } * _siResultsQueue;
    bool  _tracked;
}

@property (nonatomic) bool canceled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) bool hasPausedResults;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableDictionary *jobs;
@property (nonatomic) bool live;
@property (nonatomic) long long pausedCount;
@property (nonatomic) bool shared;
@property (nonatomic) struct __SIResultQueue { }*siResultsQueue;
@property (nonatomic) bool tracked;

+ (id)findResultsQueueWithIdentifier:(id)arg1;
+ (id)sharedInstanceDispatchQueue:(id)arg1;
+ (void)startTrackingResultsQueue:(id)arg1;
+ (void)stopTrackingResultsQueueWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_processResults;
- (void)_scheduleWakeupForced:(bool)arg1;
- (void)_startTracking;
- (void)_stopTracking;
- (void)addJob:(id)arg1;
- (void)cancel;
- (void)cancelJob:(id)arg1;
- (bool)canceled;
- (void)dealloc;
- (id)dispatchQueue;
- (bool)hasPausedResults;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2;
- (id)jobs;
- (bool)live;
- (void)pauseResults;
- (long long)pausedCount;
- (void)resumeResults;
- (void)setCanceled:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setJobs:(id)arg1;
- (void)setLive:(bool)arg1;
- (void)setPausedCount:(long long)arg1;
- (void)setShared:(bool)arg1;
- (void)setSiResultsQueue:(struct __SIResultQueue { }*)arg1;
- (void)setTracked:(bool)arg1;
- (bool)shared;
- (struct __SIResultQueue { }*)siResultsQueue;
- (bool)tracked;

@end
