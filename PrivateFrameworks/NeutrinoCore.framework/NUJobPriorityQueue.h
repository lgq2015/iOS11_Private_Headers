/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJobPriorityQueue : NSObject {
    bool  _isRunning;
    NSMutableArray * _jobs;
    NSString * _name;
    bool  _needSort;
    NUJobQueue * _owner;
    NSObject<OS_dispatch_queue> * _runQueue;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (readonly) long long count;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (void)_addJob:(id)arg1;
- (id)_popJob;
- (bool)_removeJob:(id)arg1;
- (void)_run;
- (bool)_runNextJob;
- (void)_sort;
- (void)_sortIfNeeded;
- (void)_startRunning;
- (void)addJob:(id)arg1;
- (long long)count;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;
- (id)name;
- (id)popJob;
- (bool)removeJob:(id)arg1;
- (bool)start;

@end
