/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMessageStreamReader : NSObject <NSStreamDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSError * _error;
    unsigned long long  _headerOffset;
    unsigned int  _headerValue;
    NSInputStream * _inputStream;
    int  _invalidated;
    NSMutableData * _messageData;
    unsigned long long  _messageDataOffset;
    id /* block */  _messageHandler;
    long long  _state;
    NSObject<OS_dispatch_queue> * _streamQueue;
    unsigned int  _streamVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeMessageHandlerWithData:(id)arg1 finished:(bool)arg2 error:(id)arg3;
- (void)_streamQueue_close;
- (void)_streamQueue_finish;
- (void)_streamQueue_readBytes;
- (long long)_streamQueue_readHeader;
- (long long)_streamQueue_readMessage;
- (void)_streamQueue_transistionToError:(id)arg1;
- (void)_streamQueue_transistionToReadingMessageBytesWithLength:(unsigned long long)arg1;
- (void)_streamQueue_transistionToReadingMessageLength;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithInputStream:(id)arg1;
- (void)invalidate;
- (id /* block */)messageHandler;
- (void)open;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
