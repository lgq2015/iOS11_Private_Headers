/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPowerBudget : NSObject {
    <MSPowerBudgetDelegate> * _delegate;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    double  _maxActiveTimeAfterGlobalResetSync;
    double  _maxActiveTimeAfterLossOfForeground;
    double  _maxActiveTimeAfterPush;
    NSString * _personID;
    NSObject<OS_dispatch_queue> * _workQueue;
    MSPBTimerContext * _workQueueGlobalResetSyncTimerContext;
    bool  _workQueueIsExternalPowered;
    bool  _workQueueIsFileTransferAllowed;
    bool  _workQueueIsForeground;
    MSPBTimerContext * _workQueuePostForegroundTimerContext;
    MSPBTimerContext * _workQueuePushTimerContext;
}

@property (nonatomic) <MSPowerBudgetDelegate> *delegate;
@property (getter=isFileTransferAllowed, nonatomic, readonly) bool fileTransferAllowed;
@property (nonatomic, retain) NSString *focusAlbumGUID;
@property (nonatomic, retain) NSString *focusAssetCollectionGUID;
@property (getter=hasForegroundFocus, nonatomic, readonly) bool foregroundFocus;
@property (nonatomic, readonly) bool hasActiveTimers;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) MSPBTimerContext *workQueueGlobalResetSyncTimerContext;
@property (setter=workQueueSetExternalPowered:, nonatomic) bool workQueueIsExternalPowered;
@property (setter=workQueueSetFileTransferAllowed:, nonatomic) bool workQueueIsFileTransferAllowed;
@property (setter=workQueueSetForeground:, nonatomic) bool workQueueIsForeground;
@property (nonatomic, retain) MSPBTimerContext *workQueuePostForegroundTimerContext;
@property (nonatomic, retain) MSPBTimerContext *workQueuePushTimerContext;

- (void).cxx_destruct;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (id)delegate;
- (void)didBeginExternalPower;
- (void)didBeginForegroundFocus;
- (void)didEndExternalPower;
- (void)didEndForegroundFocus;
- (void)didReceiveGlobalResetSync;
- (void)didReceivePushNotification;
- (id)focusAlbumGUID;
- (id)focusAssetCollectionGUID;
- (bool)hasActiveTimers;
- (bool)hasForegroundFocus;
- (id)init;
- (bool)isFileTransferAllowed;
- (double)maxActiveTimeAfterGlobalResetSync;
- (double)maxActiveTimeAfterLossOfForeground;
- (double)maxActiveTimeAfterPush;
- (id)personID;
- (void)setDelegate:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setIsFileTransferAllowed:(bool)arg1;
- (void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1;
- (void)setMaxActiveTimeAfterLossOfForeground:(double)arg1;
- (void)setMaxActiveTimeAfterPush:(double)arg1;
- (void)setPersonID:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setWorkQueueGlobalResetSyncTimerContext:(id)arg1;
- (void)setWorkQueuePostForegroundTimerContext:(id)arg1;
- (void)setWorkQueuePushTimerContext:(id)arg1;
- (void)shutDown;
- (id)workQueue;
- (void)workQueueCommitPersistedValues;
- (id)workQueueGlobalResetSyncTimerContext;
- (bool)workQueueIsExternalPowered;
- (bool)workQueueIsFileTransferAllowed;
- (bool)workQueueIsForeground;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (double)workQueueMaxActiveTimeAfterPush;
- (id)workQueuePostForegroundTimerContext;
- (id)workQueuePushTimerContext;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetExternalPowered:(bool)arg1;
- (void)workQueueSetFileTransferAllowed:(bool)arg1;
- (void)workQueueSetForeground:(bool)arg1;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetIsFileTransferAllowed:(bool)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;

@end
