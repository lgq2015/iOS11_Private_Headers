/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKInitialSyncProgressTracker : NSObject {
    <NNMKInitialSyncProgressTrackerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableSet * _initialSyncMessageIdsOfContentToAck;
    NSMutableSet * _initialSyncMessageIdsToSyncContent;
    unsigned long long  _initialSyncMessagesCount;
    double  _initialSyncProgress;
    bool  _isWaitingForAccounts;
    bool  _isWaitingForMessageContent;
    bool  _isWaitingForMessageHeaders;
    <NNMKSyncStateManager> * _syncStateManager;
    bool  _timeoutCanceledForAccounts;
    bool  _timeoutCanceledForMessageContent;
    bool  _timeoutCanceledForMessageHeaders;
    bool  _trackingInitialSync;
}

@property (nonatomic) <NNMKInitialSyncProgressTrackerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, retain) NSMutableSet *initialSyncMessageIdsOfContentToAck;
@property (nonatomic, retain) NSMutableSet *initialSyncMessageIdsToSyncContent;
@property (nonatomic) unsigned long long initialSyncMessagesCount;
@property (nonatomic) double initialSyncProgress;
@property (nonatomic, readonly) bool isTrackingInitialSync;
@property (nonatomic) bool isWaitingForAccounts;
@property (nonatomic) bool isWaitingForMessageContent;
@property (nonatomic) bool isWaitingForMessageHeaders;
@property (nonatomic, retain) <NNMKSyncStateManager> *syncStateManager;
@property (nonatomic) bool timeoutCanceledForAccounts;
@property (nonatomic) bool timeoutCanceledForMessageContent;
@property (nonatomic) bool timeoutCanceledForMessageHeaders;
@property (nonatomic) bool trackingInitialSync;

+ (double)syncTimeout;

- (void).cxx_destruct;
- (void)_handleInitialSyncCompleted;
- (void)cancelTimeout;
- (id)delegate;
- (id)executionQueue;
- (void)finishedSendingInitialSyncContentToPairedDevice;
- (void)incrementProgressBy:(double)arg1;
- (id)initialSyncMessageIdsOfContentToAck;
- (id)initialSyncMessageIdsToSyncContent;
- (unsigned long long)initialSyncMessagesCount;
- (double)initialSyncProgress;
- (void)initialSyncTimedOut;
- (bool)isTrackingInitialSync;
- (bool)isWaitingForAccounts;
- (bool)isWaitingForMessageContent;
- (bool)isWaitingForMessageHeaders;
- (void)resetFlags;
- (void)setDelegate:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setInitialSyncMessageIdsOfContentToAck:(id)arg1;
- (void)setInitialSyncMessageIdsToSyncContent:(id)arg1;
- (void)setInitialSyncMessagesCount:(unsigned long long)arg1;
- (void)setInitialSyncProgress:(double)arg1;
- (void)setIsWaitingForAccounts:(bool)arg1;
- (void)setIsWaitingForMessageContent:(bool)arg1;
- (void)setIsWaitingForMessageHeaders:(bool)arg1;
- (void)setSyncStateManager:(id)arg1;
- (void)setTimeoutCanceledForAccounts:(bool)arg1;
- (void)setTimeoutCanceledForMessageContent:(bool)arg1;
- (void)setTimeoutCanceledForMessageHeaders:(bool)arg1;
- (void)setTrackingInitialSync:(bool)arg1;
- (void)startSyncTimeoutForAccounts;
- (void)startSyncTimeoutForMessageContent;
- (void)startSyncTimeoutForMessageHeaders;
- (void)startTrackingInitialSync;
- (void)syncCompleted;
- (void)syncFailedWithError:(id)arg1;
- (id)syncStateManager;
- (bool)timeoutCanceledForAccounts;
- (bool)timeoutCanceledForMessageContent;
- (bool)timeoutCanceledForMessageHeaders;
- (bool)trackingInitialSync;
- (void)updateProgressWithAccountsArrivedInPairedDevice;
- (void)updateProgressWithAccountsSent;
- (void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg1;
- (void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg1;
- (void)updateProgressWithMessageContentDownloadFailed:(id)arg1;
- (void)updateProgressWithMessageHeadersArrivedInPairedDevice;
- (void)updateProgressWithMessageHeadersSent:(id)arg1;

@end
