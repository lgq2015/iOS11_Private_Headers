/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageBodyFetchConsumer : NSObject <DAMailAccountStreamConsumerFactory, MFRequestQueueResponseConsumer> {
    NSData * _data;
    MFError * _error;
    bool  _hasLocalCopyOfData;
    <MFDAStreamingContentConsumer> * _streamConsumer;
    bool  _succeeded;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFError *error;
@property (nonatomic) bool hasLocalCopyOfData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MFDAStreamingContentConsumer> *streamConsumer;
@property (nonatomic, readonly) bool succeeded;
@property (readonly) Class superclass;

- (id)data;
- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (bool)hasLocalCopyOfData;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasLocalCopyOfData:(bool)arg1;
- (void)setStreamConsumer:(id)arg1;
- (id)streamConsumer;
- (id)streamingContentConsumer;
- (bool)succeeded;
- (bool)wantsData;

@end
