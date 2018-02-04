/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
    <CoreDAVAccountInfoProvider> * _accountInfoProvider;
    id /* block */  _completionBlock;
    id  _context;
    <CoreDAVTaskGroupDelegate> * _delegate;
    NSError * _error;
    bool  _isCancelling;
    bool  _isFinished;
    bool  _isTearingDown;
    NSMutableSet * _outstandingTasks;
    id /* block */  _progressBlock;
    <CoreDAVTaskManager> * _taskManager;
    double  _timeoutInterval;
}

@property (nonatomic) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *outstandingTasks;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (readonly) Class superclass;
@property (nonatomic) <CoreDAVTaskManager> *taskManager;
@property (nonatomic) double timeoutInterval;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void).cxx_destruct;
- (void)_tearDownAllTasks;
- (id)accountInfoProvider;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (id /* block */)completionBlock;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(id /* block */)arg2;
- (void)finishEarlyWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)outstandingTasks;
- (id /* block */)progressBlock;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)startTaskGroup;
- (void)submitWithTaskManager:(id)arg1;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)taskManager;
- (double)timeoutInterval;

// Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV

- (void)bdv_applyOverrideTimeoutIntervalIfNeeded;

@end
