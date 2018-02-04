/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    TSUFileIOChannel * _channel;
    NSError * _error;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)initWithChannel:(id)arg1 handler:(id /* block */)arg2;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;

@end
