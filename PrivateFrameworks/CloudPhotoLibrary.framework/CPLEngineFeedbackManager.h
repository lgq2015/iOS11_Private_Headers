/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineFeedbackManager : NSObject {
    bool  _closed;
    CPLEngineLibrary * _engineLibrary;
    NSURL * _feedbackMessagesURL;
    NSDate * _lastAttemptDate;
    NSArray * _messagesSending;
    NSMutableArray * _messagesToSend;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportSendFeedbackTask> * _sendTask;
}

@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;

- (void).cxx_destruct;
- (void)_appendMessage:(id)arg1;
- (void)_appendMessages:(id)arg1;
- (void)_load;
- (void)_reallySendFeedbackToServer;
- (void)_save;
- (void)_sendFeedbackToServerIfNecessary;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (id)engineLibrary;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)reportEndOfReset;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;
- (void)reportMessage:(id)arg1;
- (void)reportMessages:(id)arg1;
- (void)reportResetType:(id)arg1 reason:(id)arg2;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)sendFeedbackToServerIfNecessary;

@end
