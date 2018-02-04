/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFPowerObserver : NSObject {
    NFWeakReference * _delegate;
    unsigned int  _powerNotificationConnection;
    unsigned int  _powerNotificationNotifier;
    struct IONotificationPort { } * _powerNotificationPort;
    void * _sleepMessageArgument;
    bool  _willSleep;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool willSleep;

- (void)_powerNotificationMessage:(unsigned int)arg1 argument:(void*)arg2;
- (void)allowSleep;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)registerForEvents;
- (void)unregisterForEvents;
- (bool)willSleep;

@end
