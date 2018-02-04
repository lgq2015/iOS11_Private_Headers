/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

@interface NSSNewsAvailabilityMonitor : NSObject {
    bool  _NewsIsAvailable;
    LSApplicationProxy * _applicationProxy;
    NSMutableArray * _blocks;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isNewsAvailable, nonatomic, readonly) bool NewsIsAvailable;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (nonatomic, retain) NSMutableArray *blocks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)_isNewsAvailable;
- (void)_updateAvailability;
- (void)addNotificationBlock:(id /* block */)arg1;
- (id)applicationProxy;
- (id)blocks;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationProxy:(id)arg1 queue:(id)arg2;
- (id)initWithProcessVariant:(unsigned long long)arg1;
- (id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2;
- (bool)isNewsAvailable;
- (id)queue;
- (void)setApplicationProxy:(id)arg1;
- (void)setBlocks:(id)arg1;
- (void)setNewsIsAvailable:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
