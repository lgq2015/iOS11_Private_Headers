/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVBufferedInputStream : NSInputStream {
    NSMutableData * _buffer;
    <NSStreamDelegate> * _delegate;
    NSMutableDictionary * _properties;
    NSRunLoop * _scheduledRunLoop;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _status;
}

- (void)_init;
- (void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (void)handleDataReceived:(id)arg1;
- (void)handleStreamDisconnect;
- (bool)hasBytesAvailable;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
