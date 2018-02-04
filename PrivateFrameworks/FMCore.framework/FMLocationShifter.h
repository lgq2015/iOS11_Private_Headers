/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMLocationShifter : NSObject {
    GEOLocationShifter * _locationShifter;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, retain) GEOLocationShifter *locationShifter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (id)init;
- (bool)isLocationShiftRequiredForItem:(id)arg1;
- (bool)isLocationShiftRequiredForItems:(id)arg1;
- (id)locationShifter;
- (id)queue;
- (id)semaphore;
- (void)setLocationShifter:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (id)shiftLocation:(id)arg1 timeout:(double)arg2;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)shiftLocations:(id)arg1 timeout:(double)arg2;
- (void)shiftLocations:(id)arg1 withCompletionHandler:(id /* block */)arg2 callbackQueue:(id)arg3;

@end
