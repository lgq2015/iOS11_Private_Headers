/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVService : NSObject <VMTranscriptionService> {
    NSError * _activationError;
    long long  _capabilities;
    id  _carrierParameters;
    struct __CFString { } * _lastConnectionTypeUsed;
    NSRecursiveLock * _lock;
    int  _mailboxUsage;
    Class  _notificationInterpreter;
    unsigned long long  _numFailedAttemptsToSyncOverWifi;
    NSString * _password;
    NSError * _passwordError;
    NSString * _passwordMailboxName;
    int  _retryIntervalIndex;
    NSArray * _retryIntervals;
    struct { 
        unsigned int offline : 1; 
        unsigned int subscribed : 1; 
        unsigned int initialSetupRequired : 1; 
        unsigned int fakeInitialSetup : 1; 
        unsigned int launchedWithFakeInitialSetup : 1; 
        unsigned int mwiState : 1; 
        unsigned int notificationFallbackEnabled : 1; 
        unsigned int capabilitiesLoaded : 1; 
    }  _serviceFlags;
    NSString * _serviceIdentifier;
    VMVoicemailTranscriptionController * _transcriptionController;
    VMVoicemailTranscriptionTask * _transcriptionTask;
    double  _trashCompactionAge;
    unsigned int  _trashedCount;
    unsigned int  _unreadCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CFString { }*lastConnectionTypeUsed;
@property (nonatomic) unsigned long long numFailedAttemptsToSyncOverWifi;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (readonly) Class superclass;
@property (getter=isTranscriptionAvailable, nonatomic, readonly) bool transcriptionAvailable;
@property (nonatomic, retain) VMVoicemailTranscriptionController *transcriptionController;
@property (nonatomic, retain) VMVoicemailTranscriptionTask *transcriptionTask;

+ (struct __CTServerConnection { }*)CTServerConnection;
+ (void)_acquireAssertionsForInsomniaState:(bool)arg1;
+ (void)_handleSIMChanged;
+ (bool)_lockedSharedServiceIsSubscribed;
+ (void)_setInsomniaStateSupressed:(bool)arg1;
+ (void)_subscriptionStateChanged;
+ (unsigned int)_voicemailPowerAssertion;
+ (void)initialize;
+ (void)obtainInsomniaAssertion;
+ (void)releaseInsomniaAssertion;
+ (id)sharedService;
+ (bool)sharedServiceIsSubscribed;
+ (id)transcriptionLanguageCodes;

- (void).cxx_destruct;
- (void)_attemptDelayedSynchronize;
- (void)_attemptScheduledTrashCompaction:(id)arg1;
- (void)_callStatusChanged;
- (void)_cancelAutomatedTrashCompaction;
- (void)_cancelIndicatorAction;
- (void)_carrierBundleChanged;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_dataAvailabilityChanged;
- (void)_dataRoamingStatusChanged;
- (void)_deliverFallbackNotification;
- (void)_enterFallbackMode;
- (void)_handleIndicatorNotification:(struct __CFDictionary { }*)arg1;
- (void)_handleSMSCAvailable;
- (void)_handleSMSReady:(bool)arg1;
- (bool)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (void)_reactToIndicator;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_scheduleFallbackActivityIfNecessary;
- (void)_setActivationError:(id)arg1;
- (void)_setOnline:(bool)arg1 fallbackMode:(bool)arg2;
- (void)_updateOnlineStatus;
- (id)activationError;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelDelayedSynchronize;
- (void)cancelNotificationFallback;
- (void)cancelPasswordRequest;
- (long long)capabilities;
- (id)carrierParameterValueForKey:(id)arg1;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearActivationError;
- (void)clearRemoteUIDsForDetachedMessages;
- (struct __CFString { }*)connectionServiceType;
- (struct __CFString { }*)dataConnectionServiceTypeOverride;
- (bool)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(bool*)arg2;
- (void)dealloc;
- (void)displayPasswordRequestIfNecessary;
- (bool)doTrashCompaction;
- (bool)doesClientManageTrashCompaction;
- (bool)greetingAvailable;
- (bool)greetingFetchExistsProgressiveLoadInProgress:(bool*)arg1;
- (void)handleAFLanguageCodeDidChangeNotification:(id)arg1;
- (void)handleNotification:(id)arg1 isMWI:(bool)arg2;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)handlePasswordRequestCancellation;
- (void)handleVVServiceDataAvailableNotification:(id)arg1;
- (bool)headerChangesPending;
- (id)init;
- (bool)isInSync;
- (bool)isMessageWaiting;
- (bool)isOfflineDueToRoaming;
- (bool)isOnline;
- (bool)isPasswordReady;
- (bool)isSubscribed;
- (bool)isSupportedTranscriptionLanguageCode:(id)arg1;
- (bool)isSyncInProgress;
- (bool)isTranscriptionAvailable;
- (bool)isVVMAvailableOverWiFi;
- (void)kill;
- (struct __CFString { }*)lastConnectionTypeUsed;
- (bool)lastUsedConnectionTypeWasCellular;
- (void)loadTranscriptionService;
- (long long)mailboxGreetingType;
- (id)mailboxName;
- (bool)mailboxRequiresSetup;
- (int)mailboxUsage;
- (int)maximumGreetingDuration;
- (int)maximumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)minimumPasswordLength;
- (void)moveRecordsWithIdentifiersToInbox:(id)arg1;
- (void)moveRecordsWithIdentifiersToTrash:(id)arg1;
- (Class)notificationInterpreterClass;
- (unsigned long long)numFailedAttemptsToSyncOverWifi;
- (id)password;
- (bool)passwordChangeRequiresEnteringOldPassword;
- (id)passwordIgnoringSubscription:(bool)arg1;
- (void)processTranscriptForRecord:(const void*)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned int*)arg2 current:(unsigned int*)arg3;
- (id)provisionalPassword;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)reportError:(id)arg1;
- (void)reportFailedToSyncOverWifi;
- (void)reportSucessfulSync;
- (void)reportTranscriptionProblemForRecord:(const void*)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forRecord:(const void*)arg2;
- (void)resetCounts;
- (void)resetDelayedSynchronizationAttemptCount;
- (bool)respectsMWINotifications;
- (void)retranscribeAllVoicemails;
- (void)retrieveDataForRecord:(void*)arg1;
- (void)retrieveGreeting;
- (id)retryIntervals;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (void)scheduleImmediateSynchronizeRetryOverCellular;
- (id)serviceIdentifier;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned long long)arg3;
- (void)setLastConnectionTypeUsed:(struct __CFString { }*)arg1;
- (void)setLastUsedConnectionType:(struct __CFString { }*)arg1;
- (void)setMailboxRequiresSetup:(bool)arg1;
- (void)setMailboxUsage:(int)arg1;
- (void)setMessageWaiting:(bool)arg1;
- (void)setNumFailedAttemptsToSyncOverWifi:(unsigned long long)arg1;
- (void)setOnline:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setTranscriptionController:(id)arg1;
- (void)setTranscriptionTask:(id)arg1;
- (void)setTrashedCount:(unsigned int)arg1;
- (void)setUnreadCount:(unsigned int)arg1;
- (bool)sharedSubscriptionRequiresSetup;
- (bool)shouldImmediatelyRetrySyncOverCellular;
- (bool)shouldScheduleAutoTrashOnMailboxUsageChange;
- (bool)shouldTrashCompactRecord:(void*)arg1;
- (bool)synchronizationPending;
- (void)synchronize:(bool)arg1;
- (bool)taskOfTypeExists:(long long)arg1;
- (id)transcriptionController;
- (id)transcriptionTask;
- (double)trashCompactionAge;
- (unsigned int)trashedCount;
- (void)unloadTranscriptionService;
- (unsigned int)unreadCount;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)updateLoggingSettings;

@end
