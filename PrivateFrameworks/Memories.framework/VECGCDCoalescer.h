/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VECGCDCoalescer : NSObject {
    NSMutableArray * _blocks;
    double  _delay;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _keys;
    NSObject<OS_dispatch_group> * _processDoneGroup;
    NSObject<OS_dispatch_source> * _processingTimer;
    bool  _processingTimerActive;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)coalescerWithDelay:(double)arg1;
+ (id)sharedFiveSecondCoalescer;

- (void).cxx_destruct;
- (void)_addBlock:(id /* block */)arg1 withKey:(id)arg2;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_processImmediately;
- (void)_processTimer;
- (void)coalesceBlock:(id /* block */)arg1 withKey:(id)arg2;
- (void)dealloc;
- (void)debugWaitUntilBlocksHaveBeenProcessed;
- (id)init;
- (id)initWithQueue:(id)arg1 delay:(double)arg2;

@end
