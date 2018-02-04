/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAConvertCRtoCRLFStream : NSInputStream {
    int (* _clientCallback;
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    }  _clientContext;
    id  _delegate;
    bool  _intendToStream;
    bool  _lastByteCopiedWasCR;
    NSData * _mimeData;
    bool  _openEventSent;
    NSData * _postflightData;
    NSData * _preflightData;
    unsigned long long  _readOffset;
    struct __CFRunLoopSource { } * _rls;
    unsigned long long  _streamStatus;
    unsigned long long  _totalLength;
    ASTrafficLogger * _trafficLogger;
}

- (void).cxx_destruct;
- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithData:(id)arg1;
- (id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(bool)arg4;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
