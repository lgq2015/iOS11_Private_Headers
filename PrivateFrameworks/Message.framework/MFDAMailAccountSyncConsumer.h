/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
    NSConditionLock * _accountHierarchyLock;
    NSString * _accountID;
    NSMutableData * _bodyData;
    NSArray * _consumers;
    bool  _firstSyncBatch;
    MFActivityMonitor * _monitor;
    bool  _moreAvailable;
    bool  _receivedFirstItem;
    NSArray * _requests;
    int  _serverErrors;
    id  _streamConsumer;
    int  _syncKeyResets;
    NSMutableDictionary * _syncResponseConsumersByMessageId;
    NSString * _tag;
}

@property (nonatomic, readonly) bool moreAvailable;
@property (nonatomic, retain) id streamConsumer;
@property (nonatomic, readonly) NSString *tag;

- (void)_setTag:(id)arg1;
- (void)accountHierarchyChanged:(id)arg1;
- (id)actionsConsumer;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)dealloc;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)handleSyncResponses:(id)arg1;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;
- (bool)moreAvailable;
- (id)originalThreadMonitor;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(bool)arg5;
- (bool)refreshFolderHierarchyAndWait:(unsigned long long)arg1;
- (void)reset;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(bool)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8;
- (void)setStreamConsumer:(id)arg1;
- (bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)streamConsumer;
- (id)tag;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;

@end
