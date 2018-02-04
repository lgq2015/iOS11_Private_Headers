/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailManager : NSObject {
    VMVoicemailCapabilities * _capabilities;
    VMClientWrapper * _client;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _concurrentDispatchQueue;
    bool  _messageWaiting;
    bool  _online;
    unsigned long long  _storageUsage;
    bool  _subscribed;
    bool  _syncInProgress;
    int  _token;
    bool  _transcriptionEnabled;
    NSMutableSet * _trashedMessages;
    NSOrderedSet * _voicemails;
}

@property (nonatomic, readonly) NSArray *allVoicemails;
@property (nonatomic, readonly) bool canChangeGreeting;
@property (nonatomic, readonly) bool canChangePassword;
@property (nonatomic, retain) VMVoicemailCapabilities *capabilities;
@property (nonatomic, retain) VMClientWrapper *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentDispatchQueue;
@property (nonatomic, readonly) long long mailboxGreetingState;
@property (nonatomic, readonly) bool mailboxRequiresSetup;
@property (nonatomic, readonly) double maximumGreetingDuration;
@property (nonatomic, readonly) unsigned long long maximumPasswordLength;
@property (getter=isMessageWaiting, nonatomic) bool messageWaiting;
@property (nonatomic, readonly) unsigned long long minimumPasswordLength;
@property (getter=isOnline, nonatomic) bool online;
@property (nonatomic) unsigned long long storageUsage;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (getter=isSyncInProgress, nonatomic) bool syncInProgress;
@property (nonatomic) int token;
@property (getter=isTranscriptionEnabled, nonatomic, readonly) bool transcriptionEnabled;
@property (nonatomic, retain) NSMutableSet *trashedMessages;
@property (nonatomic, readonly) long long unreadCount;
@property (nonatomic, copy) NSOrderedSet *voicemails;

- (void).cxx_destruct;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(bool)arg1;
- (id)allVoicemails;
- (bool)canChangeGreeting;
- (bool)canChangePassword;
- (id)capabilities;
- (void)changePassword:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)client;
- (id)completionQueue;
- (id)concurrentDispatchQueue;
- (unsigned long long)countOfVoicemailsPassingTest:(id /* block */)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)deleteVoicemail:(id)arg1;
- (id)deleteVoicemails:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1;
- (bool)isMessageWaiting;
- (bool)isOnline;
- (bool)isSubscribed;
- (bool)isSyncInProgress;
- (bool)isTranscriptionEnabled;
- (bool)isTranscriptionEnabled;
- (long long)mailboxGreetingState;
- (bool)mailboxRequiresSetup;
- (id)markVoicemailAsRead:(id)arg1;
- (id)markVoicemailsAsRead:(id)arg1;
- (double)maximumGreetingDuration;
- (unsigned long long)maximumPasswordLength;
- (unsigned long long)minimumPasswordLength;
- (id)removeVoicemailFromTrash:(id)arg1;
- (id)removeVoicemailsFromTrash:(id)arg1;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forVoicemail:(id)arg2;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)retrieveGreetingWithCompletionHandler:(id /* block */)arg1;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)serverConnection;
- (id)serverConnectionWithErrorHandler:(id /* block */)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setMessageWaiting:(bool)arg1;
- (void)setOnline:(bool)arg1;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSyncInProgress:(bool)arg1;
- (void)setToken:(int)arg1;
- (void)setTrashedMessages:(id)arg1;
- (void)setVoicemails:(id)arg1;
- (unsigned long long)storageUsage;
- (void)synchronize;
- (id)synchronousServerConnectionWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (id)trashVoicemail:(id)arg1;
- (id)trashVoicemails:(id)arg1;
- (id)trashedMessages;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (long long)unreadCount;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemails;
- (id)voicemailsPassingTest:(id /* block */)arg1;
- (void)voicemailsUpdated:(id)arg1;

@end
