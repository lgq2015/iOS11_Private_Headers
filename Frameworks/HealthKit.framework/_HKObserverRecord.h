/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKObserverRecord : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id  _observer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) id observer;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)initWithObserver:(id)arg1;
- (id)observer;
- (void)setClientQueue:(id)arg1;
- (void)setObserver:(id)arg1;

@end