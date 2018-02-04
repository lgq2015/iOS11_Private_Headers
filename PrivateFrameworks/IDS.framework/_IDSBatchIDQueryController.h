/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {
    CUTWeakReference * _delegate;
    NSArray * _destinations;
    NSMutableArray * _destinationsToQuery;
    bool  _isDead;
    NSString * _listenerID;
    NSTimer * _nextQueryTimer;
    int  _numberOfQueriesDone;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    NSDate * _timeOfDeath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)setDestinations:(id)arg1;

@end
