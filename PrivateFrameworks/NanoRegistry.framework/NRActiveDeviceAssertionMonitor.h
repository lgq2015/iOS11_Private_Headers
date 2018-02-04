/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRActiveDeviceAssertionMonitor : NSObject {
    int  _assertionToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) int assertionToken;
@property (nonatomic, readonly) bool hasActiveAssertion;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)arg1;
- (int)assertionToken;
- (bool)hasActiveAssertion;
- (void)notifyObserversWithTokenValue:(int)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAssertionToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startObservingToken;
- (void)stopObservingToken;
- (id)workQueue;

@end