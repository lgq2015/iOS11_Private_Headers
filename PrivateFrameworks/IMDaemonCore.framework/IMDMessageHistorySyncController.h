/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageHistorySyncController : NSObject {
    bool  _ckChatSyncControllerNeedsSync;
    <IMDMessageHistorySyncTask> * _currentlyExecutingSyncTask;
    bool  _idsTransportLogNeedsSync;
    bool  _replayControllerNeedsSync;
    <IMDMessageHistorySyncTaskFactory> * _syncTaskFactory;
}

@property (nonatomic) bool ckChatSyncControllerNeedsSync;
@property (nonatomic, retain) <IMDMessageHistorySyncTask> *currentlyExecutingSyncTask;
@property (nonatomic) bool idsTransportLogNeedsSync;
@property (nonatomic) bool replayControllerNeedsSync;
@property (nonatomic, retain) <IMDMessageHistorySyncTaskFactory> *syncTaskFactory;

- (void)IDSTransportLogWantsToSync;
- (void)_evaluateStateAndActIfNeeded;
- (void)_scheduleNextEvaluation;
- (bool)ckChatSyncControllerNeedsSync;
- (void)ckChatSyncControllerWantsToSync;
- (id)currentlyExecutingSyncTask;
- (void)dealloc;
- (bool)idsTransportLogNeedsSync;
- (id)initWithMessageHistorySyncTaskFactory:(id)arg1;
- (bool)replayControllerNeedsSync;
- (void)replayControllerWantsToSync;
- (void)setCkChatSyncControllerNeedsSync:(bool)arg1;
- (void)setCurrentlyExecutingSyncTask:(id)arg1;
- (void)setIdsTransportLogNeedsSync:(bool)arg1;
- (void)setReplayControllerNeedsSync:(bool)arg1;
- (void)setSyncTaskFactory:(id)arg1;
- (id)syncTaskFactory;

@end
