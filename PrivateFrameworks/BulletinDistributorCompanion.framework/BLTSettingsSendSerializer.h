/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough {
    unsigned long long  _ackHandlerCount;
    NSMutableDictionary * _ackHandlers;
    id /* block */  _acknowledgementBlock;
    NSMutableArray * _completionHandlers;
    NSObject<OS_dispatch_queue> * _queue;
    BLTSendQueueSerializer * _queueSerializer;
    unsigned long long  _responseCount;
}

- (void).cxx_destruct;
- (void)handleFileURL:(id)arg1;
- (id)init;
- (void)sendNowWithSent:(id /* block */)arg1 withAcknowledgement:(id /* block */)arg2 withTimeout:(id)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id /* block */)arg6 andResponse:(id /* block */)arg7 spoolToFile:(bool)arg8;

@end
