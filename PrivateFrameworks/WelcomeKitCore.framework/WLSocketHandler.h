/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSocketHandler : NSObject {
    NSMutableArray * _dataCache;
    NSObject<OS_dispatch_source> * _dataCacheReadSource;
    NSObject<OS_dispatch_semaphore> * _dataCacheSema;
    NSObject<OS_dispatch_queue> * _readQueue;
}

+ (id)_commandStringWithData:(id)arg1;
+ (int)connectToHost:(id)arg1 address:(struct hostent { char *x1; char **x2; int x3; int x4; char **x5; }*)arg2 port:(unsigned short)arg3;
+ (void)lookupAndConnectToHost:(id)arg1 port:(unsigned short)arg2 completion:(id /* block */)arg3;
+ (void)performDNSLookupForHost:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_readIntoCacheFromSocket:(int)arg1;
- (void)_writeBytes:(const void*)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 toSocket:(int)arg4 completion:(id /* block */)arg5;
- (void)beginReadingIntoCacheFromSocket:(int)arg1;
- (void)dealloc;
- (void)endReadingIntoCache;
- (id)init;
- (id)observeSocket:(int)arg1 forSourceEventType:(struct dispatch_source_type_s { }*)arg2 handler:(id /* block */)arg3;
- (char *)readBytesFromSocket:(int)arg1 maximumSize:(unsigned long long)arg2 bytesRead:(long long*)arg3;
- (void)sendCommand:(id)arg1 toSocket:(int)arg2 completion:(id /* block */)arg3;
- (void)sendData:(id)arg1 toSocket:(int)arg2 completion:(id /* block */)arg3;
- (id)waitForBlobDataFromReadCacheReturningError:(id*)arg1;
- (bool)waitForCommand:(id)arg1 fromReadCacheReturningError:(id*)arg2;
- (id)waitForDataFromReadCacheReturningError:(id*)arg1;
- (void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 toSocket:(int)arg3 completion:(id /* block */)arg4;

@end
