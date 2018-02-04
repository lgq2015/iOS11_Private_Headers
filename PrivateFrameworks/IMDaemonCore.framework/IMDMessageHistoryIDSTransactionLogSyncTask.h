/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask> {
    IMDAccountController * _accountController;
    NSString * _className;
    id /* block */  _syncTaskCompletionBlock;
    NSMutableDictionary * _taskGroupedByServiceName;
}

@property (nonatomic, retain) IMDAccountController *accountController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncTaskCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *taskGroupedByServiceName;

- (id /* block */)_createKnownRecordBlock;
- (id /* block */)_createProcessBatchBlockWithServiceSession:(id)arg1;
- (id /* block */)_createSyncCompletionBlockForServiceSession:(id)arg1;
- (void)_setupAndBeginSync;
- (id)accountController;
- (void)dealloc;
- (id)initWithAccountController:(id)arg1;
- (void)setAccountController:(id)arg1;
- (void)setSyncTaskCompletionBlock:(id /* block */)arg1;
- (void)setTaskGroupedByServiceName:(id)arg1;
- (void)startSyncTask:(id /* block */)arg1;
- (id /* block */)syncTaskCompletionBlock;
- (unsigned long long)syncTaskType;
- (id)taskGroupedByServiceName;

@end
