/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueFileWriter : NSObject {
    int  _fileId;
    NSObject<OS_dispatch_io> * _io;
    int  _offset;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long bytesWritten;
@property (nonatomic, readonly) int fileId;

- (void).cxx_destruct;
- (unsigned long long)bytesWritten;
- (void)dealloc;
- (int)fileId;
- (id)initWithDirectory:(id)arg1 fileId:(int)arg2;
- (void)write:(id)arg1 callback:(id /* block */)arg2;

@end
