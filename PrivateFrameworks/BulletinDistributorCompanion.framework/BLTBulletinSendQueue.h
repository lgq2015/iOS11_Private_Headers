/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough {
    BLTBulletinSendQueueAttachmentSender * _attachmentSender;
    NSMutableArray * _completionHandlers;
    PBCodable * _firstRequest;
    unsigned short  _firstRequestType;
    NSDate * _lastItemDate;
    NSDate * _lastQueueSendDate;
    NSObject<OS_dispatch_queue> * _queue;
    BLTSendQueueSerializer * _queueSerializer;
    NSMutableArray * _queuedBlockHandlers;
    NSNumber * _timeout;
    PCPersistentTimer * _timeoutTimer;
}

- (void).cxx_destruct;
- (void)_queue_performSend;
- (void)_queue_queuePending;
- (void)_queue_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(bool)arg4 didSend:(id /* block */)arg5 didQueue:(id /* block */)arg6;
- (void)_queue_startTimerWithFireDate:(id)arg1;
- (void)handleFileURL:(id)arg1;
- (id)init;
- (void)queuePending;
- (void)sendNow;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id /* block */)arg3 didQueue:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(bool)arg3 didSend:(id /* block */)arg4;

@end
