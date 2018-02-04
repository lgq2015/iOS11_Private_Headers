/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {
    char * _input;
    unsigned long long  _inputSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    char * _output;
    unsigned long long  _outputSize;
    unsigned long long  _readOffset;
    unsigned long long  _writeOffset;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _zStream;
}

@property (nonatomic, readonly) void*inputPtr;
@property (nonatomic, readonly) long long inputRoom;
@property (nonatomic, readonly) long long outputAvailable;
@property (nonatomic, readonly) const void*outputPtr;

- (void)dealloc;
- (id)init;
- (void*)inputPtr;
- (long long)inputRoom;
- (void)lock;
- (long long)outputAvailable;
- (const void*)outputPtr;
- (long long)readOutputToBuffer:(void*)arg1 length:(long long)arg2;
- (long long)readOutputToStream:(id)arg1;
- (void)setInputSize:(long long)arg1;
- (void)setOutputSize:(long long)arg1;
- (void)setStatusForStream:(id)arg1;
- (void)setZlibError:(int)arg1 forStream:(id)arg2;
- (void)synchronized:(id /* block */)arg1;
- (void)unlock;
- (long long)writeInputFromBuffer:(const void*)arg1 length:(long long)arg2;
- (long long)writeInputFromStream:(id)arg1;

@end
