/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUFileIOChannel : NSObject <TSURandomWriteChannel, TSUReadChannel, TSUStreamWriteChannel> {
    NSObject<OS_dispatch_io> * _channel;
    NSObject<OS_dispatch_queue> * _ioQueue;
    bool  _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)initForRandomWritingURL:(id)arg1 error:(id*)arg2;
- (id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(id /* block */)arg3;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(id /* block */)arg3;
- (id)initForReadingURL:(id)arg1 error:(id*)arg2;
- (id)initForReadingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(id /* block */)arg3;
- (id)initForStreamWritingURL:(id)arg1 error:(id*)arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(id /* block */)arg3;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5 cleanupHandler:(id /* block */)arg6;
- (id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(id /* block */)arg4;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 handler:(id /* block */)arg2;
- (void)writeData:(id)arg1 offset:(long long)arg2 handler:(id /* block */)arg3;

@end
