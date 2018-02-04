/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRequestBodyInputStream : NSInputStream {
    int (* _clientCallback;
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    }  _clientContext;
    unsigned long long  _currentIndex;
    unsigned long long  _currentLength;
    unsigned long long  _currentOffset;
    SLRequestMultiPartInputStream * _currentStream;
    unsigned long long  _dataLength;
    unsigned long long  _dataOffset;
    <NSStreamDelegate> * _delegate;
    NSArray * _inputStreams;
    bool  _openEventSent;
    struct __CFRunLoopSource { } * _rls;
    SLRequestBodyInputStream * _selfReferenceDuringStreamEventTrigger;
    unsigned long long  _streamStatus;
}

@property (nonatomic) <NSStreamDelegate> *delegate;
@property (readonly) unsigned long long totalBytes;

- (void).cxx_destruct;
- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (unsigned long long)bytesRead;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2;
- (id)nextStream;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (unsigned long long)totalBytes;

@end
