/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {
    bool  _firstSchedulingAfterStartupDone;
    bool  _hasActiveWork;
    bool  _hasWork;
    NSObject<OS_dispatch_group> * _hasWorkGroup;
    bool  _isCancelled;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    BRCDeadlineSource * _schedulerSource;
    BRCAccountSession * _session;
    PQLNameInjection * _tableName;
}

@property (readonly) bool closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasActiveWork;
@property (nonatomic) bool hasWork;
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) PQLNameInjection *tableName;

- (void).cxx_destruct;
- (void)_close;
- (id)aggregateDescriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (bool)canRetryJobWithID:(id)arg1;
- (bool)canScheduleMoreJobs;
- (void)cancel;
- (void)close;
- (bool)closed;
- (void)computeStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(bool)arg4;
- (void)deleteExpiredJobs;
- (void)deleteJobsMatching:(id)arg1;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (id)descriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(id /* block */)arg4 context:(id)arg5;
- (bool)hasActiveWork;
- (bool)hasWork;
- (id)hasWorkGroup;
- (bool)haveIdleJobsMatching:(id)arg1;
- (id)initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
- (struct brc_job_update { int x1; long long x2; })insertOrUpdateJobID:(id)arg1 throttle:(id)arg2 withState:(int)arg3 insertedSQLColumn:(id)arg4 insertedSQLValues:(id)arg5 updatedSQLValues:(id)arg6;
- (bool)isCancelled;
- (id)name;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)postponeJobID:(id)arg1 withThrottle:(id)arg2;
- (void)rescheduleSuspendedJobsMatching:(id)arg1 inState:(int)arg2;
- (void)resetBackoffForJobWithID:(id)arg1;
- (void)resume;
- (void)schedule;
- (void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(struct NSObject { Class x1; }*)arg2 columns:(id)arg3 actionHandler:(id /* block */)arg4;
- (void)setHasActiveWork:(bool)arg1;
- (void)setHasWork:(bool)arg1;
- (void)setHasWorkGroup:(id)arg1;
- (bool)setState:(int)arg1 forJobID:(id)arg2;
- (bool)setState:(int)arg1 forJobsMatching:(id)arg2;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)suspend;
- (id)tableName;
- (long long)updateStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 throttle:(id)arg2 now:(long long)arg3;

@end
