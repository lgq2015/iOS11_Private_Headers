/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {
    <MFCancelable> * _appStateCancelable;
    CDSession * _duetSession;
    NSCountedSet * _identifiers;
    bool  _isForeground;
    int  _pluggedIn;
    unsigned int  _pmNotifier;
    struct IONotificationPort { } * _pmPort;
    NSObject<OS_dispatch_queue> * _powerQueue;
    int  _powerToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isBatterySaverModeEnabled, readonly) bool batterySaverModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHoldingAssertion, readonly) bool holdingAssertion;
@property (nonatomic, readonly) MFObservable *lowPowerModeObservable;
@property (getter=isPluggedIn, readonly) bool pluggedIn;
@property (nonatomic, readonly) MFObservable *pluggedInObservable;
@property (readonly) Class superclass;

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;

- (void)_applicationForegroundStateChanged:(bool)arg1;
- (double)_assertionTimeout;
- (bool)_createBudgetWithName:(id)arg1 parentBudgetName:(id)arg2 attribute:(id)arg3 error:(id*)arg4;
- (bool)_deleteBudgetWithName:(id)arg1;
- (void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1;
- (id)_duetAttributeForAccountWithUniqueId:(id)arg1 discretionary:(bool)arg2;
- (void)_initDuet;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)_releaseAssertion_nts;
- (void)_retainAssertion_nts;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)_setupAssertionTimer:(double)arg1;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)duetIdentifier;
- (id)init;
- (bool)isBatterySaverModeEnabled;
- (bool)isHoldingAssertion;
- (bool)isPluggedIn;
- (id)lowPowerModeObservable;
- (id)pluggedInObservable;
- (id)powerObservable;
- (void)recordDuetEventForAccount:(id)arg1 event:(id)arg2;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (void)startListeningForBatterySaverNotifications;

@end
