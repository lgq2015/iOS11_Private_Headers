/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessageQueue : NSObject {
    MRWeakRef * _datasource;
    MRWeakRef * _delegate;
    MRPendingMessageQueue * _pendingMessageQueue;
    NSMutableDictionary * _pendingReplyQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <MRProtocolMessageQueueDataSource> *datasource;
@property (nonatomic) <MRProtocolMessageQueueDelegate> *delegate;

- (id)_dataForMessage:(id)arg1;
- (id)datasource;
- (void)dealloc;
- (id)delegate;
- (void)enqueueMessage:(id)arg1 reply:(id /* block */)arg2 queue:(id)arg3;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (bool)reply:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
