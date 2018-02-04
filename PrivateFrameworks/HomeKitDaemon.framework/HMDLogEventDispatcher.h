/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLogEventDispatcher : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMapTable * _logEventObserversByEventType;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSMapTable *logEventObserversByEventType;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forEventType:(id)arg2;
- (void)addObserver:(id)arg1 forEventTypes:(id)arg2;
- (id)clientQueue;
- (id)init;
- (id)logEventObserversByEventType;
- (void)removeObserver:(id)arg1 forEventType:(id)arg2;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;

@end
