/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKZipDeflateMemoryOutputStream : NSObject {
    int  _bufferingSize;
    char * _outputBuffer;
    NSMutableData * deflatedData;
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
    }  zstream;
}

+ (id)dataByDeflatingData:(id)arg1;

- (void).cxx_destruct;
- (id)close;
- (void)dealloc;
- (id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2;
- (bool)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
