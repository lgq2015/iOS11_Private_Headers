/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDarwinNotificationListener : NSObject <CalActivatable> {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _listening;
    NSString * _notificationName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool listening;
@property (nonatomic, retain) NSString *notificationName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)_addObserver;
- (void)_notificationWithNameReceived:(id)arg1;
- (bool)_removeObserver;
- (void)activate;
- (id /* block */)callback;
- (id)callbackQueue;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 callback:(id /* block */)arg2;
- (bool)listening;
- (id)notificationName;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setListening:(bool)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
