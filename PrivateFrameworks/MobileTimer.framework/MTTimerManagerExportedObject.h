/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerManagerExportedObject : NSObject <MTTimerClient> {
    MTTimerManager * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTTimerManager *timerManager;

- (void).cxx_destruct;
- (void)_didReceiveTimerServerReadyNotification:(id)arg1;
- (void)dealloc;
- (id)initWithTimerManager:(id)arg1;
- (void)nextTimerChanged:(id)arg1;
- (void)timerDismissed:(id)arg1;
- (void)timerFired:(id)arg1;
- (id)timerManager;
- (void)timersAdded:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;

@end
