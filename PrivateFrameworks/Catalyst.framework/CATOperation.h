/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATOperation : NSOperation {
    NSUUID * _UUID;
    bool  _canCancel;
    long long  _completedUnitCount;
    NSDate * _createdDate;
    NSDate * _enqueuedDate;
    NSError * _error;
    NSDate * _finishedDate;
    unsigned long long  _phase;
    id  _resultObject;
    NSDate * _startedDate;
    long long  _totalUnitCount;
    NSDictionary * _userInfo;
    NSArray * mCallStackSymbols;
    NSLock * mLock;
    _CATObserverManager * mObserverManager;
    int  mState;
}

@property (retain) NSUUID *UUID;
@property (readonly) bool canCancel;
@property long long completedUnitCount;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSError *error;
@property (retain) NSDate *finishedDate;
@property (readonly) bool isCanceled;
@property unsigned long long phase;
@property (retain) id resultObject;
@property (retain) NSDate *startedDate;
@property long long totalUnitCount;
@property (retain) NSDictionary *userInfo;

+ (bool)automaticallyNotifiesObserversOfCreatedDate;
+ (bool)automaticallyNotifiesObserversOfEnqueuedDate;
+ (bool)automaticallyNotifiesObserversOfFinishedDate;
+ (bool)automaticallyNotifiesObserversOfStartedDate;
+ (bool)automaticallyNotifiesObserversOfUUID;
+ (id)callStackSymbols;
+ (bool)isCancelable;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (void).cxx_destruct;
- (id)UUID;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (bool)canCancel;
- (void)cancel;
- (long long)completedUnitCount;
- (id)createdDate;
- (id)description;
- (void)endOperationSuccessfullyIfNeeded;
- (void)endOperationWithError:(id)arg1;
- (void)endOperationWithResultObject:(id)arg1;
- (id)enqueuedDate;
- (id)error;
- (void)finalizeOperation;
- (id)finishedDate;
- (id)init;
- (bool)isAsynchronous;
- (bool)isCanceled;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)operationDidFinish;
- (void)operationWillEnqueueOntoOperationQueue:(id)arg1;
- (void)operationWillFinish;
- (void)operationWillStart;
- (unsigned long long)phase;
- (void)removeDependency:(id)arg1;
- (id)resultObject;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setEnqueuedDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedDate:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setResultObject:(id)arg1;
- (void)setStartedDate:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)start;
- (id)startedDate;
- (id)stateDescription;
- (long long)totalUnitCount;
- (id)userInfo;
- (void)waitUntilFinished;
- (bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;

@end
