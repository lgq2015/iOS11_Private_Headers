/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSystemStateListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {
    <MTSystemStateDelegate> * _delegate;
    bool  _restoreDoneHandled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTSystemStateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool restoreDoneHandled;
@property (readonly) Class superclass;

+ (id)_restoreNotification;
+ (bool)isSystemRestoreDone;

- (void).cxx_destruct;
- (bool)_checkIfRestoreDone;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (id)delegate;
- (void)handleNotification:(id)arg1;
- (id)handledLiveDarwinNotifications;
- (bool)handlesNotification:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)printDiagnostics;
- (bool)restoreDoneHandled;
- (void)setDelegate:(id)arg1;
- (void)setRestoreDoneHandled:(bool)arg1;

@end
