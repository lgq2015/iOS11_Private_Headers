/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {
    unsigned int  _CRC;
    char * _outBuffer;
    unsigned long long  _outBufferSize;
    <TSUStreamReadChannel> * _readChannel;
    unsigned long long  _remainingUncompressedSize;
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
    }  _stream;
    bool  _validateCRC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(id /* block */)arg1 error:(id)arg2;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(bool)arg4;
- (void)prepareBuffer;
- (bool)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned int*)arg3 isDone:(bool)arg4 handler:(id /* block */)arg5;
- (void)readWithHandler:(id /* block */)arg1;

@end
